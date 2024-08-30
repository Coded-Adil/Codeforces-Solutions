#include<bits/stdc++.h>
using namespace std;
int main() {
 
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin); //file input.txt is opened in reading mode i.e "r"
    freopen("output.txt","w",stdout);  //file output.txt is opened in writing mode i.e "w"
#endif
 
    int n , t, l = 0;
    int x[1000] = {}, y[1000] = {};
    cin >> n;
 
    for(int i = 1;i < n + 1;i++)
    {
        cin >> x[i];
    }
 
    for(int i = 1;i < n + 1;i++)
    {
        y[x[i]] = i;
    }
 
    for(int i = 1;i < n + 1;i++)
    {
        cout << y[i] <<" ";
    }
    
    return 0;
}