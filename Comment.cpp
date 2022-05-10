#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin,s);
    int size = s.size();
    if(size <= 2){
        cout << "Invalid" << endl;;
    }else{
        if(s[0] == '/' && s[1] == '/'){
            cout << "This is a comment" << endl;
        }else{
            cout << "This is not a comment" << endl;
        }
    }
    string a = "First(E)";
    string b = "={a,b,c}";
    cout << a << " " << b << endl; 
    return 0;
}