#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];

    // Taking Inputs
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // Printing the Original Array
    cout<<"Original Array : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;
    // Reversing the Array 
    int rev[n]; // Space Complexity : O(n)
    for(int i=0;i<n;i++){ // Time Complexity : O(n)
        rev[i]=arr[n-1-i];
    }

    // Printing the Reversed Array
    cout<<"Reversed Array : ";
    for(int i=0;i<n;i++){
        cout<<rev[i]<<" ";
    }

    return 0;
}