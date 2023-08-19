
/* 1.3 Write a program to read 10 integers in an array. Sort them out on the basis of number of 
digits in each element. */
#include<iostream>
using namespace std;

int main(){
    long arr[10],i,j;

    for(i=0;i<10;i++){
        cout<<"Enter "<<i+1<<"th element of array: ";
        cin>>arr[i];
    }
    cout<<"Before Sorting: "<<endl;
    for(i=0;i<10;i++){
        cout<<"Array element at "<<i+1<<"th position: "<<arr[i]<<endl;
    }
    cout<<"After Sorting: "<<endl;
    for(i=0;i<10;i++){
        for(j=i+1;j<10;j++){
            if(arr[i]>arr[j]){
                long temp = arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(i=0;i<10;i++){
        cout<<"Array element at "<<i+1<<"th position: "<<arr[i]<<endl;
    }
    return 0;
}
