#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter a array Size: "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter array element: "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int zero=0,one=0,two=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0)
            zero++;
        else if(arr[i]==1){
            one++;
        }
        else{
            two++;
        }
    }
    int i=0;
    while(zero--)
        arr[i++]=0;

    while(one--)
        arr[i++]=1;

    while(two--)
        arr[i++]=2;

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}