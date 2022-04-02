#include <iostream>
#include <vector>
using namespace std;

vector<int> reverseTheArray(vector<int> a)
{

    int s = 0, e = a.size() - 1;
    if (s <= e)
    {
        swap(a[s], a[e]);
        s++;
        e--;
    }
    return a;
}

// vector<int> printArray(vector<int> ans){

//     for (int i =0;i<=ans.size()-1;i++)
//     {
//         cout << ans[i] << " ";
//     }

// }

int main()
{

    vector<int> a;
    a.push_back(5);
    a.push_back(10);
    a.push_back(15);
    a.push_back(20);
    a.push_back(25);

    /* vector<int> ans =*/reverseTheArray(a);
        for (int i =0;i<=a.size()-1;i++)
        {
            cout << a[i] << " ";
        }
    // printArray(ans);
    return 0;
}