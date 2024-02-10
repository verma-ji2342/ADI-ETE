#include <iostream>
using namespace std;

int lcm(int n1 , int n2)
{
    int max;
    max = (n1 > n2) ? n1 : n2;

    do
    {
        if (max % n1 == 0 && max % n2 == 0)
        {
            return max;
            break;
        }
        else
            ++max;
    } while (true);
}

int main(){
    cout<<lcm(12,18);
}