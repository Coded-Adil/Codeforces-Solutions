#include<bits/stdc++.h>
using namespace std;
int main() {
 
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin); //file input.txt is opened in reading mode i.e "r"
    freopen("output.txt","w",stdout);  //file output.txt is opened in writing mode i.e "w"
#endif
 
    int t,n,i,o,e;
    cin>>t;
    while(t--)
    {
        e=o=0;
        cin>>n;
        while(n--&&cin>>i)
        {
            (i%2?o:e)+=i;
        }
        cout<<(e>o?"YES\n":"NO\n");
    }
    
    return 0;
}