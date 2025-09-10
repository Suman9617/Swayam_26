#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << "Number of element in 1 array" << endl;
    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Number of element in 2 array" << endl;
    int m;
    cin >> m;

    vector<int> brr(m);

    for (int i = 0; i < m; i++)
    {
        cin >> brr[i];
    }

    vector<int> ans;
    int i = 0, j = 0;
    while (i < n && j < m)
    {
        if (arr[i] == brr[j])
        {
            ans.push_back(arr[i]);
            i++;
            j++;
        }
        else if (arr[i] < brr[j])
        {

            i++;
        }
        else
        {

            j++;
        }
    }

    cout << "Merged Array: ";
    for (int x : ans)
    {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}