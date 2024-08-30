#include<bits/stdc++.h>
using namespace std;
int main() {
 
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin); //file input.txt is opened in reading mode i.e "r"
    freopen("output.txt","w",stdout);  //file output.txt is opened in writing mode i.e "w"
#endif
 
    string a, b;
    cin>>a>>b;
 
    for(int i=0; i<a.size(); i++)
    {
        int r = a[i] ^ b[i];
        cout<<r;
    }
    return 0;
}