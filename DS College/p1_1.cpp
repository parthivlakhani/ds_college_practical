// 1.1 Write a program to insert/delete in linear array at specific position. 
#include<iostream>
using namespace std;

int main(){
    int size,arr[100],i,choice,pos,ele;

    cout<<"Enter the size of an array: ";
    cin>>size;
    for(i=0;i<size;i++){
        cout<<"Enter "<<i+1<<"th element of array: ";
        cin>>arr[i];
    }
    cout<<"Before Inserting/Deleting an element: "<<endl;
    for(i=0;i<size;i++){
        cout<<"Array element at "<<i+1<<"th position: "<<arr[i]<<endl;
    }
    cout<<"Enter 1 for Insert an element or 2 for Delete an element: ";
    cin>>choice;

    switch(choice){
        case 1:
            cout<<"Enter the position you want to enter the element: ";
            cin>>pos;
            cout<<"Enter the element: ";
            cin>>ele;
            size++;
            for(i=size;i>=pos;i--){
                arr[i]=arr[i-1];
            }
            arr[pos-1]=ele;
            cout<<"After Inserting an element: "<<endl;
            for(i=0;i<size;i++){
                cout<<"Array element at "<<i+1<<"th position: "<<arr[i]<<endl;
            }
        case 2:
            cout<<"Enter the element's position you want to delete: ";
            cin>>pos;
            size--;
            for(i=pos-1;i<=size;i++){
                arr[i]=arr[i+1];
            }
            cout<<"After Inserting an element: "<<endl;
            for(i=0;i<size;i++){
                cout<<"Array element at "<<i+1<<"th position: "<<arr[i]<<endl;
            }
    }
}