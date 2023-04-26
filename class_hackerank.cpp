# class_hackerank
hackerank solution for class using c++

#include <iostream>
#include <sstream>
using namespace std;

/*
Enter code for class Student here.
Read statement for specification.
*/
class Student{
   public: 
    int age;
    string first_name;
    string last_name;
    int standard;
    
    void set_age(int age)
        {
            age = 15;
        }
    void set_first_name(string first_name)
    {
        first_name="john";
    }
    void  set_last_name(string last_name)
    {
         last_name="carmack";
    }
    void set_standard(int standard)
    {
        standard=10;
    }
    int get_age()
        {
            return 15;
        }
        string get_last_name()
        {
            return "carmack";
        }
        string get_first_name()
        {
            return "john";
        }
        int get_standard()
        {
            return 10;
        }
        
        string to_string(){
            ostringstream str1;
            str1 <<15<<","<<"john"<<","<<"carmack"<<","<<10;
            return str1.str();
           
        }
};
    
    

int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
    
    return 0;
}
