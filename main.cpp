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
        password = "";
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
        else{
            return false;
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
     void givePointStudent(){
        char y = 'Y', x = 'X';
        char answer;
        string stuName;
        double addScore;
        cout << "Do you want a give point to students? " << endl;
        cin >> answer;
         switch(answer){
            case 'Y' : 
            case 'y': cout << "Which student do you want to give points? ";
                        cin >> stuName;
                      cout << "How many points do you want to add? ";
                        cin >>addScore;
                    ifstream file("students.txt");
                    vector<Student>students;
                
                    string n, p;
                    double sc;


       }
     }
};

class Student: public Login{
    private:
        double score;
        vector<pair<string, double>> grades;
        public:
        Student(string n, string p,double sc):
            Login(n,p), score(sc){}
        
            void Display()override{
                cout << "Student's name: " << name << endl;
             }
};



int main(){
    string username, password;
    double score;
    cout << "enter username: ";
    cin >> username;
    cout << "enter your password: ";
    cin >> password;

    ifstream tfile("teachers.txt");
    ifstream sfile("students.txt");

    string n,p,lesson;
    bool found = false;

    while(tfile >> n >> p >> lesson){
        if(n==username && p == password){
            Teacher t(n,p,lesson);
            cout << "Hello teacher " << t.name << endl;
            t.Display();
            t.givePointStudent();
            found =true;
            break;
        }
    }
    if(!found){
        while(sfile >> n >> p >> score){
            if(n == username && p == password){
                Student s(n,p, score);
                cout << "HI! user: " << s.name << endl;
                s.Display();
                found=true;
                break;
            }
        }
    } 
    if(!found){
        cout << "Username or password incorrect! Try again!" << endl;
    
        tfile.close();
        sfile.close();
    }

    

}