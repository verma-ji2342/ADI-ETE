#include <iostream>
#include <ctime>
using namespace std;
 
int main( )
 {
    
                 time_t ttime = time(0);
                 cout << "Number of seconds elapsed since January 1, 1990:" << ttime << endl;
                 tm *local_time = localtime(&ttime);
                 int y, m, d, h, min, s;
                 y =  1900 + local_time->tm_year ;
                 cout << "Year: "<<y<< endl;
                 m =  1 + local_time->tm_mon;
                 cout << "Month: "<<m<< endl;
                 d =  local_time->tm_mday;
                 cout << "Day: "<<d<< endl;
                 h =  1 + local_time->tm_hour ;
                 cout << "Time: "<<h<< ":";
                 min = 1 + local_time->tm_min;
                 cout <<min<< ":";
                 s = 1 + local_time->tm_sec; 
                 cout <<s<< endl;
                 return 0;
 }