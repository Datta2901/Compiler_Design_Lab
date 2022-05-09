#include<bits/stdc++.h>
using namespace std;

int main(){
    int i = 0;
    char store[20];
    char a;
    while(cin >> a && a != '$'){
        store[i] = a;
        i++;
    }
    int n = i;
    i = 0;
    cout << "Symbol\t" << "Address\t\t" << "Type" << endl; 
    while(i < n){
        a = store[i];
        if(isalpha(a)){
            cout << a << "\t" << (int*)(&store[i]) << "\t" << "identifier"<< endl;
        }else{
            if(a == '+' || a == '-' || a == '*'|| a == '/'){
                cout << a << "\t" << (int*)(&store[i]) << "\t"  << "operator" << endl;
            }
        }
        i++;
    }
    return 0;
}