#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool isPrime(int p){
    int j;
    if(p==1) return false;
    if(p==2) return true;
    for(j=2; j<= sqrt(p); j++){
        if(p%j == 0){
          return false;
          break;
        }
    }
    return true;
}

void prime(int x, int y){
    int i;
    for(i=x; i<=y; i++){
        if(isPrime(i)){
            cout << i << "\n";
        }
    }
}

int main()
{
    int n, i, a, b;
    cin >> n;
    for(i=0; i<n; i++){
        cin >> a >> b;
        prime(a, b);
        cout << "\n";
    }

    return 0;
}
