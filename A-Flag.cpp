#include<bits/stdc++.h>
using namespace std;
int main() {
 
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin); //file input.txt is opened in reading mode i.e "r"
    freopen("output.txt","w",stdout);  //file output.txt is opened in writing mode i.e "w"
#endif
 
    // https://codeforces.com/problemset/problem/71/A
    int n, m, k;
    bool isReal=1;
 
    cin>>n>>m;
 
    char a[n][m];
 
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin>>a[i][j];
        }
    }
 
 
    for(int i=0; i<n; i++)
    {
        k=i;
        for(int j=0; j<m; j++)
        {
            if(i>0) 
            {
                if (a[k][j]==a[k-1][j]) 
                {
                    isReal = 0;
                    break;
                }
            }
                if(j>0)
                {
                    if(a[k][j]!=a[k][j-1])
                    {
                        isReal=0;
                        break;
                    }
                }
        }
    }
 
 
    if(isReal)
    {
        cout<<"YES";
    }
    else 
    {
        cout<<"NO";
    }
    return 0;
}