#include<iostream>
using namespace std;

int main()
{
    int n,i;
    float s;
    cout<<"Enter the no. of numbers : ";
    cin>>n;
    float sum=0;
    for(i=0;i<n;i++)
    {
        cin>>s;
        sum+=s;
    }
    cout<<"Average of numbers : "<<sum/n;
    return 0;
}
