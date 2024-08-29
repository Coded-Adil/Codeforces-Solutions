#include<iostream>
using namespace std;
 
int main()
{
 
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin); //file input.txt is opened in reading mode i.e "r"
	freopen("output.txt","w",stdout);  //file output.txt is opened in writing mode i.e "w"
#endif
 
	// https://codeforces.com/problemset/problem/71/A
 
    int a,  b;
    int c = 0;
 
    cin>> a>> b;
 
    if (a<3 && b<3)
    {
        if (a<b)
        {
            c = b+a;
        }
        else
        {
            c = a+b;
        }
    }
    else
    {
        if (a>b)
        {
            c = a-b;
        }
        else
        {
            c = b-a;
        }
    }
    
    cout<<c;
 
    return 0;
}