#include<bits/stdc++.h>
using namespace std;

vector<int> dnf_array(vector<int> &arr){
    int start = 0;
    int mid = 0;
    int end = arr.size()-1;
    while(mid<=end){
        if(arr[mid]==0){
            swap(arr[mid],arr[start]);
            start++;
            mid++;
        }
    }
}


int main(){
    // Input the Arary
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<arr.size();i++){
        cin>>arr[i];
    }


    
        
    return 0;
}