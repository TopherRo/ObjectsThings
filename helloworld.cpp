#include <iostream>

using std::cout;
using std::cin;
using std::endl;

#include <vector>
#include <string>
using std::vector;
using std::string;

#include <cmath>
#include <cstdlib>

#include <chrono>
using namespace std::chrono;

#include "time1.h"

//using namespace std;

double dBm_to_mW( double );    // function prototype, returns the power in mW
double mW_to_dBm( double );    // returns the power in dBm
unsigned long case_fibonacci( unsigned long );
unsigned long if_fibonacci( unsigned long );

int main()
{
    vector<string> msg {"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};
    for (const string& word : msg)
    {
        cout << word << " ";
    }
    cout << endl;

    /* initialize the rand seed */
    srand(1618);

    for ( int counter = 1; counter <= 20; ++counter)
        cout <<  rand() % 30 << " ";

    cout << endl;
    cout << dBm_to_mW(3.0) << endl;
    cout << dBm_to_mW(6.0) << endl;
    cout << mW_to_dBm(2.0) << endl;

    auto start1 = high_resolution_clock::now();
    cout << case_fibonacci(35) << endl;
    auto stop1 = high_resolution_clock::now();
    auto duration1 = duration_cast<microseconds>(stop1 - start1);
    cout << duration1.count() << endl;

    auto start2 = high_resolution_clock::now();
    cout << if_fibonacci(35) << endl;
    auto stop2 = high_resolution_clock::now();
    auto duration2 = duration_cast<microseconds>(stop2 - start2);
    cout << duration2.count() << endl;

    Time t;
    t.printTime();
    cout << endl;
    t.setTime( 10 , 15 , 80 );
    t.printTime();
    cout << endl;
}

double dBm_to_mW( double x )  
{
    static int counter;
    cout << counter << endl;
    counter++;
    
    return pow( 10.0 , x / 10.0 );
}

double mW_to_dBm( double x )  
{
    return 10.0*log10( x );
}

unsigned long if_fibonacci( unsigned long number)
{
    if (number == 0 || number == 1 )
    {
        return number;
    }
    else
    {
        return if_fibonacci( number - 1 ) + if_fibonacci( number - 2 );
    }

}

unsigned long case_fibonacci( unsigned long number)
{
    switch ( number )   {
        case 0:
            return number;
            break;
        case 1:
            return number;
            break;
        default:
            return case_fibonacci( number - 1 ) + case_fibonacci( number - 2 );
    }
}