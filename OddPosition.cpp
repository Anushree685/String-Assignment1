#include<iostream>
using namespace std;
int main (){
    string s;
    getline(cin,s);
    for(int i=0;i<s.size();i+=2){
        s[i] = '#';
    }
    cout<<s;
}