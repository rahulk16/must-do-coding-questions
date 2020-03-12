// https://practice.geeksforgeeks.org/problems/kadanes-algorithm/0
#include <bits/stdc++.h>
using namespace std;

int kadanes(vector<int> v, int n) {
   int highestMax = -999999999, currentMax = -999999999;
   for(int i = 0; i < n; i++){
      currentMax = max(v[i], currentMax + v[i]);
      highestMax = max(highestMax, currentMax);
   }
   return highestMax;
}

int main(){
    int test;
    cin >> test;
    while(test--){
        int n, maxVal;
        cin >> n;
        vector<int> v(n);
        for(int i = 0; i < n; i++){
            cin >> v[i];
        }
        maxVal = kadanes(v, n);
        cout << maxVal << endl;
    }
    return 0;
}