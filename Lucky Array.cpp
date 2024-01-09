/*//  بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ  //*/
/*//   Md Sumon Hossain Khan   //*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    int min = arr[0];
    for(int i=0; i<n; i++)
    {
        if(arr[i] < min)
        {
            min = arr[i];
        }
    }
    
    int min_count = 0;
    for(int i=0; i<n; i++)
    {
        if(min == arr[i])
        {
            min_count++;
        }
    }

    if(min_count % 2 == 0)
    {
        cout << "Unlucky" << endl;
    }
    else
    {
        cout << "Lucky" << endl;
    }


    return 0;
}