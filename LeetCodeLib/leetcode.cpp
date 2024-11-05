#include "pch.h"

#include <string>
#include <iostream>
#include <numeric> 
#include <unordered_set> 
#include <unordered_map> 
#include <set> 
#include <map> 
#include <stack>
#include <algorithm> 

#include "leetcode.h"

namespace leetcode
{
    int pivotIndex(std::vector<int>& nums) {
        for (int SUM = std::accumulate(nums.begin(), nums.end(), 0), pvt = 0, lsum = 0, rsum = SUM - nums[pvt];
            pvt < nums.size();
            lsum += nums[pvt++], rsum -= pvt < nums.size() ? nums[pvt] : 0)
            if (rsum == lsum)
                return pvt;
        return -1;
    }

    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2)
    {
        unordered_set<int> set1(std::make_move_iterator(nums1.begin()), std::make_move_iterator(nums1.end()));
        unordered_set<int> set2(std::make_move_iterator(nums2.begin()), std::make_move_iterator(nums2.end()));
        vector<vector<int> > answer = { {} , {} };

        for (const auto& i : set1)
            if (set2.find(i) == set2.cend())
                answer[0].push_back(i);

        for (const auto& i : set2)
            if (set1.find(i) == set1.cend())
                answer[1].push_back(i);

        return answer;
    }

    bool uniqueOccurrences(vector<int>& arr)
    {
        map<int, int> occMap;
        for (const auto& item : arr)
            ++occMap[item];

        unordered_set<int> occSet;
        for (const auto& [key, occ] : occMap)
            occSet.insert(occ);

        return occSet.size() == occMap.size();
    }

    bool closeStrings(string word1, string word2)
    {
        /*
        if (word1.size() != word2.size())
            return false;

        map<char, int> occMap1;
        for (const auto& item : word1)
            ++occMap1[item];

        vector<int> occVec1;
        for (const auto& [key, occ] : occMap1)
            occVec1.push_back(occ);

        map<char, int> occMap2;
        for (const auto& item : word2)
        {
            ++occMap2[item];
            if (occMap1.find(item) == occMap1.cend())
                return false;
        }

        vector<int> occVec2;
        for (const auto& [key, occ] : occMap2)
            occVec2.push_back(occ);

        std::sort(occVec1.begin(), occVec1.end());
        std::sort(occVec2.begin(), occVec2.end());

        return occVec2.size() == occVec1.size() &&
            std::equal(occVec1.begin(), occVec1.end(), occVec2.begin());
        */
        // By understanding that there are only 26 letters in the alphabet we can replace the set and map with a vector...
        if (word1.size() != word2.size())
            return false;

        std::vector<int> freq1(26, 0), freq2(26, 0); //Represents freq of each char in alphabet

        for (char ch : word1)
            freq1[ch - 'a']++;

        for (char ch : word2)
            freq2[ch - 'a']++;

        //ensure that the set of chars are equal.
        for (int i = 0; i < 26; i++)
            if ((freq1[i] && !freq2[i]) || (!freq1[i] && freq2[i]))
                return false;

        std::sort(freq1.begin(), freq1.end()); std::sort(freq2.begin(), freq2.end());

        //ensure that the set of chars freqs are equal - char independant.
        for (int i = 0; i < 26; i++)
            if (freq1[i] != freq2[i])
                return false;

        return true;
    }

    int equalPairs(vector<vector<int>>& grid)
    {
        int count = 0;
        set<vector<int>> uniqueRows;
        unordered_map<int, vector<int>> dupeRows;

        for (int i = 0; i < grid.size(); ++i)
        {
            // if the row already exists, then in case of a duplicate, it has to be counted multiple times
            if (uniqueRows.find(grid[i]) != uniqueRows.end())
                dupeRows[i] = grid[i];
            uniqueRows.insert(grid[i]);
        }
        for (int i = 0; i < grid.size(); ++i)
        {
            vector<int> col;
            for (int j = 0; j < grid.size(); ++j)
                col.push_back(grid[j][i]);

            if (uniqueRows.find(col) == uniqueRows.end())
                continue;

            //if col in uniqueRow increment
            ++count;

            //  iterate through dupe unordered_map to add duplicate rows
            for (const auto& [iRow, row] : dupeRows)
                if (row == col)
                    ++count;
        }

        return count;
    }

    string removeStars(string s)
    {
        std::vector<std::pair<int, int>> removes;
        for (int it = s.size() - 1; it >= 0; --it)
        {
            if (s[it] != '*')
                continue;

            if (removes.size() == 0)
                removes.push_back(std::make_pair(it, 1));
            else if (removes.back().first - removes.back().second > it)
                removes.push_back(std::make_pair(it, 1));
            else if (removes.back().first - removes.back().second <= it)
            {
                --removes.back().first;
                ++removes.back().second;
            }
        }

        for (const auto& [idx, len] : removes)
            s.erase(idx - len, 2 * len);

        return s;
    }

    vector<int> asteroidCollision(vector<int>& asteroids)
    {
        for (int i = 0, j = 1; i >= 0 && j < asteroids.size(); )
        {
            if (!(asteroids[i] > 0 && asteroids[j] < 0))
            { //No Collision
                i++;
                j++;
                continue;
            }
            else if (asteroids[i] + asteroids[j] == 0) //perfect collision
            {
                asteroids.erase(asteroids.begin() + j);
                asteroids.erase(asteroids.begin() + i);
                if (j == asteroids.size() || i > 0)
                {
                    --j;
                    --i;
                }
                continue;
            }
            else if (asteroids[i] + asteroids[j] > 0) //rhs explodes
            {
                asteroids.erase(asteroids.begin() + j);
                if (j == asteroids.size() || i > 0)
                {
                    --j;
                    --i;
                }
                continue;
            }

            asteroids.erase(asteroids.begin() + i); //lhs explodes
            if (i > 0 && j > i)
            {
                j--;
                i--;
            }
        }
        return asteroids;
    }

    string decodeString(string s)
    {
        stack<uint16_t> numStack;
        stack<std::string> subStrStack;
        std::string answer = "";
        uint16_t n = 0;
        for (char c : s)
        {
            if (isdigit(c)) //start new op
                n = n * 10 + c - '0'; // calc n
            else if (c == '[') // finish number - start characters
            {
                numStack.push(n);
                n = 0;
                subStrStack.push(answer); // clear subStr
                answer.clear();
            }
            else if (c == ']') // finish characters of last op
            {
                uint16_t k = numStack.top(); numStack.pop();
                std::string temp = answer;
                answer = subStrStack.top(); subStrStack.pop();
                while (k-- > 0)
                    answer += temp;
            }
            else  // add characters  
                answer += c;
        }

        return answer;
    }

    int RecentCounter::ping(int t)
    {
        while (!m_Q.empty() && m_Q.front() < t - WINDOW)
            m_Q.pop();

        m_Q.push(t);
        return m_Q.size();
    }

    string predictPartyVictory(string senate)
    {
        std::queue<int> rad;
        std::queue<int> dir;
        int i = 0;
        for (const char c : senate)
            if (c == 'R')
                rad.push(i++);
            else
                dir.push(i++);

        while (!rad.empty() && !dir.empty())
        {
            if (rad.front() < dir.front())
                rad.push(i++);
            else
                dir.push(i++);

            rad.pop();
            dir.pop();
        }

        return rad.empty() ? "Dire" : "Radiant";
    }

    ListNode* deleteMiddle(ListNode* head)
    {
        if (!head->next)
            return nullptr;

        size_t sz = 1;
        ListNode* curr = head;
        while (curr->next)
        {
            sz++;
            curr = curr->next;
        }

        if (sz == 1)
        {
            delete head->next;
            head->next = nullptr;
            return head;
        }

        size_t middle = sz / 2;
        sz = 0;
        curr = head; //pre middle
        while (sz < middle - 1)
        {
            sz++;
            curr = curr->next;
        }

        ListNode* newMiddle = curr->next->next;
        delete curr->next;
        curr->next = newMiddle;

        return head;
    }

    ListNode* oddEvenList(ListNode* head)
    {
        if (!head || !head->next || !head->next->next)
            return head;

        ListNode* odd = head;
        ListNode* even = head->next;
        ListNode* even_start = head->next;

        while (odd->next && even->next)
        {
            odd->next = even->next;         //Connect all odds
            even->next = odd->next->next;  //Connect all evens
            odd = odd->next;
            even = even->next;
        }
        odd->next = even_start;             //Place the first even node after the last odd node.
        return head;
    }

    ListNode* reverseList(ListNode* head)
    {
        if (!head || !head->next)
            return head;

        //#define REVERSELIST_FAST
#ifdef REVERSELIST_FAST
        std::vector<int> valVec;
        ListNode* curr = head;
        while (curr)
        {
            valVec.push_back(curr->val);
            curr = curr->next;
        }
        std::reverse(valVec.begin(), valVec.end());
        curr = head;
        auto it = valVec.begin();
        while (curr)
        {
            curr->val = *it;
            it++;
            curr = curr->next;
        }
#else// low memory
        std::stack<ListNode*> reverseOrder;
        ListNode* curr = head;
        while (curr)
        {
            reverseOrder.push(curr);
            curr = curr->next;
        }


        ListNode* newHead = reverseOrder.top();
        reverseOrder.pop();
        newHead->next = reverseOrder.top();
        ListNode* newHeadPtr = newHead->next;

        while (reverseOrder.size())
        {
            newHeadPtr->next = reverseOrder.top();
            newHeadPtr = newHeadPtr->next;
            reverseOrder.pop();
        }

        newHeadPtr->next = nullptr;
        head = newHead;
#endif

        return head;
    }

    ListNode* pairSum_splitList(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* prev = nullptr;
        while (fast != nullptr && fast->next != nullptr) {
            prev = slow;
            slow = slow->next;
            fast = fast->next->next;
        }
        prev->next = nullptr;
        return slow;
    }
    ListNode* pairSum_reverseList(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* curr = head;
        while (curr != nullptr) {
            ListNode* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
    int pairSum(ListNode* head)
    {
        //#define PAIRSUM_NOREVERSE
#ifdef PAIRSUM_NOREVERSE
        std::deque<int> actual;
        for (leetcode::ListNode* curr = head; curr; curr = curr->next)
            actual.push_back(curr->val);

        int maxPair = 0;
        while (!actual.empty())
        {
            maxPair = max(maxPair, actual.front() + actual.back());
            actual.pop_back();
            actual.pop_front();
        }

        return maxPair;
#endif
        //#define PAIRSUM_CRAPREVERSE
#ifdef PAIRSUM_CRAPREVERSE
        std::stack<ListNode*> reverseOrder;
        ListNode* fwdIt = head;
        while (fwdIt)
        {
            reverseOrder.push(fwdIt);
            fwdIt = fwdIt->next;
        }

        const size_t halfway = reverseOrder.size() / 2;
        ListNode* reverse = reverseOrder.top();
        reverseOrder.pop();
        reverse->next = reverseOrder.top();
        ListNode* reverseIt = reverse->next;

        while (reverseOrder.size() > halfway)
        {
            reverseIt->next = reverseOrder.top();
            reverseIt = reverseIt->next;
            reverseOrder.pop();
        }

        reverseIt->next = nullptr;
        reverseIt = reverse;
        fwdIt = head;

        int ans = 0;
        while (fwdIt && reverseIt)
        {
            ans = max(ans, fwdIt->val + reverseIt->val);
            fwdIt = fwdIt->next;
            reverseIt = reverseIt->next;
        }

        return ans;
#endif

#define PAIRSUM_GOODREVERSE
#ifdef PAIRSUM_GOODREVERSE
        if (head == nullptr || head->next == nullptr) return 0;
        ListNode* secondHalf = pairSum_splitList(head);// spilt from second half
        secondHalf = pairSum_reverseList(secondHalf);//reverse the second half
        ListNode* firstHalf = head;
        int result = INT_MIN;
        while (firstHalf != nullptr && secondHalf != nullptr) {
            int sum = firstHalf->val + secondHalf->val;
            result = max(result, sum);
            firstHalf = firstHalf->next;
            secondHalf = secondHalf->next;
        }
        return result;
#endif
    }

#ifdef MAXDEPTH_ATTEMPT_1
    int maxDepthRecur(TreeNode* root, int depthSoFar)
    {
        if (!root)
            return depthSoFar - 1;
        else if (!root->left && !root->right)
            return depthSoFar;

        return max(maxDepthRecur(root->left, depthSoFar + 1), maxDepthRecur(root->right, depthSoFar + 1));
    }
    int maxDepth(TreeNode* root)
    {
        return maxDepthRecur(root, 1);
    }
#endif
#define MAXDEPTH_COPY
#ifdef MAXDEPTH_COPY
    int maxDepth(TreeNode* root)
    {
        if (!root)
            return 0;
        return max(maxDepth(root->left), maxDepth(root->right)) + 1;
    }
#endif
    void inorder(TreeNode* root, vector<int>& result)
    {
        if (root == NULL)
            return;
        inorder(root->left, result);
        if (root->left == NULL && root->right == NULL)
        {
            result.push_back(root->val);
        }
        inorder(root->right, result);
    }

    bool leafSimilar(TreeNode* root1, TreeNode* root2)
    {
        vector<int>v1;
        vector<int>v2;
        inorder(root1, v1);
        inorder(root2, v2);
        if (v1.size() != v2.size())
            return 0;
        return v2 == v1;
    }


#ifdef GOOD_NODES_RECCUR
    int goodNodesRecurr(TreeNode* root, int maxInPath)
    {
        if (!root)
            return 0;

        int result = 0;
        if (root->right)
        {
            if (root->right->val >= maxInPath)
                ++result;
            result += goodNodesRecurr(root->right, max(root->right->val, maxInPath));
        }
        if (root->left)
        {
            if (root->left->val >= maxInPath)
                ++result;
            result += goodNodesRecurr(root->left, max(root->left->val, maxInPath));
        }

        return result;
    }

    int goodNodes(TreeNode* root)
    {
        return goodNodesRecurr(root, root->val) + 1;
    }
#endif

    int goodNodes(TreeNode* root)
    {
        std::deque<std::pair<TreeNode*, int>> q;
        q.emplace_back(root->left, root->val);
        q.emplace_back(root->right, root->val);

        int result = 1;
        while (!q.empty())
        {
            std::pair<TreeNode*, int> nodeAndMax = q.front();
            q.pop_front();

            if (!nodeAndMax.first)
                continue;

            if (nodeAndMax.first->val >= nodeAndMax.second)
                ++result;

            q.emplace_back(nodeAndMax.first->left, max(nodeAndMax.first->val, nodeAndMax.second));
            q.emplace_back(nodeAndMax.first->right, max(nodeAndMax.first->val, nodeAndMax.second));
        }
        return result;
    }

    int pathSum3Helper(TreeNode* root, long runningSum, int target, unordered_map<long, int>& map)
    {
        if (!root)
            return 0;

        int count = 0;
        runningSum += root->val;
        if (map.find(runningSum - target) != map.cend())
            count += map[runningSum - target];
        map[runningSum]++;

        count += pathSum3Helper(root->left, runningSum, target, map);
        count += pathSum3Helper(root->right, runningSum, target, map);

        map[runningSum]--;
        return count;
    }

    int pathSum3(TreeNode* root, int targetSum)
    {
        unordered_map<long, int>  map{ {0l,1} };
        return pathSum3Helper(root, 0, targetSum, map);
    }

    int longestZigZagRecur(TreeNode* root, bool moveLeft, int count)
    {
        if (!root)
            return count;

        TreeNode* next = moveLeft ? root->right : root->left;
        TreeNode* alt = moveLeft ? root->left : root->right;

        return max(count, max(longestZigZagRecur(next, !moveLeft, count + 1), longestZigZagRecur(alt, moveLeft, 0)));
    }

    int longestZigZag(TreeNode* root)
    {
        return max(longestZigZagRecur(root->left, true, 0), longestZigZagRecur(root->right, false, 0));
    }

    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q)
    {
        if (!root)
            return nullptr;

        if (root == p || root == q)
            return root;

        TreeNode* l = lowestCommonAncestor(root->left, p, q);
        TreeNode* r = lowestCommonAncestor(root->right, p, q);

        if (!l)
            return r;
        if (!r)
            return l;

        return root;
    }

    //vector<int> rightSideView(TreeNode* root)
    //{
    //    vector<int> rtn{};
    //    deque<std::pair<TreeNode*, int>> q;
    //    q.emplace_back(root, 1);


    //    int currDepth = 0;
    //    while (!q.empty())
    //    {
    //        TreeNode* currNode = q.front().first;

    //        if (!currNode)
    //        {
    //            q.pop_front();
    //            continue;
    //        }

    //        int tempDepth = q.front().second;

    //        if (tempDepth > currDepth)
    //        {
    //            currDepth = tempDepth;
    //            rtn.emplace_back(currNode->val);
    //        }

    //        q.pop_front();
    //        if (currNode->left)
    //            q.emplace_front(currNode->left, tempDepth + 1);
    //        if (currNode->right)
    //            q.emplace_front(currNode->right, tempDepth + 1);
    //    }
    //    return rtn;
    //}

    vector<int> rightSideView(TreeNode* root)
    {
        vector<int>ans;
        queue<TreeNode*> q;
        if (!root)
            return ans;
        q.push(root);
        while (true)
        {
            int size = q.size();
            if (size == 0)
                return ans;
            int* dataToAdd = new int();
            while (size--)
            {
                TreeNode* temp = q.front();
                q.pop();
                *dataToAdd = temp->val;
                if (temp->left)
                    q.push(temp->left);
                if (temp->right)
                    q.push(temp->right);
            }
            if (dataToAdd)
                ans.push_back(*dataToAdd);
        }
        return ans;
    }

    int maxLevelSum(TreeNode* root)
    {
        int maxLevel = 1;
        int max = root->val;
        int runningSum = 0;
        int currLevel = 0;;
        queue<TreeNode*> q;
        q.push(root);
        while (true)
        {
            ++currLevel;
            runningSum = 0;
            int nodesAtLevel = q.size();
            if (nodesAtLevel == 0)
                return maxLevel;
            while (nodesAtLevel--)
            {
                runningSum += q.front()->val;
                if (q.front()->left)
                    q.push(q.front()->left);
                if (q.front()->right)
                    q.push(q.front()->right);
                q.pop();
            }
            if (runningSum > max)
            {
                max = runningSum;
                maxLevel = currLevel;
            }
        }
        return maxLevel;
    }

    /*    TreeNode* searchBST(TreeNode* root, int val)
        {
            if ( !root || root->val == val)
                return root;
            if (root->val > val)
                return searchBST( root->left, val);

           return searchBST(root->right, val);
        }*/

    TreeNode* searchBST(TreeNode* root, int val)
    {
        while (root)
        {
            if (root->val == val)
                return root;
            if (root->val > val)
                root = root->left;
            else
                root = root->right;
        }
        return root;
    }

    TreeNode* deleteNode(TreeNode* root, int key)
    {
        if (!root)
            return root;

        if (key > root->val)
            root->right = deleteNode(root->right, key);
        else if (key < root->val)
            root->left = deleteNode(root->left, key);
        else
        {
            if (!root->left)
                return root->right;
            else if (!root->right)
                return root->left;

            TreeNode* cur = root->right;
            while (cur->left)
                cur = cur->left;

            root->val = cur->val;
            root->right = deleteNode(root->right, root->val);
        }

        return root;
    }

    void canVisitAllRoomsDFS(int room, unordered_set<int>& roomsVisited, const vector<vector<int>>& rooms)
    {
        roomsVisited.insert(room);
        for( const auto& key : rooms[room])
            if( !roomsVisited.contains( key )  )
                canVisitAllRoomsDFS( key , roomsVisited, rooms);
    }

    bool canVisitAllRooms(vector<vector<int>>& rooms) 
    {
        unordered_set<int> roomsVisited;
        canVisitAllRoomsDFS( 0 , roomsVisited, rooms) ;
        
        return roomsVisited.size()  == rooms.size() ;
    }

    //void getProvince(int thisCity, vector<vector<int>>& isConnected, set<int>& thisProvince)
    //{
    //    thisProvince.insert( thisCity );
    //    for (int otherCityIndexes = 0; otherCityIndexes < isConnected[thisCity].size(); ++otherCityIndexes) 
    //    {
    //        if (!isConnected[thisCity][otherCityIndexes]) // is connected
    //            continue;

    //        if (otherCityIndexes == thisCity) // not connected to itself
    //            continue;

    //        if (thisProvince.contains(otherCityIndexes)) // is not already indirectly connected 
    //            continue;

    //        getProvince(otherCityIndexes, isConnected, thisProvince);
    //    }
    //}

    //int findCircleNum(vector<vector<int>>& isConnected) 
    //{
    //    set<set<int>> provinces;

    //    for (int cityIndex = 0; cityIndex < isConnected.size(); ++cityIndex)
    //    {
    //        set<int> thisProvince;
    //        getProvince( cityIndex, isConnected, thisProvince);
    //        provinces.insert(thisProvince);
    //    }

    //    return provinces.size();
    //}
    
    void updateVisited(int thisCity, vector<vector<int>>& isConnected, vector<bool>& visited)
    {
        visited[ thisCity ] = true;
        for (int otherCityIndexes = 0; otherCityIndexes < isConnected[thisCity].size(); ++otherCityIndexes) 
        {
            if (visited[otherCityIndexes]) //have not already visited
                continue;

            if (!isConnected[thisCity][otherCityIndexes]) // is connected
                continue;

            updateVisited(otherCityIndexes, isConnected, visited);
        }
    }

    int findCircleNum(vector<vector<int>>& isConnected) 
    {
        vector<bool>visited(isConnected.size(), false);
        int visitCount = 0;
        for (int cityIndex = 0; cityIndex < isConnected.size(); ++cityIndex)
        {
            if (visited[cityIndex])
                continue;

            updateVisited(cityIndex, isConnected, visited);
            ++visitCount;
        }

        return visitCount;
    }

    void dfs(vector<vector<int>>& adj, int src, vector<bool>& visited, int& count) {
        visited[src] = true;
        for (auto connectedCity : adj[src]) {
            if (!visited[abs(connectedCity)]) {
                if (connectedCity > 0) {
                    count++;
                }
                dfs(adj, abs(connectedCity), visited, count);
            }
        }


    }
    int minReorder(int n, vector<vector<int>>& connections) {
        vector<vector<int>> adj(n);
        int count = 0;
        vector<bool> visited(n, false);

        for (int i = 0; i < connections.size(); i++) {
            adj[connections[i][0]].push_back(connections[i][1]);
            adj[connections[i][1]].push_back(-connections[i][0]);

        }
        dfs(adj, 0, visited, count);

        return count;

    }

    double calcEquation_bfs(const map<string, map<string, double>>& adj, const std::string& num, const std::string& den)
    {
        if (!adj.contains(num) || !adj.contains(den))
            return -1.0;
        
        unordered_set<string> visited;
        deque<std::pair<string,double>> q;
        q.emplace_back(num, 1.0);
        visited.emplace(num);
        while (!q.empty())
        {
            auto node = q.front().first;
            auto weight = q.front().second;
            q.pop_front();
            if (node == den)
                return weight;

            const auto nodeInAdjMat = adj.find(node);

            for (auto pair : nodeInAdjMat->second)
                if (!visited.contains(pair.first))
                {
                    q.emplace_back(pair.first, weight * pair.second);
                    visited.emplace(pair.first);
                }
        }
        return -1;
    }

    vector<double> calcEquation(vector<vector<string>>& equations, vector<double>& values, vector<vector<string>>& queries)
    {
        map<string,map<string,double>> adj;
        vector<double> queryAnswer(queries.size(), -1.);

        for (int i = 0; i < equations.size(); ++i) 
        {
            adj[equations[i][0]].emplace(equations[i][1], values[i]);
            adj[equations[i][1]].emplace(equations[i][0], 1.0/values[i]);
        }
        
        for (int i = 0; i < queries.size(); ++i) 
            queryAnswer[i] =  calcEquation_bfs(adj, queries[i][0], queries[i][1] );

        return queryAnswer;
    }

    int nearestExit_Dfs(const pair<int, int>& end, const pair<int, int>& start, 
        const map<pair<int, int>, vector<pair<int, int>>>& adj, set<pair<int, int>>& visited, 
        const set<pair<int, int>>& allExits)
    {
        if( end == start )
            return visited.size();

        if (allExits.contains(start) )
            return -1;

        if(!adj.contains(start))
            return -1;
        int rtn = INT_MAX;
        for( const auto& nextCoord : adj.at(start) )
        {
            if (visited.contains(nextCoord))
                continue;

            visited.insert(nextCoord);
            int minForExit = nearestExit_Dfs(end, nextCoord, adj, visited, allExits);
            visited.erase(nextCoord);

            if (minForExit < 0)
                continue;

            rtn = min(rtn, minForExit);
        }
        return rtn == INT_MAX ? -1 : rtn;
    }

    int nearestExit(vector<vector<char>>& maze, vector<int>& entrance) {
        //Find all exist that are not the entrance
        // from each of these step through to find the person
        // return the least steps per path

        map<pair<int, int>, vector<pair<int, int>>> adj;
        set<pair<int,int>> exits;
        for (int y = 0; y < maze.size(); ++y)
        {
            for (int x = 0; x < maze[y].size(); ++x)
            {
                if( maze[y][x] == '+' )
                    continue;

                if (y - 1 >= 0 && maze[y - 1][x] == '.') // LEFT
                    adj[make_pair(x, y)].emplace_back(x, y - 1);
                if (y + 1 < maze.size() && maze[y + 1][x] == '.') //RIGHT
                    adj[make_pair(x, y)].emplace_back(x, y + 1);
                if (x - 1 >= 0 && maze[y][x - 1] == '.') // UP
                    adj[make_pair(x, y)].emplace_back(x - 1, y);
                if (x + 1 < maze[0].size() && maze[y][x + 1] == '.') // DOWN
                    adj[make_pair(x, y)].emplace_back(x + 1, y);

                if ( (x == 0 || x == maze[ y ].size() -1 ) && maze[ y ][ x ] == '.' )
                    exits.emplace( x, y );
                if ((y == 0 || y == maze.size() - 1) && maze[y][x] == '.')
                    exits.emplace( x, y);
            }
        }
        if (adj.size() == 0)
            return -1;

        const auto start = make_pair(entrance[1], entrance[0]);
        exits.erase(start);
        int rtn = INT_MAX;
        for ( const auto & endCoord : exits)
        {
            int minForExit = 0;
            set<pair<int, int>> visited { start };
            minForExit = nearestExit_Dfs(endCoord, start, adj, visited, exits);
            if( minForExit < 0 )
                continue;

            rtn = min( rtn, minForExit);
        }
        return rtn == INT_MAX ? -1 : rtn - 1;
    }
}