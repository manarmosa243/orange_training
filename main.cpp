#include <iostream>
#include <vector>
#include <string>
using namespace std;


class Course
{
private:
    string course_name;
    string course_code;
    int course_hours;
    vector<string> prerequisites;
    Professor professor;
    vector<Student> students;

public:
    Course()
    {
        course_name = "";
        course_code = "";
        course_hours = 0;
    }


    Course(string c_name, string c_code, int c_hours, const vector<string> &c_prerequisites,
           const Professor &c_professor, const vector<Student> &c_students)
    {
        course_name = c_name;
        course_code = c_code;
        course_hours = c_hours;
        prerequisites = c_prerequisites;
        professor = c_professor;
        students = c_students;
    }

    void set_course_name(string c_name)
    {
        course_name = c_name;
    }

    void set_course_code(string c_code)
    {
        course_code = c_code;
    }

    void set_course_hours(int c_hours)
    {
        course_hours = c_hours;
    }

    void set_prerequisites(const vector<string> &c_prerequisites)
    {
        prerequisites = c_prerequisites;
    }

    void set_professor(const Professor &c_professor)
    {
        professor = c_professor;
    }

    void set_students(const vector<Student> &c_students)
    {
        students = c_students;
    }

    string get_course_name() const
    {
        return course_name;
    }

    string get_course_code() const
    {
        return course_code;
    }

    int get_course_hours() const
    {
        return course_hours;
    }

    const vector<string>& get_prerequisites() const
    {
        return prerequisites;
    }

    const Professor& get_professor() const
    {
        return professor;
    }

    const vector<Student>& get_students() const
    {
        return students;
    }
};


class University
{
private:
    vector<Course>courses;


    string name;
    int age;
    static University *instancePtr;
    Uiversity() {}
public:
    University(const Uiversityi& obj) = delete;
    static University *getInstance()
    {
        if(instancePtr == NULL)
        {
            instancePtr = new University();
            return instancePtr;
        }
        else
        {
            return instancePtr;
        }
    }

    // add course
    void addCourseToVector(const string& course_name, const string& course_code,int course_hours,vector<string> &c_prerequisites,
                           const Professor &c_professor, const vector<Student> &c_students)
    {
        courses.push_back(Course(course_name, course_code,course_hours,prerequisites,professor,students));
    }
    // update course
    bool UpdateCourse(const string& course_name, const string& course_code,int course_hours)
    {

        for (Course courses : course_name)
        {
            if (courses.getCourse_code()==course_code )
            {
                courses.setCourse_hours(course_hours);
                return 0;
            }
            return true;
        }
        //remove course
        void removeCourse(vector<Course>& course_name, const string& course_code)
        {
            course_name.erase(remove_if(course_name.begin(), course_name.end(),
                                        [&course_code](const Course& courses)
            {
                return courses.getCourse_code() == course_code;
            }),
            course_name.end());
        }

        void setName(string name)
        {
            this->name = name;
        }
        void setAge(int age)
        {
            this->age = age;
        }

        string getName()
        {
            return name;
        }

        int getAge()
        {
            return age;
        }

        void print()
        {
            cout<<"Name: "<<name<<", age: "<<age<<endl;
        }
    };

    Uni* Uni::instancePtr = NULL;
    int main()
    {

        return 0;
    }

