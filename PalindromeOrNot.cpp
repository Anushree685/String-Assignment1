#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main (){
    string s;
    getline(cin,s);
    string t = s;
    reverse(s.begin(),s.end());
    if(t==s) cout<<"YES";
    else cout<<"NO";
}