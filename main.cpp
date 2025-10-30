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
    name(n),username(n),password(pass){}

};

class Teacher: public Login{
    private:
    string TeacherlessonName;
    public:
    Teacher(string n, string u, string p, string tLessN):
    Login(n,u,p),TeacherlessonName(tLessN){}
};



int main(){

}