#include <bits/stdc++.h>
using namespace std;
void reverseTheArray(vector<int> &ans)
{
  int i = 0, j = ans.size() - 1;
  while (i < j)
  {
    swap(ans[i], ans[j]);
    i++;
    j--;
  }
}

vector<int> findArraySum(vector<int> &a, int n, vector<int> &b, int m)
{
  int i = m - 1, j = n - 1;
  int carry = 0, value = 0, sum = 0;
  vector<int> ans;

  while (i >= 0 && j >= 0)
  {
    sum = a[i] + b[j] + carry;
    carry = sum / 10;
    value = sum % 10;
    ans.push_back(value);
    j--;
    i--;
  }

  while (i >= 0)
  {
    sum = a[i] + carry;
    carry = sum / 10;
    value = sum % 10;
    ans.push_back(value);
    i--;
  }

  while (j >= 0)
  {
    sum = b[j] + carry;
    carry = sum / 10;
    value = sum % 10;
    ans.push_back(value);
    j--;
  }
  reverseTheArray(ans);
  return ans;
}

int main()
{


// 1 1
// 1 2
  vector<int> a;
  a.push_back(1);
  a.push_back(1);
  int n =2;

  vector<int> b;
  b.push_back(1);
  b.push_back(2);

  int m=2;

 vector<int>ans= findArraySum(a,n,b,m);

 for(int i=0;i<ans.size();i++){
  cout<<ans[i]<<" ";
 }

  return 0;
}

// // question is rotate the array

// #include <bits/stdc++.h>
// using namespace std;

// void reverse(vector<int> &nums, int start, int end)
// {
//   while (start < end)
//   {
//     swap(nums[start], nums[end]);
//     start++;
//     end--;
//   }

// }

// int main()
// {
//   vector<int> nums;
//   nums.push_back(1);
//   // nums.push_back(2);
//   // nums.push_back(3);
//   // nums.push_back(4);
//   // nums.push_back(5);
//   // nums.push_back(6);
//   // nums.push_back(7);

//   int k = 2;
//   int start1 = 0;
//   int end1 = nums.size() - k - 1;
//   reverse(nums, start1, end1);

//   int start2 = end1 + 1;
//   int end2 = nums.size() - 1;
//   // cout << endl;
//   reverse(nums, start2, end2);

//   int start3 = 0;
//   int end3 = nums.size() - 1;
//   reverse(nums, start3, end3);

//   for (int i = 0; i < nums.size(); i++)
//   {
// cout << nums[i] << " ";
// }
// return 0;
// }
