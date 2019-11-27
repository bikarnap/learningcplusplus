#include <iostream>
using namespace std; 

int main() {
  string names[2]; 
  string numbers[2];
  string findContact;
  int id = 0;
  
  int selection= 0; 
  while(selection != 3) {
    cout << "Id is: " << id <<"\n";
    cout << "Phonebook Menu\n"
      << "1 - add a contact\n"
      << "2 - find contact\n"
      << "3 - exit menu\n"
      << "Select from menu above \n"; 
    cin >> selection; 
    //cout << "Your selection is: " << selection << "\n";
    switch(selection) {
      
      case 1: 
        cout <<"You have selected to add contact\n";
        if(id < 2) {
          cout << "Name: ";
          cin >> names[id]; 
          cout << "Number: "; 
          cin >> numbers[id]; 
          id++;
        } else {
          cout << "Memory full\n"
              << "System exiting...";
          exit(0);
        }
        break; 
      
      case 2: 
        cout << "You have selected to find contact\n";
        cout << "Find contact: "; 
        cin >> findContact; 
        for(int i = 0; i < id; i++) {
          if(names[i] == findContact) {
            cout << names[i] << " " << numbers[i] << "\n";
            break; 
          } else {
            if(i < id)
              continue;
            else
              cout << "Contact not found\n";
          }
        }
        break; 
      case 3: 
        cout << "Exit menu selected, system exiting...";
        exit(0);
        break;
    }

  }
}
