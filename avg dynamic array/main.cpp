#include <iostream>

using namespace std;

float avg(int *p,int n)
{
    for(int i=0;i<n;i++)
        p[i]+=p[i];
    return p;
}
int main()
{
    int *p,n;
    cout<<"enter size of array";
    cin>>n;
    p=new int[n];
    for(int i=0;i<n;i++)
    {
      cin>>p[i];
    }
    float a=avg(*p,n);
    return 0;
}
