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
		
		for (first = 0, end = s.length() - 1; first < end; first++, end--)  /*��Ѱ�ҳ���һ������ȵ��ַ�*/
			if (s[first] == s[end])
				continue;
			else
				break;
		if (first >= end) return true;
		else {
			if (s[++first] == s[end]) {					/*�ж�first++֮���Ƿ���end���*/
				int first_temp = first, end_temp = end;
				for (; first_temp < end_temp; first_temp++, end_temp--) {				/*�����ȣ������ж�֮����ַ��Ƿ���ȣ���ֹ������ַ����ƶ���ǰ���ַ����*/
					if (s[first_temp] == s[end_temp]) continue;
					else break;
				}
				if (first_temp >= end_temp) return true;
				
			}
			/*�ж�end--���Ƿ���first���*/
			if (s[--first] == s[--end]) {
				int first_temp = first, end_temp = end;
				for (; first_temp < end_temp; first_temp++, end_temp--) {				/*�����ȣ������ж�֮����ַ��Ƿ���ȣ���ֹ������ַ����ƶ���ǰ���ַ����*/
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
		cout << "��" << endl;
	else {
		cout << "����" << endl;
	}
	
	system("pause");
}