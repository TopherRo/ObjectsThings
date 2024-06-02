
// g++ struct_union_enum.cpp -o struct_union_enum

#include <iostream>
#include <cmath>
#include <cstdlib>
#include <vector>
using std::vector;
#include <string>
using std::string;

struct Address  {
    string name;
    string m_name;
    int number;
    string street;
    char state[2];
    char zip[5];
    int quirk;
    int quark;
    bool parity1: 1;  // Fields take up 1 bit
    bool parity2: 1;
    bool parity3: 1;
    bool parity4: 1;

    Address(const string& n, const string& m_n, int nu, const string& s, const string& st, int z, int qi, int qu, bool p1, bool p2, bool p3, bool p4);
    // Memebr Function constructor
};

Address::Address(const string& n, const string& m_n, int nu, const string& s, const string& st, int z, int qi, int qu, bool p1, bool p2, bool p3, bool p4) 
: name{n}, m_name(m_n), number{nu}, street{s}, quirk(qi), quark(qu), parity1(p1), parity2(p2), parity3(p3), parity4(p4)  {

state[0] = st[0];
state[1] = st[1];

}



void print_Address(const Address* p)
{
    std::cout << p->name << "\n" << p << "\n";
}

void print_Address2(const Address& r)
{
    std::cout << r.street << "\n" << &r << "\n";
}

void print_Address3(Address q)
{
    std::cout << q.street << "\n" << &q << "\n";
}

/*
enum Type {str, num};

struct Entry    {

    char* name;
    Type t;
    char* s;
    int i;

}
*/

int main() 
{
    Address CR = {"Chris R", "Young", 61, "South St", "CA", 90013, 1, 1, 0, 0, 0, 0};
    //CR.name = "Chris Rodenchuk";
    //CR.street = "2nd Ave";
    //CR.state[0] = 'W';
    //CR.state[1] = 'A';
    
    Address* pA = &CR;          // Define a pointer to the struct CR

    Address& rA = CR;           // Define a reference to the struct CR
    
    print_Address(pA);

    print_Address2(rA);

    print_Address3(CR);

    std::cout << CR.street << "\n" << &CR << "\n";

    std::cout << sizeof(CR) << "\n" << &CR.state << "\n";

    std::cout << sizeof(string) << "\n";




}
