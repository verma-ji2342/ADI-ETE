#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

struct Point{
    int x;
    int y;
    Point(int a, int b){
        x = a;
        y = b;
    }
};

bool mycomp(Point p1, Point p2){
    return p1.x < p2.x;
}

int main(){
    vector<Point> v = {{5,4},{9,6},{99,3}};
    auto it = max_element(v.begin(), v.end(),mycomp);
    cout<<(*it).x<<" "<<(*it).y<<endl;
    auto i = min_element(v.begin(),v.end(),mycomp);
    cout<<(*i).x<<" "<<(*i).y<<endl;
    return 0;
}