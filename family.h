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
        void displayAll () ;
        void displayChildren(Person* p) ;
        Person (string name, int age, string sex, vector<Person*> children, Person* father=nullptr, Person* mother = nullptr)
        {
            this-> name = name;
            this-> age = age;
            this-> sex = sex;
            this->children = children;
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
    
        Person* getFather(){
            return father;
        }

        Person* getMother(){
            return mother;
        }

        Person* getChild(Person* c){
            return c;
        }

        Person* addChild(Person* c){
            this->children.push_back(c);
        }

        void displayAll (vector<Person*> vec) const;
};
