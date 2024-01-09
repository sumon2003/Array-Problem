/*//  بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ  //*/
/*//   Md Sumon Hossain Khan   //*/

#include<bits/stdc++.h>
using namespace std;

void Input(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
}

void Output(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
}

void Replace_MinMax(int arr[], int n)
{
    int min = arr[0];
    int max = arr[0];
    int min_index = 0, max_index = 0;
    for(int i=0; i<n; i++)
    {
        if(arr[i] < min)
        {
            min = arr[i];
            min_index = i;
        }
    }

    for(int i=0; i<n; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
            max_index = i;
        }
    }
 
    int temp       = arr[min_index];
    arr[min_index] = arr[max_index];
    arr[max_index] =           temp;
    
    Output(arr, n);

}
int main()
{
    int n;
    cin >> n;

    int arr[n];
    Input(arr, n);

    Replace_MinMax(arr, n);


    return 0;
}