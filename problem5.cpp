#include <iostream>

using namespace std;

void swap(int* arr1, int* arr2,int size) {
    for(int i = 0;i < size;i++) {
        int temp = *arr1;
        *arr1 = *arr2;
        *arr2 = temp;
        arr1++;
        arr2++;
    }
}

int main(){

    int size;
    cin>>size;
    int arr1[size],arr2[size];
    for(int i = 0;i < size;i++) {
        cin>>arr1[i];
    }
    for(int i = 0;i < size;i++) {
        cin>>arr2[i];
    }
    swap(arr1,arr2,size);
    for(int i = 0;i < size;i++) {
        cout<<arr1[i]<<" ";
    }
    cout<<endl;
    for(int i = 0;i < size;i++) {
        cout<<arr2[i]<<" ";
    }


    return 0;
}