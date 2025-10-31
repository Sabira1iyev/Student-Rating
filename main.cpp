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

};




int main(){
string username = "Sabir ALiyev";
int password = 12345678;

string usName;
int pass;

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