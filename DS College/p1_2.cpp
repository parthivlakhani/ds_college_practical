// 1.2 Write a program to remove duplicate elements from liner array
#include<iostream>
using namespace std;

int main(){
    int arr[100],size,i,j,k;

    cout<<"Enter the size of an array: ";
    cin>>size;
    for(i=0;i<size;i++){
        cout<<"Enter "<<i+1<<"th element of array: ";
        cin>>arr[i];
    }
    cout<<"Before Removing Duplicate elements: "<<endl;
    for(i=0;i<size;i++){
        cout<<"Array element at "<<i+1<<"th position: "<<arr[i]<<endl;
    }
    cout<<"After Removing Duplicate elements: "<<endl;
    for(i=0;i<size;i++){
        for(j=i+1;j<size;j++)
            if(arr[i]==arr[j]){
            for(k=j;k<=size;k++){
                arr[k]=arr[k+1];
            }
            size--;
            j--;
        }

    }
    for(i=0;i<size;i++){
        cout<<"Array element at "<<i+1<<"th position: "<<arr[i]<<endl;
    }
    return 0;
}