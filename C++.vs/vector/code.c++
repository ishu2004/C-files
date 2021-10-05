#include<iostream>
#include<vector>
using namespace std;




int main() {
int n;
cin>>n;
vector<int> v (5);

for (int i = 0; i <=n; i++)
{
    v.push_back(i);
    return 0;
}
for (int i = 0; i <=v.size(); i++)
{
    cout<<v[i];
}
return 0;}