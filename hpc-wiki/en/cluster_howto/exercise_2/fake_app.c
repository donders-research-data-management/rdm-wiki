#include <iostream>
#include <chrono>
#include <thread>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
using namespace std;
using namespace std::this_thread;
using namespace std::chrono;

/*
 * A fake application which takes one integer number as input argument,
 * and calculates the cube number of it (i.e. n^3). Before the result is 
 * returned, it also allocates memory and cpu time to mimic
 * the realistic of a data analysis application.
 *
 * On CentOS 6 (g++ 4.4.7), compile it with:
 *
 *     % g++ fake_app.c -std=c++0x -o fake_app -D_GLIBCXX_USE_NANOSLEEP
 *
 * On CentOS 7 (g++ 4.8.3), compile it with:
 *
 *     % g++ fake_app.c -std=c++11 -o fake_app
 * 
 * Run it with:
 *
 *     % ./fake_app 3
 *
 */
int main( int argc, char* args[] ) {

    char* buffer;
    size_t memsize = 512 * 1024 * 1024; // 512 MiB

    if ( argc != 2 ) {
        cerr << "usage: fake_app <input>" << endl;
        exit(EXIT_FAILURE); 
    } else {

        // memory allocation
        buffer = (char*) malloc(memsize);

        // generate a random seconds between 300 and 360
        srand(time(NULL));
        int t_run = rand() % 60 + 300;
        cout << "compute for " << t_run << " seconds" << endl;

        system_clock::time_point t_now = system_clock::now();
        system_clock::time_point t_end = t_now + seconds(t_run);

        // (re-)fill up the memory buffer with random character
        // for t_run seconds 
        while ( t_now < t_end ) {
    
            for (int i=0; i<memsize; i++ ) {
                buffer[i] = rand()%26 + 'a';
            }

            sleep_for(seconds(1));
            t_now = system_clock::now();
        }

        // calculate the cube number of the input argument
        long rslt = pow( atol(args[1]), 3 );
        cout << "result: " << rslt << endl;

        // free memory
        free(buffer);
    }

    return 0;
}
