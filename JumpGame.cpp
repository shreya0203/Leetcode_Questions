#include<iostream>//valley peak approach
#include<vector>
#include<stdbool.h>
using namespace std;
//class solution {
 //public:
 bool canjump(vector<int>& nums,int n){
     //int n= nums.size();
     int reachable = 0;
   for (int i = 0; i < n; i++)
   {
       if(reachable < i)
          cout<<"false";
       reachable = max(reachable,i+nums[i]);   
   }
   return -1;

 }
//};
 int main()
 {

    vector<int> nums;
    int ele;
    int n;
    cin>>n;
    //n = nums.size();
    for(int i =0;i<n;i++)
    {
        cin>>ele;
        //nums.push_back(ele);
    }
    //solution s;
    canjump(nums,n);
    return 0;
 }