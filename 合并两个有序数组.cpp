#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
#include <string>
using namespace std;
class Solution {
public:
	void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
		while (nums1.size() > m)
			nums1.pop_back();
		while (nums2.size() > n) {
			nums2.pop_back();
		}
		int index = 0;
		//ֱ��nums2����Ϊ�գ���ֹͣѭ��
		while (!nums2.empty()) {		
			//�ж�nums1�е����ִ���nums2�еĵ�һ������ʱ��������ֲ��뵽nums1��������Ӧ��λ����
			while (index < nums1.size() && nums1[index] <= nums2[0]) {
				index++;
			}
			
			nums1.insert(nums1.begin() + index, nums2[0]);
			nums2.erase(nums2.begin());
			
		}
		for (int i = 0; i < nums1.size(); i++) {
			cout << nums1[i] << endl;
		}
	}
};
int main() {
	Solution s = Solution();
	vector<int> nums1 = { 1, 2, 3,0,0,0 };
	vector<int> nums2 = { 2, 5, 6 };
	s.merge(nums1, 3, nums2, 3);
	
	system("pause");
}