#include "person.h"


std::vector<Person>& Person::marry(const Person& other){
    this.partner=&other;
    Person child = new Person{};
    std::vector<Person> childs;
    childs.push_back(child);
    return childs;
}

void Person::setParents( Person& father, Person& mother){

    this->parents[0]=father;
    this->parents[1]=mother;
}