#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,target;
    cout<<"Enter a Size: "<<endl;
    cin>>n;
    int arr[n];      
    cout<<"Enter array Element: "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter a target: "<<endl;
    cin>>target;
    int s=0;
    int e=n-1;
    int ans;
    while(s<=e){
        int mid=s+(e-s)/2;
        if(arr[mid]==target){
            ans=mid;
            break;
        }
        else if(arr[mid]<target){
            s=mid+1;
        }
        else{
            e=mid-1;
        }

    }
    
    cout<<"Target is at index: "<<ans;
}
