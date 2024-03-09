#include <iostream>
#include <array>
using namespace std;

int main()
{
  int number, n, temp;
  cout << "FIRST ENTER THE LENGTH OF AN ARRAY" << endl;
  cin >> n;
  int arr[n];

  cout << "Enter The Elements Of \"ARRAY\"" << endl;
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  cout << endl;
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
  for (int i = 0; i < n - 1; i++)
  {
    for (int j = i + 1; j < n; j++)
    {
      if (arr[i] > arr[j])
      {
        arr[i] = arr[i] + arr[j];
        arr[j] = arr[i] - arr[j];
        arr[i] = arr[i] - arr[j];
      }
    }
  }
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << "\t";
  }
  return 0;
}
