#include <iostream>
using namespace std;
int main()
{
    const int days = 2;
    const int hours = 4;
    int temp[days][hours];
    int average;
    int tem;
    int maxtemp = 0;
    for (int i = 0; i < days; i++)
    {
        tem = 0;
        for (int j = 0; j < hours; j++)
        {
            cout << "Enter the temperature on " << i + 1 << " day " << " at " << j + 1 << " hour: ";
            cin >> temp[i][j];
            tem += temp[i][j];
        }
        average = tem / hours;
        cout << "The average temperature at " << i + 1 << " day " << average << endl;
    }
    for (int i = 0; i < days; i++)
    {
        for (int j = 0; j < hours; j++)
        {
            if (temp[i][j] > maxtemp)
            {
                maxtemp = temp[i][j];
            }
        }
    }
    int mintemp = temp[0][0];
    for (int i = 0; i < days; i++)
    {
        for (int j = 0; j < hours; j++)
        {
            if (temp[i][j] < mintemp)
            {
                mintemp = temp[i][j];
            }
        }
    }
    cout << "The highest temperature in a entire week is : " << maxtemp << endl;
    cout << "The lowest temperature in a entire week is : " << mintemp << endl;
    return 0;
}