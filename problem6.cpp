#include <iostream>

using namespace std;

bool is_in(const int* arr1,const int* arr2, int size1,int size2){
    const int *p1=arr1;
    const int *p2=arr2;
    for (int i = 0; i < size1; i++) {
        p2 = arr2;
        bool isIn = false;
        for (int j = 0; j < size2; j++) {
            if (*p1 == *p2) {
                isIn=true;
            }
            cout<<*p1<<" ";
            cout<<*p2<<" ";
            cout<<isIn<<endl;
            p2++;
        }
        if (!isIn) {
            return false;
        }
        p1++;
    }
    return true;
}

int main(){

    int size1,size2;
    cin>>size1;
    int arr1[size1];
    cin>>size2;
    int arr2[size2];
    for(int i = 0;i < size1;i++) {
        cin>>arr1[i];
    }
    for(int i = 0;i < size2;i++) {
        cin>>arr2[i];
    }

    if (is_in(arr1,arr2,size1,size2)) {
        cout<<1<<endl;
    }
    else cout<<0<<endl;
    return 0;
}