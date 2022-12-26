#include <bits/stdc++.h>
using namespace std;

void xyz(vector<int> &a)
{
    a[0] = 21;
    // a[1]= 22;
    // return a;
}

int main()
{

    vector<int> a;
    // a.push_back(5);
    // a.push_back(15);
    // // a[0] = 21;
    // cout<<a[0];
    // cout<<a[1]<<endl;
    // a= xyz(a);
    // cout<<a[0];
    // cout<<a[1]<<endl;
    
    a.push_back(5);
    xyz(a);
    cout<<a[0];

    return 0;
}