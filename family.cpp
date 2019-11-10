#include "family.h"


/**
 * Name: Nikki Motevaselolhagh
*/

//void d(Person* p){
//   cout<<"This is %s, with age %d and the sex is %s", p->getName(), p->getAge(), p->getSex();
//}


//template <typename T>
string returning(Person* rel) 
{
    if(rel == NULL){
        return "N/A";
    }
    else{
        return rel->getName();
    }
}

void Person::displayAll () 
{
    int size = 0;
    string father;
    string mother;
    string spouse;
    vector<string> childre;
    father = returning(this->getFather());
    mother = returning(this->getMother());
    spouse = returning(this->getSpouse());
    for (Person* c: this->children){
        childre.push_back(returning(c));
    }
    cout << this -> getName () << ", " << this -> getAge () <<  ", " << this -> getSex ()
        << ", mother: " << mother << ", father: " << father << ", Spouse: " << spouse << "\n" << "children: " ;
    for (int i = 0; i < childre.size(); i++) {cout<<childre[i] << ", ";}
    cout << "\n\n";
    for (Person* c: this->children){
        displayChildren(this->getChild(c));
    }
}

void Person::displayChildren (Person* c)
{
    c->displayAll();
}


const void Person::displaySiblings ()
{
    cout <<this->getName() <<"'s Siblings are: " << "\n";
    vector<Person*> sibs = this->getSiblings();
    for (Person* s: sibs){
        cout<< s->getName() << "\n";
    }
    cout << "\n\n";
}
