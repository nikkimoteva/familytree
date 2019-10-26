#include <stdlib.h>
#include <iostream>
#include <vector>

class Person;
using namespace std;



class Person
{

    protected:
        string name;
        int age;
        string sex;
    public:

        Person (string name, int age, string sex)
        {
            this-> name = name;
            this-> age = age;
            this-> sex = sex;
        }

        const string getName ()
        {
            return name;
        }

        const int getAge ()
        {
            return age;
        }

        const string getSex ()
        {
            return sex;
        }

        void displayAll (vector<Person*> vec) const;
};