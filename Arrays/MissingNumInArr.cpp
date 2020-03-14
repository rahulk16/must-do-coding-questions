// https://practice.geeksforgeeks.org/problems/missing-number-in-array/0
#include <bits/stdc++.h>
using namespace std;

int main(){
    int test;
    cin >> test;
    while(test--){
        int n, s1 = 0, s2 = 0;
        cin >> n;
        vector<int> v(n-1);
        for(int i = 0; i < n - 1; i++){
            cin >> v[i];
            s1 += v[i];
        }
        s2 = n * (n + 1)/2;
        cout << s2 - s1 << endl;
    }
}