/*//  بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ  //*/
/*//   Md Sumon Hossain Khan   //*/

#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;

    //int arr[n];
    vector <int> arr(n);

    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    auto min_it = min_element(arr.begin(), arr.end());

    if(min_it != arr.end())
    {
        int d = distance(arr.begin(), min_it);
        cout << *min_it << " " << d+1 << endl;
    } 

    






    return 0;
} 