#include <bits/stdc++.h>
using namespace std;
int find(long long int m, long long int p)
{
    long long int o;
    int count = 0;
   if(m!=p)
   {
       o = m ^ p;
       while(o)
       {
           o = o & (o - 1);
           count++;
       }
       return count;
   }
   return 0;
}
int main()
{
    int tc;
    long long int m,p;
    cin>>tc;
    while(tc--)
    {
        cin>>m>>p;
        cout<<find(m,p)<<endl;
    }
    return 0;
}