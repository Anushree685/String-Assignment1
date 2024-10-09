#include<iostream>
#include<string>
using namespace std;
int main (){
    string s;
    getline(cin,s);
    int n = s.size();
    int m = n-1;
    int c = 0;
    for(int i=0;i<n;i++){
        int a = (int)s[i];
        int b = a-48;
        c+=b;
        c*=10;
    }
    cout<<c/10;
}