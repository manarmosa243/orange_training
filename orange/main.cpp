#include <iostream>

using namespace std;


class Student{
private:
     int level;
     double gpa;
public:
     Student(){
         level=0;
         gpa=0.0;
    }
    Student(int stud_level,double stud_gpa){
        level=stud_level;
        gpa=stud_gpa;
    }
    void set_level(int stud_level){
        level=stud_level;
    }
    void set_gpa(double stud_gpa){
        gpa=stud_gpa;
    }
    int get_level(){
        return level;
    }
    double get_gpa(){
        return gpa;
    }
};


class Professor{
private:
     String degree;
     double salary;
public:
     Professor(){
         degree=" ";
         salary=0.0;
    }
    Professor(string prof_degree,double prof_salary){
        degree=prof_degree;
        salary=prof_salary;
    }
    void set_degree(string prof_degree){
        degree=prof_degree;
    }
    void set_salary(double prof_salary){
        salary=prof_salary;
    }
    string get_degree(){
        return degree;
    }
    double get_salary(){
        return salary;
    }
};

 class University{
  private:
  vector<Department>departments;
  vector<Student>students;
  vector<professor>professors;
  vector<course>courses;
  static University*
  University()
  {
  }

  public:

  university(const University& obj)= delete;
  static University* getInstance()
  {
    if (instancePtr == NULL)
    {
      instancePtr = new University();
      return instancePtr;
    }
    else
    {
      return instancePtr;
    }
  }
  University:University ::instancePtr = NULL;

void add_student(int id,string name,int age,char gender,int level,double gpa ){
Student s(id,name,age,gender,level,gpa);
students .push_back(s);
}
bool ubdate_student(,int id,double gpa){
    bool flag=false;
for(int i=0;i<=students.size;i++){
    if(students[i].get(id)==id){
        students[i].set_gpa(gpa);
        return true;
        break;
    }
}
    if(flag==false){
        cout<<"student id not found /n";
        return false;
    }

}
bool delete_student(int id){
for(int i=0;i<=students.size;i++){
    if(students[i].get(id)==id){
        students.erase(students.begin()+i);
        return true;
    }
    if(flag==false){
        cout<<"student id not found /n";
        return false;
    }
}
}
};



int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
