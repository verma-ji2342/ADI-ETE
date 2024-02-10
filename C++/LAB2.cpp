// #include <iostream>
// using namespace std;

// class fact{
//   int f;
//   public :
//   void getdata(int x){
//     f=x;
//   }
//   int fct(){
//     int result = 1;
//     for (int i=1 ; i<=f ; i++){
//       result =  result * i;
//     }
//     return result;
//   }
// };

// int main() 
// {
//   fact F1;
//   F1.getdata(5);
//   cout<<F1.fct();
//   return 0;
// }


#include <iostream>
using namespace std;

class sum {
  int a,b;
  public:
  sum(int , int );
  // {  // yaha pr parameter constructor ne kaam kiya
  //   a=x;
  //   b=y;
  // }
  void add(){
    int c = a+b;
      cout<<"sum of two number: "<<c<<endl;
  }
  
  ~sum(){
    cout<<"destructor is called :)"<<endl;
  }

};

sum::sum(int x, int y){
  a=x;
  b=y;
  cout<<"constructor is called:)"<<endl;
}

int main() 
{
  sum S1(10,12);
  S1.add();
  sum S2(S1);  // copy consstructor ne kam kiya hai apna 
  S2.add();
  return 0;
}


// #include <iostream>
// using namespace std;

// class ABCD {
//   private:
//   int age;
//   public:
//   ABCD(){
//     age=18;
//   }
//   void showdata(char ch[]){
//     cout<<"name of condidate is: "<<ch<<endl;
//   cout<<"age of condidate is: "<<age<<endl;
//   }
// };
// int main() 
// {
//   ABCD obj;
//   obj.showdata("Pranjal");
//   return 0;
// }