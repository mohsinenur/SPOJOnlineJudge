#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int revNum(int p){
    int res=0;

    while(p>0){
        res = res*10 + p%10;
        p = p/10;
    }
    return res;
}

int main()
{
    int n, i, a, b, s, r;
    cin >> n;
    for(i=0; i<n; i++){
        cin >> a >> b;
        a = revNum(a);
        b = revNum(b);
        s = a+b;
        r = revNum(s);
        cout << r << "\n";
    }

    return 0;
}

