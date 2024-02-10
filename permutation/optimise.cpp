#include<iostream>
#include<vector>
#include<stack>
#include<queue>
using namespace std;

vector<vector<int>>ans;

stack<int>s;
queue<int>q;

class Solution {
public:
    int call=0;
    void helper(vector<int>&nums, vector<int> &currentposition, int call){
        s.push(call);
        if(currentposition.size() == nums.size()){
            ans.push_back(currentposition);
            q.push(s.top());
            return ;
        }
        for(int i=0 ; i<nums.size() ; i++){
            
            if(nums[i] != INT_MIN){
                int value = nums[i];
                nums[i] = INT_MIN;
                currentposition.push_back(value);
                helper(nums, currentposition, call+1);
                nums[i] = value;
                currentposition.pop_back();
            }
        } 
    }
    void permute(vector<int>& nums) {
        // vector<bool>used(nums.size(), false);
        vector<int>currentposition;
        helper(nums, currentposition, 1);
    }
};


int main(){
    vector<int>nums;
    int n;
    cin>>n;
    for(int i=0 ; i<n ; i++){
        int t;
        cin>>t;
        nums.push_back(t);
    }
    Solution s1;
    // vector<vector<int>> ans;
    s1.permute(nums);
    for(int i=0 ; i<ans.size() ; i++){
        for(int x : ans[i]){
            cout<<x<<" ";
        }
        cout<<endl;
    }

    cout<<"call sequences : \n";
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    return 0;
}