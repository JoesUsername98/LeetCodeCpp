#include "pch.h"

#include <string>
#include <iostream>
#include <numeric> 
#include <unordered_set> 
#include <unordered_map> 
#include <set> 
#include <map> 
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
        unordered_set<int> set1 (std::make_move_iterator(nums1.begin()), std::make_move_iterator(nums1.end()));
        unordered_set<int> set2 (std::make_move_iterator(nums2.begin()), std::make_move_iterator(nums2.end()));
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
}