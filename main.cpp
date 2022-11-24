#include <iostream>

using namespace std;

struct Book{
    string name;
    string surname;
    int phone;
};

void show_menu();
void add(Book user[],int i);
void display(Book user[],int i);
void edit(Book user[]);

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
            edit(user);
            break;
        case 3:
            display(user,i);
            break;
        case 4:
            i--;
            break;
        case 5:
            exit(0);

        }
    }

    return 0;
}
void show_menu(){
    cout << endl;
    cout << "-------------PHONE BOOK-------------" << endl;
    cout << "Choose one of the available options!" << endl;
    cout << "1. Add" << endl;
    cout << "2. Edit" << endl;
    cout << "3. Display" << endl;
    cout << "4. Delete last person" << endl;
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
void display(Book user[],int i){
    if(i == 0){
        cout << "Phone book is emplty!" << endl;
        cout << "Use add function!" << endl;
    }
    else{
        for(int j = 0; j < i; j++){
            cout << j+1 << ". Person" << endl;
            cout << user[j].name << " ";
            cout << user[j].surname << ", phone: ";
            cout << user[j].phone << endl;
        }
    }
}
void edit(Book user[]){
    int number;
    cout << "Which contact you want to edit?" << endl;
    cin >> number;
    add(user,number-1);
}
