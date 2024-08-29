#include<bits/stdc++.h>
using namespace std;
int main() {
 
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin); //file input.txt is opened in reading mode i.e "r"
    freopen("output.txt","w",stdout);  //file output.txt is opened in writing mode i.e "w"
#endif
 
    int a,b;
    cin>>a>>b;
 
    for(int i=1; i<=a; i++){
        if(i%4==2){
            for(int i=1; i<b; i++){
                cout<<".";
            }
            cout<<"#";
        }
        else if(i%4==0){
            cout<<"#";
            for(int i=1;i<b; i++){
                cout<<".";
            }
        }
        else{
            for(int i=1; i<=b; i++){
                cout<<"#";
            }
        }
        cout<<endl;
    }
    return 0;
}