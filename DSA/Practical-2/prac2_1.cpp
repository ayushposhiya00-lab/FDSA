#include<bits/stdc++.h>
using namespace std;

int ans(int arr[],int n,int target,int i){
    if(i<n){
        if(arr[i]==target)
            return i;
        return ans(arr,n,target,i+1);
    }
    return -1;
}

int main(){
    int n,target;
    cout<<"Enter a size: "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter array element: "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter a target element: " <<endl;
    cin>>target;
    int i=0;
    int result=ans(arr,n,target,i);
    cout<<"Target is at index: "<<result;
}