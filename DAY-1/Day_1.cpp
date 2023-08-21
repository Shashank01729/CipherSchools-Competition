/*
Problem Statement :
    You are given an integer array height of length n. 
    There are n vertical lines drawn such that the two endpoints of the ith line are (i, 0) and (i, height[i]).
    Find two lines that together with the x-axis form a container, such that the container contains the most water.
    Return the maximum amount of water a container can store.
    Notice that you may not slant the container.

Example 1:

Input: height = [1,8,6,2,5,4,8,3,7]
Output: 49

Explanation: The above vertical lines are represented by array [1,8,6,2,5,4,8,3,7]. 
             In this case, the max area of water (blue section) the container can contain is 49.

Example 2:

Input: height = [1,1]
Output: 1

*/

#include<bits/stdc++.h>
using namespace std;

int Max_Water(int arr[], int size) {
    int s=0,e=size-1;
    int max_amount=INT_MIN;
        
    while(s<e){
        int curr_amount=min(arr[s], arr[e]) * (e-s);
        max_amount=max(max_amount, curr_amount);
        arr[s]<arr[e] ? s++ : e--;
    }   

    return max_amount;
}

int main(){
    int n;
    cin >> n;
    int height[n];
    for(int i=0;i<n;i++){
        cin >> height[i];
    }

    cout << Max_Water(height,n);

}
