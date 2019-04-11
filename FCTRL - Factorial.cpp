#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int z(int p){
    int cnt=0;
    for(int j=5; p/j >= 1; j*=5){
        cnt += p/j;
    }
    return cnt;
}

int main()
{
    int t, n;
    cin >> t;
    for(int i=0; i<t; i++){
        cin >> n;
        cout << z(n) << "\n";
    }

    return 0;
}
