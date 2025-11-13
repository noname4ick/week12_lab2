#include <iostream>

using namespace std;

bool is_mirrored(const int* a, const int* b, int size) {
    for(int i = 0;i < size;i++) {
        if (*b != *a) {
            return false;
        }
        b--;
        a++;
    }
    return true;
}

int main(){

    int size;
    cin>>size;
    int a[size];
    int b[size];
    for(int i = 0;i < size;i++) {
        cin>>a[i];
    }
    for(int i = 0;i < size;i++) {
        cin>>b[i];
    }
    if (is_mirrored(a,&b[size-1],size))
        cout<<1<<endl;
    else
        cout<<0<<endl;

    return 0;
}