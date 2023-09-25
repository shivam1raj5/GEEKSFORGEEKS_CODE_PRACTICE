//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution{
    public:
    // arr[] : int input array of integers
    // k : the quadruple sum required
   vector<vector<int> > fourSum(vector<int> &nums, int target) {
               vector<vector<int>> ans;
        int n = nums.size();
        if(n<=3) return ans;

        sort(nums.begin(),nums.end());

        for(int i = 0 ; i<n ; i++){
            for(int j = i+1 ; j<n ; j++){
                long long tar = (long long )target - (long long )nums[i] - (long long )nums[j];

                int l = j+1;
                int r = n-1;
                while(l<r){
                    long long  twoSum = (long long )nums[l]+(long long )nums[r];
                    if(twoSum < tar ) l++;
                    else if(twoSum>tar) r--;
                    else{
                        vector<int> temp ;
                        temp.push_back(nums[i]);
                        temp.push_back(nums[j]);
                        temp.push_back(nums[l]);
                        temp.push_back(nums[r]);

                        ans.push_back(temp);

                        while(l<r && nums[l] == temp[2]) ++l;
                        while(l<r && nums[r] == temp[3]) --r;
                    }

                }
                while(j+1<n && nums[j+1]==nums[j]) ++j;
            }
                while(i+1<n && nums[i+1]==nums[i]) ++i;
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, i;
        cin >> n >> k;
        vector<int> a(n);
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        vector<vector<int> > ans = ob.fourSum(a, k);
        for (auto &v : ans) {
            for (int &u : v) {
                cout << u << " ";
            }
            cout << "$";
        }
        if (ans.empty()) {
            cout << -1;
        }
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends