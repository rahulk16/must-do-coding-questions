// https://practice.geeksforgeeks.org/problems/count-the-triplets/0
#include <bits/stdc++.h>
using namespace std;

int main(){
    int test;
    cin >> test;
    while(test--){
        int n, cnt = 0;
        cin >> n;
        vector<int> v(n);
        for(int i = 0; i < n; i++){
            cin >> v[i];
        }
            
        sort(v.begin(),v.end());
        for(int i = n - 1; i > 1; i--){
            int st = 0, end = i - 1;
            while(st < end){
                if(v[st] + v[end] == v[i]){
                    cnt++;
                    end--;
                }else if(v[st] + v[end] < v[i]){
                    st++;
                }else{
                    end--;
                }
            }
        }
        if(cnt == 0)
            cout << "-1" << endl;
        else
            cout << cnt << endl;
    }
    return 0;
}