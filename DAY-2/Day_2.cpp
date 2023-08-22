// Day-2
#include<bits/stdc++.h>
using namespace std;

int Three_Sum(int arr[],int n){
    sort(arr,arr+n);
    for(int i=0;i<n-2;i++){
        int s=i+1,e=n-1;
        while(s<e) {
            int sum=arr[i]+arr[s]+arr[e];
            if(sum==0){
                return 1; 
            } 
            else if(sum>0){
                e--;
            } 
            else{
                s++;
            }
        }
    }
    return 0; 
}

int main(){
    int size;
    cin >> size;
    int arr[size];
    for(int i=0;i<size;i++){
        cin >> arr[i];
    }
    cout << Three_Sum(arr,size);
}