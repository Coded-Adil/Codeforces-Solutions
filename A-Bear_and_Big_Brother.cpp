#include<bits/stdc++.h>
using namespace std;
int main() {
 
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin); //file input.txt is opened in reading mode i.e "r"
    freopen("output.txt","w",stdout);  //file output.txt is opened in writing mode i.e "w"
#endif
 
    int a, b, t=0;
    cin >> a >> b;
 
    while(a<=b)
    {
        a = a*3;
        b = b*2;
 
        t++;
    }
 
    cout<<t<<endl;
    
    return 0;
}