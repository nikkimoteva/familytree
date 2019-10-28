#include "family.h"


/**
 * Name: Nikki Motevaselolhagh
*/

//void d(Person* p){
//   cout<<"This is %s, with age %d and the sex is %s", p->getName(), p->getAge(), p->getSex();
//}


template <typename T>
string returning(T rel){
    if(rel == NULL){
        return "NULL";
    }
    else{
        return rel->getName();
    }
}


void Person::displayAll (vector<Person*> vec) const
{
    int size = 0;
    string father;
    string mother;
    for (Person* p : vec){
        size++;
    }
    //int size = sizeof(vec);
    cout<<size;
    cout  << "\nThe people in the system are...\n";
    for(int i = 0; i < size; i++)
    {
        cout << "here " << i << " \n";
        father = returning(vec[i]->getFather());
        mother = returning(vec[i]->getMother());
        cout << vec[i] -> getName () << " " << vec [i] -> getAge () <<  " " << vec [i] -> getSex ()
            << " " << mother << " " << father << "\n";
    }
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
