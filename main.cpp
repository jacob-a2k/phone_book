#include <iostream>

using namespace std;

struct Book{
    string name;
    string surname;
    int phone;
};

void show_menu();
void add(Book user[],int i);

int main()
{
    Book user[10];
    int i = 0;
    for(;;){
        show_menu();

        int number;
        cin >> number;
        switch(number){
        case 1:
            add(user,i);
            i++;
            break;
        case 2:
            //edit();
            break;
        case 3:
            //display();
            break;
        case 4:
            //delete_number();
            break;
        case 5:
            exit(0);

        }
    }

    return 0;
}
void show_menu(){
    cout << "-------------PHONE BOOK-------------" << endl;
    cout << "Choose one of the available options!" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Edit" << endl;
    cout << "3. Display" << endl;
    cout << "4. Delete" << endl;
    cout << "5. Exit" << endl;
}
void add(Book user[], int i){
    cout << "Enter name" << endl;
    cin >> user[i].name;
    cout << "Enter surname" << endl;
    cin >> user[i].surname;
    cout << "Enter phone" << endl;
    cin >> user[i].phone;
}
