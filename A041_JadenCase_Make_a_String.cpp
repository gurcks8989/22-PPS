/*
JadenCase 문자열 만들기
문제 출처:https://programmers.co.kr/learn/courses/30/lessons/12951

JadenCase란 모든 단어의 첫 문자가 대문자이고, 그 외의 알파벳은 소문자인 문자열입니다. 
문자열 s가 주어졌을 때, s를 JadenCase로 바꾼 문자열을 리턴하는 함수, solution을 완성해주세요.

제한 조건
s는 길이 1 이상 200 이하인 문자열입니다.
s는 알파벳과 숫자, 공백문자(" ")로 이루어져 있습니다.
숫자는 단어의 첫 문자로만 나옵니다.
숫자로만 이루어진 단어는 없습니다.
공백문자가 연속해서 나올 수 있습니다.
첫 문자가 영문이 아닐때에는 이어지는 영문은 소문자로 씁니다. ( 첫번째 입출력 예 참고 )

입출력 예
s	                            return
"3people unFollowed me"	        "3people Unfollowed Me"
"for the last week"	            "For The Last Week"
*/

#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    int gap = 'a' - 'A' ;
    bool is_new_word = true ;
    
    for(int i = 0 ; i < s.length() ; i++){
        if(s[i] == ' ')
            is_new_word = true ;
        else if(is_new_word){
            is_new_word = false ;
            if('a' <= s[i] && s[i] <= 'z')
                s[i] -= gap ;
        }
        else if('A' <= s[i] && s[i] <= 'Z')
            s[i] += gap ;
    }
    return s;
}