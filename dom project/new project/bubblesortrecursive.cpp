#include <iostream>
using namespace std;
void bubblesortrecursive(int arr[], int n)
{
    if (n == 1)
    {
        return;
    }
    int a = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            swap(arr[i], arr[i + 1]);
            a++;
        }
        if (a == 0)
        {
            return;
        }
    }
    bubblesortrecursive(arr, n);
}
int main()
{
    int n;
    cout << "enter n : " << endl;
    cin >> n;
    int arr[n];
    cout << "enter the array :" << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    bubblesortrecursive(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}