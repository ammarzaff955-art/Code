#include<iostream>
#include<cmath>
#include<string>
using namespace std;
int main()
{
    int ans;
    int n;
    int fact=1;
    cout<<"enter the number";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
      fact=fact*i;

     }
    cout<<fact<<endl;
    return 0;
}
