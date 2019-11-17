#include "family.h"


/**
 * Name: Nikki Motevaselolhagh
*/

// method used in displayAll, checks for null
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

// method used in displayAll
void Person::displayChildren (Person* c)
{
    c->displayAll();
}

// displays all the information of the family of the given person.
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

//Displays all siblings of a given person
const void Person::displaySiblings ()
{
    cout <<this->getName() <<"'s Siblings are: " << "\n";
    vector<Person*> sibs = this->getSiblings();
    for (Person* s: sibs){
        cout<< s->getName() << "\n";
    }
    cout << "\n\n";
}

// displays all the children of a given person
const void Person::childrenName()
{
    vector<Person*> childs = this->getChildren();
    for (int i = 0; i<childs.size(); i++){
        cout << childs[i]->getName() << "\n";
    }
}

// displays all the cousins of a given person
void Person::displayCousins()
{
    cout <<this->getName() << "'s cousins are: " << "\n";
    vector<Person*> auntUncle = this->getFather()->getSiblings();
    for (int i = 0; i < this->getMother()->getSiblings().size(); i++){
        auntUncle.push_back(this->getMother()->siblings[i]);
    }
    for (int i = 0; i < auntUncle.size(); i++){
        auntUncle[i]->childrenName();
    }
}
