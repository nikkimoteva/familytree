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
        Person* father;
        Person* mother;
        void displayAll (vector<Person*> vec) const;
        Person (string name, int age, string sex, Person* father=nullptr, Person* mother = nullptr)
        {
            this-> name = name;
            this-> age = age;
            this-> sex = sex;
            this->father = father;
            this-> mother = mother;
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
