#include <iostream>
using namespace std;

void displaySeating(int seats[][15], int Rows, int Seats_Per_Row)
{
    cout << "Seating Arrangement: (0 = Available, 1 = Occupied)" << endl;
    cout << "       ";
    for (int i = 0; i < Seats_Per_Row; i++)
    {
        cout << i + 1 << " ";
    }
    cout << endl;
    for (int i = 0; i < Rows; i++)
    {
        cout << "Row " << i + 1 << ": ";
        for (int j = 0; j < Seats_Per_Row; j++)
        {
            cout << seats[i][j] << " ";
        }
        cout << endl;
    }
}
void bookSeat(int seats[][15], int Rows, int Seats_Per_Row)
{
    int row, seat;
    cout << "Enter row number (1 to " << Rows << "): ";
    cin >> row;
    cout << "Enter seat number (1 to " << Seats_Per_Row << "): ";
    cin >> seat;
    row--;
    seat--;
    if (row < 0 || row >= Rows || seat < 0 || seat >= Seats_Per_Row)
    {
        cout << "Invalid row or seat number. Please try again." << endl;
        return;
    }
    if (seats[row][seat] == 1)
    {
        cout << "Seat is already occupied. Please choose a different seat." << endl;
    }
    else
    {
        seats[row][seat] = 1;
        cout << "Seat successfully booked!" << endl;
    }
}

int main()
{
    const int Rows = 10;
    const int Seats_Per_Row = 15;

    int seats[Rows][Seats_Per_Row] = {0};
    int choice;
    do
    {
        cout << "\n*** Cinema Seating Arrangement System ***\n";
        cout << "1. Display seating arrangement\n";
        cout << "2. Book a seat\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            displaySeating(seats, Rows, Seats_Per_Row);
            break;
        case 2:
            bookSeat(seats, Rows, Seats_Per_Row);
            break;
        case 3:
            cout << "Exiting the system. Goodbye!" << endl;
            break;
        default:
            cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 3);
    return 0;
}