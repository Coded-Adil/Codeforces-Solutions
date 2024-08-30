#include<bits/stdc++.h>
using namespace std;
int main() {
 
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin); //file input.txt is opened in reading mode i.e "r"
    freopen("output.txt","w",stdout);  //file output.txt is opened in writing mode i.e "w"
#endif
 
    int t, a, b, r;
    cin >> t;
    while (t--)
    {
        cin >> a >> b;
        r =(a-b)%2;
 
        if(a>b)
        {
            r++;
        }
        else if(a<b)
        {
            r = r+2;
        }
 
        cout<<r<<endl;
    }
    
    return 0;
}