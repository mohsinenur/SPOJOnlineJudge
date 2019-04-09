#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    bool f=false;
    while(true){
        cin >> x;
        if(f==true) break;
        if(x!=42) cout << x << "\n";
        else f=true;
    }
    return 0;
}
