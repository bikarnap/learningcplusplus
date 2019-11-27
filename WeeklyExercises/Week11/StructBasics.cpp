struct Student {
    string firstName; 
    string lastName; 
    string studentNumber;
    int credits;
};

Student student1; 

int main() {
    cout << "Enter the first name for student1: ";
    cin >> student1.firstName;
    cout << "Enter the last name of student1: "; 
    cin >> student.lastName; 
    cout << "Enter student1's student number: "; 
    cin >> student1.studentNumber; 
    cout << "Enter the number of credits completed by student1: "; 
    cin >> credits;

    cout <<"First name: " <<student1.firstName <<"\n"
         <<"Last name: " << student1.lastName <<"\n"
         <<"Student number: " << student1.studentNumber << "\n"
         <<"Credits: " << student1.credits << "\n"; 
}
