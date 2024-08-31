#include<bits/stdc++.h>
using namespace std;
int main() {
 
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin); //file input.txt is opened in reading mode i.e "r"
    freopen("output.txt","w",stdout);  //file output.txt is opened in writing mode i.e "w"
#endif
 
    int a,b,c,d;
    cin>>a>>b>>c>>d;
 
    set<int> r = {a, b, c, d};
 
    cout<<4-r.size()<<endl;
    
    return 0;
}