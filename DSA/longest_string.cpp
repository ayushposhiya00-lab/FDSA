#include<iostream>
using namespace std;
int main(){
    string arr[100];
    int n;
    cout<<"Enter the number of strings in the array: ";
    cin>>n;
    cout<<"Enter the strings in the array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    string longest=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i].length()>longest.length()){
            longest=arr[i];
        }
    }
    cout<<"The Longest string in the array is: "<<longest<<endl;
}
