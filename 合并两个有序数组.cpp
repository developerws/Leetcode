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
		//直到nums2容器为空，才停止循环
		while (!nums2.empty()) {		
			//判断nums1中的数字大于nums2中的第一个数字时将这个数字插入到nums1中容器对应的位置上
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