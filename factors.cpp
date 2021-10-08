#include <bits/stdc++.h>

using namespace std;

int main() {    

int n;
cin>>n;
int i;
int c=0;
cout<<"All factors are"<<endl;

for(i=1;i*i<n;i++)
{
if(n%i==0)
{
 if(n/i==i)
    cout<<i<<endl<<n/i;
   else
      cout<<n/i<<endl;
   
}
}







   
    return 0;
}
