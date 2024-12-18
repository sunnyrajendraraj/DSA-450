#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;
    long long arr[n];

    // Taking Inputs
    for(long long i=0;i<n;i++){
        cin>>arr[i];
    }
    
    // Space Complexity : O(1)
    long long min_e = INT_MAX;
    long long max_e = INT_MIN;


    // Time Complexity : O(n)
    for(long long i=0;i<n;i++){
        if(arr[i]>max_e){
            max_e=arr[i];
        }
        if(arr[i]<min_e){
            min_e=arr[i];
        }
    }

    // cout<<"Minimum = "<<min_e<<" and "<<"Maximum = "<<max_e;

    pair<long long, long long> ans(min_e,max_e);
    cout<<"Minimum = "<<ans.first<<" and "<<"Maximum = "<<ans.second;
        
    return 0;
}