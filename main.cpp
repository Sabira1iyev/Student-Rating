#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Login{
    public:
    string name;
    string username;
    string password;
    Login(string n, string u, string pass):
    name(n),username(u),password(pass){}

};

class Teacher: public Login{
    private:
    string TeacherlessonName;
    public:
    Teacher(string n, string u, string p, string tLessN):
    Login(n,u,p),TeacherlessonName(tLessN){}
    
    string getTeacherlessonName(){
        return TeacherlessonName;
    }
    void Display(){
        cout << "Teacher's name: " << name << endl;
        cout << "Which Lesson: " << TeacherlessonName << endl;
    }
};

class Student: public Login{
    private:
        vector<pair<string, double>> grades;
        public:
        Student(string n, string u, string p):
            Login(n,u,p){}
};



int main(){
string username = "Sabir ALiyev";
string password = "12345678";

string usName;
string pass;

cout << "Enter username: ";
getline(cin, usName);
cout << "Enter password: ";
cin >> pass;

if(usName == username && pass == password){
    cout << "Success" << endl;
}
else{
    cout << "Wrong password, try again" << endl;
}
}