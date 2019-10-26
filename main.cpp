//#include "family.h"
#include "family.cpp"
#include <stdlib.h>
#include <string>
#include <iostream>
#include <vector>
//#include "family.cpp"

using namespace std;

/*int main(){
    string MALE = "male";
    string FEMALE = "female";
    Person* nikki = new Person("female", 20, "nikki");
    display(nikki);
    return 0;
}*/

int main()
{
    vector<Person*> vec;
    Person* abi = new Person("Abraham", 1, "M");
    Person* sarah = new Person ("Sarah", 2, "F"); 
    vec.push_back(abi);
    vec.push_back(sarah);
    displayAll(vec);
    //delete vec[0];
    //displayAll(vec);
    /*
    vec [2] = new Female ("Keturah", 3, "F");
    vec [3] = new Female ("Hager", 4, "F");
    vec [4] = new Male ("Issac", 5, "M") ;
    vec [5] = new Male ("Jokshan", 6, "M");
    vec [6] = new Male ("Midian", 7, "M");
    vec [7] = new Male ("Ishmael", 8, "M");
    vec [8] = new Female ("Rebekah", 9, "F");
    vec [9] = new Male ("Esau", 10, "M"); */

	cout << "Press enter (or Ctrl-C) to quit ... " << endl;
	cin.get();
	
	// Clean up the heap to avoid memory leaks in your program and memory starvation
	// in the operating system due to your program not freeing the memory it allocated.
	// Just call delete on each vecay member.
    int size = 0;
    for (Person* p : vec){
        size++;
    }
	for (int i = 0; i < size; i++)
		vec.pop_back();
    return 0;
}