#include<bits/stdc++.h>
using namespace std;
int main() {
 
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin); //file input.txt is opened in reading mode i.e "r"
    freopen("output.txt","w",stdout);  //file output.txt is opened in writing mode i.e "w"
#endif
 
    int a;
    cin>>a;
    int ar[a], m1=0, m2=101, max1, min1;
 
    for(int i=0; i<a; i++)
    {
        cin>>ar[i];
        if(ar[i]>m1)
        {
            m1=ar[i];
            max1=i;
        }
        if(ar[i]<m2)
        {
            m2=ar[i];
            min1=i;
        }
    }
    if(max1>min1)
    {
        min1++;
    }
    cout<<max1+(a-1)-min1;
    
    return 0;
}