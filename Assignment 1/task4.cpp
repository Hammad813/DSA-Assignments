#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int target)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == target)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    const int maxOrder = 1000;
    int orderIds[maxOrder];
    int n;

    cout << "Enter the number of orders (up to 1000): ";
    cin >> n;

    if (n > maxOrder || n <= 0)
    {
        cout << "Invalid number of orders. Please enter a number between 1 and 1000." << endl;
        return 1;
    }

    cout << "Enter " << n << " order IDs: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> orderIds[i];
    }

    int target;
    cout << "Enter the order ID to search for: ";
    cin >> target;

    int position = linearSearch(orderIds, n, target);

    if (position != -1)
    {
        cout << "Order ID " << target << " found at position " << position << endl;
    }
    else
    {
        cout << "Order ID " << target << " not found" << endl;
    }
return 0;
}