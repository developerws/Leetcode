#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
#include <string>
using namespace std;
class Solution {
public:
	bool validPalindrome(string s) {
		int first, end,flag = 0;
		
		for (first = 0, end = s.length() - 1; first < end; first++, end--)  /*先寻找出第一处不相等的字符*/
			if (s[first] == s[end])
				continue;
			else
				break;
		if (first >= end) return true;
		else {
			if (s[++first] == s[end]) {					/*判断first++之后是否与end相等*/
				int first_temp = first, end_temp = end;
				for (; first_temp < end_temp; first_temp++, end_temp--) {				/*如果相等，继续判断之后的字符是否相等，防止多余的字符和移动后当前的字符相等*/
					if (s[first_temp] == s[end_temp]) continue;
					else break;
				}
				if (first_temp >= end_temp) return true;
				
			}
			/*判断end--后是否与first相等*/
			if (s[--first] == s[--end]) {
				int first_temp = first, end_temp = end;
				for (; first_temp < end_temp; first_temp++, end_temp--) {				/*如果相等，继续判断之后的字符是否相等，防止多余的字符和移动后当前的字符相等*/
					if (s[first_temp] == s[end_temp]) continue;
					else break;
				}
				if (first_temp >= end_temp) return true;
			}

		}
		return false;

		
		


	}
};
int main() {
	Solution s = Solution();
	if (s.validPalindrome("abc"))
		cout << "是" << endl;
	else {
		cout << "不是" << endl;
	}
	
	system("pause");
}