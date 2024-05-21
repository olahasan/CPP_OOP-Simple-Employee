
#include <iostream>
#include <string>

using namespace std;

class clsEmployee
{
private:
    int _ID;
    string _FirstName;
    string _LastName;
    string _Title;
    string _Email;
    string _Phone;
    string _Salary;
    string _Department;

public:
    clsEmployee(int ID, string FirstName, string LastName, string Title, string Email, string Phone, string Salary, string Department)
    {
        _ID = ID;
        _FirstName = FirstName;
        _LastName = LastName;
        _Title = Title;
        _Email = Email;
        _Phone = Phone;
        _Salary = Salary;
        _Department = Department;
    }

    //get and set
    
    //get ID
    int ID()
    {
        return _ID;
    }

    //get and set FirstName
    void SetFirstName(string FirstName)
    {
        _FirstName = FirstName;
    }
    string FirstName()
    {
        return _FirstName;
    }

    //Set Get LastName
    void SetLastName(string LastName)
    {
        _LastName = LastName;
    }
    string LastName()
    {
        return _LastName;
    }

    //FullName
    string FullName()
    {
        return _FirstName + " " + _LastName;
    }

    //Set Get Title
    void SetTitle(string Title)
    {
        _Title = Title;
    }
    string Title()
    {
        return _Title;
    }

    //Set Get Email
    void SetEmail(string Email)
    {
        _Email = Email;
    }
    string Email()
    {
        return _Email;
    }

    //Set Get Phone
    void SetPhone(string Phone)
    {
        _Phone = Phone;
    }
    string Phone()
    {
        return _Phone;
    }

    //Set Get Salary
    void SetSalary(string Salary)
    {
        _Salary = Salary;
    }
    string Salary()
    {
        return _Salary;
    }

    //Set Get Department
    void SetDepartment(string Department)
    {
        _Department = Department;
    }
    string Department()
    {
        return _Department;
    }


    void SendEmail(string Subject, string Body)
    {
        cout << "the follwing message sent succesfully to email : " << _Email << endl;
        cout << "Subject: " << Subject << endl;
        cout << "Body: " << Body << endl << endl;
    }

    void SendSMS(string Body)
    {
        cout << "the follwing sms sent succesfully to phone : " << _Phone << endl;
        cout << Body << endl;
    }

    void Print()
    {
        cout << "\nInfo\n";
        cout << "______________________\n";
        cout << "ID        : " << _ID << endl;
        cout << "FirstName : " << _FirstName << endl;
        cout << "LastName  : " << _LastName << endl;
        cout << "FullName  : " << FullName() << endl; 
        cout << "Title     : " << _Title << endl;
        cout << "Email     : " << _Email << endl;
        cout << "Phone     : " << _Phone << endl;
        cout << "Salary    : " << _Salary << endl;
        cout << "Department: " << _Department << endl;
        cout << "_______________________\n";
    }
};

int main()
{
    clsEmployee Employee1(1,"Ola", "Ali", "FullStack", "ola@gmail.com", "010023456", "100000", "Programming_USA");
    Employee1.Print();

    Employee1.SendEmail("Hi", "How Are You");
    Employee1.SendSMS("How Are You");

    system("pause>0");
    return 0;

}
