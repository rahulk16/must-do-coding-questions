#include <bits/stdc++.h>
using namespace std;

int main(){
    int test;
    cin >> test;
    while(test--){
        int n, pt1 = 0, pt2 = 0, mid = 0;
        cin >> n;
        mid = n%2 == 0 ? n/2 : (n + 1)/2;
        pt2 = n - 1;
        vector<int> v(n);
        for(int i = 0; i < n; i++)
            cin >> v[i];
        while(pt1 < mid && pt2 > mid - 1){
            cout << v[pt2--] << " " ;
            cout << v[pt1++] << " ";
            
        }
        if(n%2 != 0){
            cout << v[(n/2)] << " ";
        }
        cout << "\n";
    }
    return 0;
}