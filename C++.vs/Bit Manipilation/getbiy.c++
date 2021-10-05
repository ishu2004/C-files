#include<iostream>
using namespace std;

int main() {
int n ;
cin >>n;

int arr[n];

for (int i =1; i <=n; i++)
{
arr[i]=i;    
}

for (int i = 1; i <= n; i++)
{
    cout<<arr[i]<<"  ";
}


    return 0;
}