#include<bits/stdc++.h>
using namespace std;
int kth_minimum(vector<int> &arr, int k){
    int max_e = *max_element(arr.begin(),arr.end());   // TC : O(n)
    vector<int> count(max_e+1, 0); // SC : O(n)
    for(int x : arr){
        count[x]++;
    }
    int sum=0;
    for(int i=0;i<=max_e;i++){
        sum+=count[i];
        if(sum>=k){
            return i;
        }
    }
    return -1;
}

int kth_maximum(vector<int> &arr, int k){
    int max_e = *max_element(arr.begin(),arr.end());
    vector<int> count(max_e+1, 0);
    for(int x : arr){
        count[x]++;
    }
    int sum=0;
    for(int i=max_e;i>=0;i--){
        sum+=count[i];
        if(sum>=k){
            return i;
        }
    }
    return -1;
}

int main(){
    // Input the Arary
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<arr.size();i++){
        cin>>arr[i];
    }
    int k; 
    cin>>k;
    
    cout<<"Kth Minimum Element is : "<<kth_minimum(arr,k)<<endl;
    cout<<"Kth Maximum Element is : "<<kth_maximum(arr,k)<<endl;
        
    return 0;
}