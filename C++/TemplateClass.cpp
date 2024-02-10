#include <iostream>
#include <bits/stdc++.h>
using namespace std;

template <class T>
class Arithametic{
    private:
    T a;
    T b;
    public:
    Arithametic(T a, T b);
    T add();
    T sub();
};

template <class T>
Arithametic<T>::Arithametic(T a, T b){
    this->a = a;
    this->b = b;
}

template <class T>
T Arithametic<T> :: add(){
    T c;
    c = a+b;
    return c;
}

template<class T>
T Arithametic<T>::sub(){
    T c;
    c = a-b;
    return c;
}

int main(){
    Arithametic<int> ar(10,5);
    cout<<ar.add()<<" "<<ar.sub()<<endl;
    Arithametic<float>ar1(1.5,3.4);
    cout<<ar1.add()<<" "<<ar1.sub()<<endl;
    Arithametic<int> ar2(10,5.5);
    cout<<ar2.add()<<" "<<ar2.sub();
}