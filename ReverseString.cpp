#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main (){
    string s;
    getline(cin,s);
    int n=s.length();
    if(n%2==0){
        reverse(s.begin()+n/2,s.end());
    }
    cout<<s;
}