#include<iostream>
#include<string>
using namespace std;

int main()
{
    const int size = 100;
    int books[size] = {0};
    string bookNames[size];
    int bookCount = 0;

    while (true)
    {
        int choice;
        cout<<"\nLibrary Management System\n";
        cout<<"1. Add a new book\n";
        cout<<"2. Borrow a book\n";
        cout<<"3. Return a book\n";
        cout<<"4. Display all books\n";
        cout<<"5. Exit\n";
        cout<<"Enter your choice: ";
        cin>>choice;

        if (choice == 1)
        {
            if (bookCount < size)
            {
                string bookName;
                int n;

                cout<<"Enter the Name of book you want to add: ";
                cin.ignore();
                getline(cin, bookName);

                while (true)
                {
                    cout<<"Enter the Copies of books you want to add: ";
                    cin>>n;

                    if (n >= 1 && n <= 5) 
                    {
                        break;
                    }
                    else
                    {
                        cout<<"Please enter a number between 1 and 5"<<endl;
                    }
                }

                bookNames[bookCount] = bookName;
                books[bookCount] = n;
                bookCount++;

                cout << "Book added successfully!\n";
            }
            else
            {
                cout << "Library is full! Cannot add more books.\n";
            }
        }
        else if (choice == 2)
        { 
            string bookName;
            cout<<"Enter the Name of book you want to borrow: ";
            cin.ignore();
            getline(cin, bookName);

            bool found = false;
            for (int i = 0; i < bookCount; i++)
            {
                if (bookNames[i] == bookName)
                {
                    if (books[i] > 0)
                    {
                        books[i]--;
                        cout<<"Book borrowed successfully! Copies left: " << books[i] << "\n";
                    }
                    else
                    {
                        cout << "Sorry, no copies available for this book.\n";
                    }
                    found = true;
                    break;
                }
            }
            if (!found)
            {
                cout<<"Book not found in the library.\n";
            }
        }
        else if (choice == 3)
        { 
            string bookName;
            cout<<"Enter the Name of book you want to return: ";
            cin.ignore();
            getline(cin, bookName);

            bool found = false;
            for (int i = 0; i < bookCount; i++)
            {
                if (bookNames[i] == bookName)
                {
                    books[i]++;
                    cout<<"Book returned successfully! Copies available: " << books[i] << "\n";
                    found = true;
                    break;
                }
            }
            if (!found)
            {
                cout<<"Book not found in the library.\n";
            }
        }
        else if (choice == 4)
        { 
            if (bookCount == 0)
            {
                cout << "No books in the library.\n";
            }
            else
            {
                cout<<"\nList of books in the library:\n";
                for (int i = 0; i < bookCount; i++)
                {
                    cout<<"Book Name: "<<bookNames[i]<<", Copies: "<<books[i]<<"\n";
                }
            }
        }
        else if (choice == 5)
        { 
            cout<<"Exiting the program...\n";
            break;
        }
        else
        {
            cout<<"Invalid choice! Please try again.\n";
        }
    }

return 0;
}