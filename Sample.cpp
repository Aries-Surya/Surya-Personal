#include <iostream>
using namespace std;

class AbstractMethod{
    virtual void askForJob();//abstract method
};

class student{
    private: //encapsulation
    int id;
    string name;
    int age;
    string grade;

    public:
    void setId(int id) { this->id = id; }
    void setName(string name) { this->name = name; }
    void setAge(int age) { this->age = age; }
    void setGrade(string grade) { this->grade = grade; }
    int getId() { return id; }
    string getName() { return name; }
    int getAge() { return age; }
    string getGrade() { return grade; }

    void display(){ //method
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Grade: " << grade << endl;
        cout << endl;
    }
    
    void askForJob(){
        if(grade == "A"){
            cout << "You are eligible for job" << endl;
        }else{
            cout << "You are not eligible for job" << endl;
        }
    }
    student(int Id, string Name, int Age, string Grade){ // Constructor
        id = Id;
        name = Name;
        age = Age;
        grade = Grade;
    }
    virtual void task(){
        cout << name << " is working as student" << endl;
    }
};

class developer:public student{ //Inheritance
    public:
    string devLang;
    developer(int Id, string Name, int Age, string Grade, string devLang):student(Id,Name,Age,Grade){
        this->devLang = devLang;
    }
    void display(){
        std::cout << getName() << " is a developer and he knows " << devLang << std::endl;
    }
    void task(){
        cout << getName() << " is working as developer" << endl;
    }

};

class tester:public student{ //Inheritance
    public:
    string test;
    tester(int Id, string Name, int Age, string Grade, string test):student(Id,Name,Age,Grade){
        this->test = test;
    }
    void display(){
        std::cout << getName() << " is a tester and he knows " << test << std::endl;
    }
    void task(){
        cout << getName() << " is working as tester" << endl;
    }

};

int main() {
    student Surya(1,"Surya",20,"A");//example of constructor
    Surya.display();

    Surya.askForJob(); //example of abstract method
    std::cout<<std::endl;

    Surya.setName("Surya Prakash G");//example of encapsulation
    std::cout << "Name is " << Surya.getName() << std::endl;
    std::cout << std::endl;

    developer Dinesh = developer(1,"Dinesh",22,"A","C++"); //example of inheritance
    Dinesh.display();
    Dinesh.askForJob();

    tester prakash = tester(2,"Prakash",22,"B","Selenium");
    prakash.display();
    prakash.askForJob();

    std::cout<<std::endl;//example of polymorphism
    student *d = &Dinesh;
    student *s = &Surya;
    student *p = &prakash;
    s->task();
    p->task();
    d->task();

    return 0;
}