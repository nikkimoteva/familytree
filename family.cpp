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
    father = returning(this->getFather());
    mother = returning(this->getMother());
    cout << this -> getName () << " " << this -> getAge () <<  " " << this -> getSex ()
        << " " << mother << " " << father << "\n";
    for (Person* c: this->children){
        displayChildren(this->getChild(c));
}

void Person::displayChildren (Person* c)
{
    c->displayAll();
}




/**
 * deletes the person
 
Person::~Person(){
     Person.clear();
}*/

/**
 * remove the father from the list of children of prev father and 
 * add it's children to it and
 * return true if the action was done successfully
 * 
 * @param the father object, NULL is allowed
 */
/**bool Person::setFather(Person*){
    Person->father = this;
    Person* gDad = this->father;
    gDad->removeChild(father);
    for (Person* c: father->children){
        dad->addChild(c);
    }
    return true;
};

void Person(Sex sex){
    sex == MALE?"male":"female";
}*/
