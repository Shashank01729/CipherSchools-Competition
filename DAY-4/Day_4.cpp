#include <bits/stdc++.h>
using namespace std;

int kthLargestSubsequenceSum(vector<int>& v, int n, int k) {
    int sub_sum[1 << n];

    int count = 0;
    for(int i=0;i<n;i++) {
        for(int j=count-1;j>=0;j--){
            sub_sum[count]=sub_sum[j]+v[i];
            count++;
        }
        sub_sum[count]=v[i];
        count++;
    }
    sort(sub_sum, sub_sum + count, greater<int>());
    return sub_sum[k - 1]; 
}

int main() {
    vector<int> v;
    int n,k,x;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> x;
        v.push_back(x);
    }
    cin >> k;
    cout << kthLargestSubsequenceSum(v,n,k) << endl; 
}
