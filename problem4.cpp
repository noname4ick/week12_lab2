#include <iostream>

using namespace std;

void sumArrays(const double* arr1, const double* arr2, double* sum,int size) {
    for(int i = 0;i < size;i++) {
        *sum = *arr1 + *arr2;
        sum++;
        arr1++;
        arr2++;
    }
}

int main(){

    int size;
    cin>>size;
    double arr1[size],arr2[size],sum[size];
    for(int i = 0;i < size;i++) {
        cin>>arr1[i];
    }
    for(int i = 0;i < size;i++) {
        cin>>arr2[i];
    }
    sumArrays(arr1,arr2,sum,size);
    for(int i = 0;i < size;i++) {
        cout<<sum[i]<<" ";
    }

    return 0;
}