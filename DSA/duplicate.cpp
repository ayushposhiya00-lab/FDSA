#include<iostream>
using namespace std;
int main(){
int arr[100];
int n;
cout<<"Enter the size of the array: ";
cin>>n;
cout<<"Enter the elements of the array: ";
for(int i=0;i<n;i++)    
{
    cin>>arr[i];
}
for(int i=0;i<n;i++)
{
    for(int j=i+1;j<n;j++)
    {
        if(arr[i]==arr[j])
        {
            cout<<"Duplicate element is: "<<arr[i]<<endl;
        }
    }
}
}