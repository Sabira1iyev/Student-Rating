#include <iostream>
#include <string>
#include <vector>
#include <fstream>
using namespace std;

class Login{
    public:
    string name;
     string password;
     Login(){
        name = "user12345";
        password = "0";
     }
    Login(string n, string pass):
    name(n),password(pass){}
    
    virtual void Display(){
        cout << "User: " << name << endl;
    }
    bool controlLogin(string n, string p){
        if(n == name && p == password){
            return true;
        }
    }
};

class Teacher: public Login{
    private:
    string TeacherlessonName;
    public:
    Teacher(string n, string p, string tLessN):
    Login(n,p),TeacherlessonName(tLessN){}
    
    string getTeacherlessonName(){
        return TeacherlessonName;
    }
    void Display()override{
        cout << "Teacher's name: " << name << endl;
        cout << "Which Lesson: " << TeacherlessonName << endl;
    }
};

class Student: public Login{
    private:
        vector<pair<string, double>> grades;
        public:
        Student(string n, string p):
            Login(n,p){}
        
            void Display()override{
                cout << "Student's name: " << name << endl;
             }
};



int main(){
Login L;
string username = "Sabir ALiyev";
string password = "12345678";

string usName;
string pass;

cout << "Enter username: ";
getline(cin, usName);
cout << "Enter password: ";
cin >> pass;

L.controlLogin(usName,pass);

}