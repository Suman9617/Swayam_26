#include <bits/stdc++.h>
using namespace std;
// Brout froce :
int main()
{
    cout << "Number of element in array"<<endl;
    int n;
    cin >> n;

    vector<int> arr(n, INT_MIN);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int team=arr[0];
    for(int i=1;i<n;i++){
        arr[i-1]=arr[i];
    }
    arr[n-1]=team;
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    return 0;
}