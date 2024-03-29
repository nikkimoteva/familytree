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
        Person* spouse;
        void displayAll () ;
        void displayChildren(Person* p) ;
        const void displaySiblings();
        const void childrenName();
        void displayCousins();
        void displayAncestors();
        void displayDescendants();
        vector<Person*> children;
        vector<Person*> siblings;
        Person (string name, int age, string sex, vector<Person*> children, vector<Person*> siblings,
                    Person* father=nullptr, Person* mother = nullptr, Person* spouse = nullptr)
        {
            this-> name = name;
            this-> age = age;
            this-> sex = sex;
            this->children = children;
            this->father = father;
            this-> mother = mother;
            this->spouse = spouse;
            this->siblings = siblings;
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
    
        Person* getSpouse(){
            return spouse;
        }

        Person* addSpouse(Person* spouse){
            this->spouse = spouse;
            spouse->spouse = this;
        }

        Person* getChild(Person* c){
            return c;
        }

        Person* addChild(Person* c){
            this->children.push_back(c);
            this->spouse->children.push_back(c);
        }

        Person* addSibling(Person* c){
            this->siblings.push_back(c);
            c->siblings.push_back(this);
        }

        vector<Person*> getSiblings(){
            return siblings;
        }
    
        vector<Person*> getChildren(){
            return children;
        }
};
