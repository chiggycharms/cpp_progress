#include <iostream>
using namespace std;
/* class teacher
{
    private:
    double salary;

    public:
    teacher(){
        cout<<"hi i am teahcer constructor\n";
    }
    string name;
    string dept;
    string subject;
    void changedept(string newdept)
    {
        dept = newdept;
    }
    double setsalary(double sal){
        salary=sal;
    }
    double getsalary(){
        cout<<salary;
    }
};
int main()
{
    teacher t1;
    t1.name = "sukhvir";
    t1.subject = "english";
    t1.dept = "cse";
    cout << t1.name << endl
         << t1.subject << endl
         << t1.dept << endl;
    t1.changedept("hotel management");
    cout << t1.dept<<endl;
    t1.setsalary(20000);
    t1.getsalary();
    return 0;
} */
class student
{
public:
    string name;
    double *cgpaptr;
    student(string name, double cgpa){
        cout<<"hi i am new student\n";
        this->name=name;
        cgpaptr=new double;
        *cgpaptr=cgpa;
    }
    student(student &obj)
    {
        this->name=obj.name;
        cgpaptr=new double;
        *cgpaptr=*obj.cgpaptr;
    }
    void getinfo(){
        cout<<"name = "<<name<<endl;
        cout<<"cgpa = "<<*cgpaptr<<endl;
    }
};
int main(){
    student s1("sukhvir",9.2);
    s1.getinfo();
    student s2(s1);
    *s2.cgpaptr=10;
    s2.name="tanya";
    s2.getinfo();

}