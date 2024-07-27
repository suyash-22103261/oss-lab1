#include<iostream>
using namespace std;

int main()
{
    int n,i;
    cout<<"Enter the no. of numbers : ";
    cin>>n;
    float s[n];
    float sum=0;
    for(i=0;i<n;i++)
    {
        cin>>s[i];
        sum+=s[i];
    }
    cout<<"Array of numbers : ";
    for(i=0;i<n;i++)
    {
        cout<<s[i]<<" ";
    }
    cout<<"\nAverage of numbers : "<<sum/n;
    return 0;
}
