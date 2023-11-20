#include <iostream>
using namespace std;

int first(int arr[], int n, int key)
{
    int k = key;
    int s = 0;
    int e = n - 1;
    int m = (s + e) / 2; 
    int i=0;
    while(arr[i]<arr[i+1])
    {

    }
} 
int main()
{
    int n;
    int i;
    int j;
    int y;
    int key;

    cout << "enter element to be found: ";
    cin >> key;

    cout << "enter number of elements: ";
    cin >> n;

    int arr[n];

    for (i = 0; i < n; i++)
    {
        cout << "array " << i + 1 << ": ";
        cin >> arr[i];
    }

    j = first(arr, n, key);
    y = last(arr, n, key);

    cout << "the number of occurrences is " << y - j + 1 << endl;

    return 0;
    // let me ceed
}
