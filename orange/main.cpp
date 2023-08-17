#include <iostream>

using namespace std;



class Person {
private:
    int id;
    string name;
    int age;
    string gender;

public:
    Person() {
        id = 0;
        name = "";
        age = 0;
        gender = "";
    }

    Person(int person_id, std::string person_name, int person_age, std::string person_gender) {
        id = person_id;
        name = person_name;
        age = person_age;
        gender = person_gender;
    }

    // Setters
    void set_id(int person_id) {
        id = person_id;
    }

    void set_name(std::string person_name) {
        name = person_name;
    }

    void set_age(int person_age) {
        age = person_age;
    }

    void set_gender(std::string person_gender) {
        gender = person_gender;
    }

    // Getters
    int get_id() const {
        return id;
    }

    std::string get_name() const {
        return name;
    }

    int get_age() const {
        return age;
    }

    std::string get_gender() const {
        return gender;
    }
};


class University
{
private:
    static University*  instancePtr;
    vector<Department> departments;
    vector<Student> students;
    vector<Professor> professors;
    vector<Course> courses;



public:

    // deleting copy constructor
    University(const University& obj)= delete;

    static University* getInstance()
    {
        if (instancePtr == NULL)
        {
            instancePtr = new University();

            // returning the instance pointer
            return instancePtr;
        }
        else
        {
            return instancePtr;
        }
    }
//department

    void add_department(string name,int capacity,double required_gpa)
    {
        Department dept(name, capacity, gpa);
        departments.push_back(dept)
    }

    bool update_dept(string name,double required_gpa)
    {

        for(int i ; i<departments.size(); i++)
        {
            if(departments[i].get_name()==name)
            {
                departments[i].set_required_gpa(required_gpa) ;
                return true;
            }

        }
        cout<<"invalid name";
        return false;
    }

    bool delete_dept(string name)
    {
        for(int i ; i<departments.size(); i++)
        {
            if(departments[i].get_name()==name)
            {
                departments.erase(departments.begin()+i) ;
                return true;
            }
        }
        cout<<"invalid name";
        return false;


    }



    // professor

    void add_prof(int id,string name,int age,string gender,string degree,double salary)
    {
        for (int x:Professor.id)
        {
            if (x==id )
            {
                cout<<"stop";
            }
            else
            {
                Professor prof( id, name, age, gender, degree, salary);
                professors.push_back(dept);
            }

        }

    }

    bool update_prof(int id,double salary)
    {

        for(int i ; i<professors.size(); i++)
        {
            if(int id,professors[i].get_id()==id)
            {
                professors[i].set_salary(salary) ;
                return true;
            }

        }
        cout<<"invalid id";
        return false;
    }

    bool delete_prof(int id)
    {
        for(int i ; i<professors.size(); i++)
        {
            if(professors[i].get_id()==id)
            {
                professors.erase(professors.begin()+i) ;
                return true;
            }
        }
        cout<<"invalid name";
        return false;
    }



};


int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
