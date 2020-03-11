// https://practice.geeksforgeeks.org/problems/subarray-with-given-sum/0
#include <bits/stdc++.h>
using namespace std;

int main(){
    int test;
    cin >> test;
    while(test--){
        int n, sum, st = 0, end = 0, reqdSum = 0;
        cin >> n >> sum;
        vector<int> v(n);
        bool found = false;
        for(int i = 0; i < n; i++)
            cin >> v[i];
        while(st < n || end < n){
            if(reqdSum == sum){
                found = true;
                break;
            }else if(reqdSum > sum){
                reqdSum -= v[st++];
            }else{
                if(end == n)
                    break;
                reqdSum += v[end++];
            }
        }
        if(found)
            cout << st + 1 << " " << end << endl;
        else
            cout << "-1" << endl;
    }
    return 0;
}