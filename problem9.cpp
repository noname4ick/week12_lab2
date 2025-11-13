#include <iostream>

using namespace std;

void to_lower(char* ch) {
    if(*ch>='A' && *ch<='Z') {
        *ch = *ch + 32;
    }
}

void to_upper(char* ch) {
    if(*ch>='a' && *ch<='z') {
        *ch = *ch - 32;
    }
}

void normalisation(string &str) {
    to_upper(&str[0]);
    for(int i=1; i<str.length(); i++) {
        to_lower(&str[i]);
    }
}

int main(){
    string str;
    cin>>str;
    normalisation(str);
    cout<<str<<endl;
    return 0;
}