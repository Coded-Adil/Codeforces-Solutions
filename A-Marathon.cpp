#include<bits/stdc++.h>
using namespace std;
int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin); //file input.txt is opened in reading mode i.e "r"
    freopen("output.txt","w",stdout);  //file output.txt is opened in writing mode i.e "w"
#endif

    int tast = 1;
    cin>>tast;


    for(int i=1; i<=tast; i++)
    {
        long long a,b,c,d;
        cin>>a>>b>>c>>d;

        int count =0;

        if(a<b)
        {
            count++;
        }
        if(a<c)
        {
            count++;
        }
        if(a<d)
        {
            count++;
        }

        cout<<count<<endl;
    }
}
