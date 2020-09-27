#ifndef PERSON_H
#define PERSON_H
#include <iostream>
#include <vector>
#include <array>

class Person{

    public:
        enum Gender { MALE, FEMALE, NONBINARY};
    private:
        std::string name;
        const Person::Gender gender;
        Person* partner=nullptr;
        std::array<Person,2> parents;
    
    public:
        Person(std::string str="", 
        Person::Gender gender=Person::Gender::NONBINARY)
        :name(str),gender(gender){}

        std::vector<Person>& marry(const Person& other);
        void divorce(){partner=nullptr;}
        std::string getName() const{return name;}
        void setParents(const Person& father, const Person& mother);
    

};
/*
std::ostream& operator<<(std::ostream& os, const Person& p){
    os<<p.getName();
    return os;

}*/
#endif