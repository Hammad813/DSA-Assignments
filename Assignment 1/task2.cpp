#include <iostream>
using namespace std;
int main()
{
    int branches = 12;
    int month = 12;
    int highindex = 0;
    int lowindex = 0;
    int salespermonth[branches][month];
    int salesinyear[branches];
    int monthsales = 0;
    int highestsales = 0;
    for (int i = 0; i < branches; i++)
    {
        for (int j = 0; j < month; j++)
        {
            cout << "Enter the total sales in " << i + 1 << " branch " << j + 1 << " month " << endl;
            cin >> salespermonth[i][j];
            monthsales += salespermonth[i][j];
        }
        salesinyear[i] = monthsales;
        monthsales = 0;
    }
    for (int i = 0; i < branches; i++)
    {
        if (salesinyear[i] > highestsales)
        {
            highestsales = salesinyear[i];
            highindex = i + 1;
        }
    }
    int lowestsales = salesinyear[0];
    for (int i = 1; i < branches; i++)
    {
        if (salesinyear[i] < lowestsales)
        {
            lowestsales = salesinyear[i];
            lowindex = i + 1;
        }
    }
    cout << "The highest sales is " << highestsales << " in " << highindex << " branch " << endl;
    cout << "The lowest sales is " << lowestsales << " in " << lowindex << " branch " << endl;
    return 0;
}