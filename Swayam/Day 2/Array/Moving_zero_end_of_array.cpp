#include <bits/stdc++.h>
using namespace std;
// Brout froce :
int main()
{
    cout << "Number of element in array" << endl;
    int n;
    cin >> n;

    vector<int> arr(n, INT_MIN);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    vector<int> noZero;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            noZero.push_back(arr[i]);
        }
    }
    for (int i = 0; i < noZero.size(); i++)
    {
        arr[i] = noZero[i];
    }
    for (int i = noZero.size(); i < n; i++)
    {
        arr[i] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

//Optimal:
int main()
{
    cout << "Number of element in array" << endl;
    int n;
    cin >> n;

    vector<int> arr(n, INT_MIN);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int i, k=0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        { 
            swap(arr[i],arr[k]);
            k++;
        }
       
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}