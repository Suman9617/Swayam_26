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
    cout << "Number of places we have to move "<<endl;
    int d;
    cin >> d;
     d=d%n;

    int team[d];
    for (int i = 0; i < d; i++)
    {
        team[i] = arr[i];
    }

    int j = 0;
    for (int i = d; i < n; i++)
    {
        arr[j++] = arr[i];
    }
    for (int i = 0; i < d; i++)
    {
        arr[j++] = team[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i]<<" ";
    }

    return 0;
}

// Optimal :
void rotate(vector<int>&arr, int low, int high)
{
    while (low < high)
    {
        swap(arr[low], arr[high]);
        low++;
        high--;
    }
}
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
    cout << "Number of places we have to move " << endl;
    int d;
    cin >> d;
    d = d % n;
    rotate(arr, 0, d - 1);
    rotate(arr, d, n - 1);
    rotate(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
