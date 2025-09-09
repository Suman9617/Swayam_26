#include <bits/stdc++.h>
using namespace std;
bool check(vector<int>&arr){
    for(int i=1;i<arr.size();i++){
        if(arr[i]<arr[i-1]){
            return false;
        }
    }
    return true;
}

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
    if(check(arr)){
       cout<<"sorted";
    }
    else{
        cout<<"Not Sorted";
    }
    
    return 0;
}