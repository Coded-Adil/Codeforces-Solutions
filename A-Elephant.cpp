#include<bits/stdc++.h>
using namespace std;
int main() {
 
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin); //file input.txt is opened in reading mode i.e "r"
    freopen("output.txt","w",stdout);  //file output.txt is opened in writing mode i.e "w"
#endif
 
    int x;
    cin>>x;
 
    if(x%5==0){
        cout<<x/5;
    }
    else{
        cout<<(x/5)+1;
    }
    
    return 0;
}