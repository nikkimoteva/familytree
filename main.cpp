#include "family.cpp"
#include <stdlib.h>
#include <string>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    Person* shahram = new Person("shahram", 49, "M", vector<Person*>(), vector<Person*>(), NULL, NULL);
    Person* behazin = new Person ("behazin", 46, "F", vector<Person*>(), vector<Person*>(), NULL, NULL);
	
    shahram->addSpouse(behazin);
    behazin->addSpouse(shahram);
	
    Person* nikki = new Person ("nikki", 20, "F", vector<Person*>(), vector<Person*>(), shahram, behazin);
    Person* lily = new Person ("Lily", 14, "F", vector<Person*>(), vector<Person*>(), shahram, behazin);
    Person* amin = new Person ("amin", 4, "M", vector<Person*>(), vector<Person*>(), shahram, behazin);

    shahram->addChild(nikki);
    shahram->addChild(lily);
    shahram->addChild(amin);

    behazin->addChild(nikki);
    behazin->addChild(lily);
    behazin->addChild(amin);
    
    shahram->displayAll();
    behazin->displayAll();

    nikki->addSibling(lily);
    nikki->addSibling(amin);
    nikki->displaySiblings();
	
    cout << "Press enter (or Ctrl-C) to quit ... " << endl;
    cin.get();
    return 0;
}
