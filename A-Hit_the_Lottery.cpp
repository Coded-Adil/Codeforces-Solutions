#include<bits/stdc++.h>
using namespace std;
int main() {
 
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin); //file input.txt is opened in reading mode i.e "r"
    freopen("output.txt","w",stdout);  //file output.txt is opened in writing mode i.e "w"
#endif
 
    int m;
    cin>>m;
 
    int n=m/100;
    int left=m%100;
 
    n+= left/20;
    left=left%20;
 
    n+=left/10;
    left=left%10;
 
    n+=left/5;
    left=left%5;
 
    n+=left/1;
 
    cout<<n<<endl;
    return 0;
}