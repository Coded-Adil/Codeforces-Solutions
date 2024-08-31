#include<bits/stdc++.h>
using namespace std;
int main() {
 
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin); //file input.txt is opened in reading mode i.e "r"
    freopen("output.txt","w",stdout);  //file output.txt is opened in writing mode i.e "w"
#endif
 
    int x, s = 0;
    cin >> x;
    int ar[x];
    for(int i = 0; i < x; i++)
    {
        cin >> ar[i];
    }
    for(int i = 0; i < x; i++)
    {
       if(ar[i] != ar[i+1])
       {
           s++;
       }
    }
    cout<<s;
    
    return 0;
}