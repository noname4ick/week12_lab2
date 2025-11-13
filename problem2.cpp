#include <iostream>

using namespace std;

int evenCount(const int* a,int size) {
    int count = 0;

    for (const int *ptr = a;ptr -a < size;ptr++) {
        if (*ptr % 2 == 0) {
            count++;
        }
    }

    return count;
}

int main(){

    int size;
    cin>>size;
    int arr[size];
    for(int i = 0;i < size;i++) {
        cin>>arr[i];
    }
    cout<<evenCount(arr,size);


    return 0;
}