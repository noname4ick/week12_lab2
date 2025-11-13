#include <iostream>

using namespace std;

int main(){

    const int SIZE = 10;
    float *ptr, arr[SIZE];
    ptr = arr;
    while(ptr - arr < SIZE){
        cin >> *ptr;
        ptr++;
    }

   for(int i = 1;i <= 10;i++) {
       cout<<*(ptr-i)*0.3<<" ";
   }
    return 0;
}