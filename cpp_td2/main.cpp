#include <iostream>

using namespace std;

void exo_1();
void exo_2();
void exo_3();
void exo_4();
void exo_5();
void exo_6();
void exo_7();
void exo_8();

int do_something_ex2(string s);
string* do_something_ex3(string s);
string* do_something_ex4(string* s);
string* do_something_ex5(string& s);
string do_something_ex6(string& s);
string& do_something_ex7(string s);
string do_something_ex8(string** s);

class B{

};
class A{
    public:
        B* b;
};

int main(){

}

void exo_1(){
    string s = "toto";
    cout << s << endl; //"toto" 
    string* pt_s;
    cout << (*pt_s) << endl; //Valeur aléatoire 
    cout << pt_s << endl; //Valeur de pts
    cout << &pt_s << endl; //Adresse de pts
    pt_s = &s;
    cout << pt_s << endl;// Adresse de s
    cout << &pt_s << endl;//Adresse de pts
    cout << (*pt_s) << endl; //"toto"
    return;
    
}
int do_something_ex2(string s){
    int i = 06;
    s = s + '!';
    return i;
}

void exo_2(){
    string s = "yeah ";
    cout << s << endl; //"yeah"
    do_something_ex2(s);
    cout << s << endl; //"yeah"
    //Compilation error cout << i << endl; 
    int j = 29;
    j = do_something_ex2(s);
    cout << s << endl; //"yeah"
    cout << j << endl; // 6
}

string* do_something_ex3(string s){
    string* pt_s = &s;
    s = s + '!';
    return pt_s; // Valeur d'une adresse locale
}

void exo_3(){
    string s = "yeah ";
    cout << s << endl;//"yeah"
    do_something_ex3(s);
    cout << s << endl; //"yeah"
    string* pt_s = do_something_ex3(s);
    cout << pt_s << endl; //Valeur aléatoire
    cout << (*pt_s) << endl; // Valeur aléatoire
}

string* do_something_ex4(string* s){
    string* pt_s = s;
    (*s) = (*s) + '!';
    return pt_s;
}

void exo_4(){
    string s = "yeah ";
    cout << s << endl;//"yeah"
    do_something_ex4(&s);
    cout << s << endl;//"yeah!"
    string* pt_s = do_something_ex4(&s);
    cout << (*pt_s) << endl;//"yeah!!"
}

string* do_something_ex5(string& s){
    string* pt_s = &s;
    s = s + '!';
    return pt_s;
}

void exo_5(){
    string s = "yeah ";
    cout << s << endl;//"yeah"
    do_something_ex5(s);
    cout << s << endl;//"yeah!"
    string* pt_s = do_something_ex5(s);
    cout << (*pt_s) << endl;//"yeah!!"
}

string do_something_ex6(string& s){
    s = s + '!';
    return s;
}

void exo_6(){
    string s = "yeah ";
    cout << s << endl;//"yeah"
    do_something_ex6(s);
    cout << s << endl;//"yeah!"
    string s2 = do_something_ex6(s);
    cout << s2 << endl;//"yeah!!"
    cout << &s  << endl;//Adresse de s
    cout << &s2 << endl;//Adresse s2
}

string& do_something_ex7(string s){
    s = s + '!';
    return s;
}

void exo_7(){
    string s = "yeah ";
    cout << s << endl;//"yeah"
    do_something_ex7(s);
    cout << s << endl;//"yeah"
    string s2 = do_something_ex7(s);
    cout << s2 << endl;//"yeah"
    cout << &s  << endl;//Adresse de s
    cout << &s2 << endl;//Adresse de s2
}

string do_something_ex8(string** s){
    string* s2 = *s;
    **s = *s2 + '!';
    return **s;
}

void exo_8(){
    string s = "yeah ";
    cout << s << endl; //"yeah"
    //Compilation error do_something_ex8(&&s); && uniquement sur une lvalue
    //lvalue ce qui est à gauche d'une affection
    cout << s << endl;
    string* s0 = &s;
    string s2 = do_something_ex8(&s0);
    cout << s2 << endl;
    cout << &s  << endl;
    cout << &s2 << endl;
}