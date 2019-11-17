#include "family.cpp"
#include <stdlib.h>
#include <string>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    Person* emily = new Person ("emily", 75, "F", vector<Person*>(), vector<Person*>(), NULL, NULL);
    Person* richard = new Person ("richard", 78, "M", vector<Person*>(), vector<Person*>(), NULL, NULL);
    emily->addSpouse(richard);

    Person* joey = new Person("joey", 49, "M", vector<Person*>(), vector<Person*>(), NULL, NULL);
    Person* rachel = new Person ("rachel", 46, "F", vector<Person*>(), vector<Person*>(), richard, emily);
    joey->addSpouse(rachel);
    rachel->addSpouse(joey);

    Person* nikki = new Person ("nikki", 20, "F", vector<Person*>(), vector<Person*>(), joey, rachel);
    Person* lily = new Person ("Lily", 14, "F", vector<Person*>(), vector<Person*>(), joey, rachel);

    Person* ross = new Person ("ross", 45, "M", vector<Person*>(), vector<Person*>(), NULL, NULL);
    Person* sara = new Person ("sara", 43, "F", vector<Person*>(), vector<Person*>(), NULL, NULL);
    Person* jake = new Person ("jake", 6, "M", vector<Person*>(), vector<Person*>(), ross, sara);
    Person* heather = new Person ("heather", 4, "F", vector<Person*>(), vector<Person*>(), ross, sara);

    Person* luke = new Person ("luke", 52, "M", vector<Person*>(), vector<Person*>(), NULL, NULL);
    Person* lorelai = new Person ("lorelai", 50, "F", vector<Person*>(), vector<Person*>(), richard, emily);
    Person* collin = new Person ("collin", 22, "M", vector<Person*>(), vector<Person*>(), luke, lorelai);
    Person* sam = new Person ("sam", 15, "M", vector<Person*>(), vector<Person*>(), luke, lorelai);
    
    joey->addSibling(ross);
    rachel->addSibling(lorelai);
    
    ross->addSpouse(sara);
    luke->addSpouse(lorelai);

    emily->addChild(lorelai);
    emily->addChild(rachel);

    joey->addChild(nikki);
    joey->addChild(lily);

    luke->addChild(collin);
    luke->addChild(sam);

    ross->addChild(jake);
    ross->addChild(heather);

    jake->addSibling(heather);
    nikki->addSibling(lily);
    collin->addSibling(sam);
    
    joey->displayAll();
    lorelai->displayAll();
    sara->displayAll();

    nikki->displaySiblings();
    nikki->displayCousins();
    cout << "\n";
    nikki->displayAncestors();

    cout << "\n";
    emily->displayDescendants();
	
    cout << "Press enter (or Ctrl-C) to quit ... " << endl;
    cin.get();
    return 0;
}
