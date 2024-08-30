#include<bits/stdc++.h>
using namespace std;
int main() {
 
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin); //file input.txt is opened in reading mode i.e "r"
    freopen("output.txt","w",stdout);  //file output.txt is opened in writing mode i.e "w"
#endif
 
    int t,count=0;
    cin>>t;
 
    int arr[t];
    for(int i=0; i<t; i++)
    {
        cin>>arr[i];
    }
 
    int max = arr[0];
    int min = arr[0];
    for(int i=0; i<t; i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
            count++;
        }
        if(arr[i]<min)
        {
            min=arr[i];
            count++;
        }
    }
    cout<<count;
    return 0;
}