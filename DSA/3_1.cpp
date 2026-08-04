#include<bits/stdc++.h>

using namespace std;

void insertion(int arr[],int n){
    for(int i=1;i<n;i++){
        int j=i-1;
        int temp=arr[i];
        for(;j>=0;j--){
            if(arr[j]>temp){
                arr[j+1]=arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1]=temp;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

}

void bubble(int arr[],int n){
    for(int i=1;i<n;i++){
        for(int j=0;j<n-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);  
            }
        }
    }
        for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void selection(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int si=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[si]){
                si=j;
            }
        }
       swap(arr[i],arr[si]);
    }
        for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int n;
    cout<<"Enter size of array: "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter array element: "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int arr1[n],arr2[n],arr3[n];
    for(int i=0;i<n;i++){
        arr1[i]=arr[i];
        arr2[i]=arr[i];
        arr3[i]=arr[i];
    }
    insertion(arr1,n);
    bubble(arr2,n);
    selection(arr3,n);

}