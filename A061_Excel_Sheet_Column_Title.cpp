/*
168. Excel Sheet Column Title
문제 출처:https://leetcode.com/problems/excel-sheet-column-title/

Given an integer columnNumber, 
return its corresponding column title as it appears in an Excel sheet.

For example:
A -> 1
B -> 2
C -> 3
...
Z -> 26
AA -> 27
AB -> 28 
...

Example 1:
Input: columnNumber = 1
Output: "A"

Example 2:
Input: columnNumber = 28
Output: "AB"

Example 3:
Input: columnNumber = 701
Output: "ZY"

Constraints:
1 <= columnNumber <= 231 - 1
*/
class Solution {
public:
    string convertToTitle(int columnNumber) {
        string answer = "" ;
        for(; 0 != columnNumber ; columnNumber = (columnNumber-1) / 26)
            answer.insert(0, 1, 'A' + (columnNumber-1) % 26) ;
        return answer ;
    }
};