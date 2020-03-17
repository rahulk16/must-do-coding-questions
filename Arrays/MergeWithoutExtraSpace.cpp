// https://practice.geeksforgeeks.org/problems/merge-two-sorted-arrays/0/
#include <bits/stdc++.h>
using namespace std;

int main(){
    int test;
    cin >> test;
    while(test--){
        int n, m, pt1 = 0, pt2 = 0;
        cin >> m >> n;
        vector<int> v1(m);
        vector<int> v2(n);
        for(int i = 0;i < m; i++)
            cin >> v1[i];
        for(int i = 0; i < n; i++)
            cin >> v2[i];
        while(pt1 < m && pt2 < n){
            if(v1[pt1] < v2[pt2]){
                cout << v1[pt1] << " ";
                pt1++;
            }else{
                cout << v2[pt2] << " ";
                pt2++;
            }
        }
        while(pt1 < m){
            cout << v1[pt1] << " ";
            pt1++;
        }
        while(pt2 < n){
            cout << v2[pt2] << " ";
            pt2++;
        }
        cout << "\n";
    }
    return 0;
}