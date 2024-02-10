//add program with class and function define outside the class//

// #include <iostream>
// using namespace std;

// class add {
//   private: 
//   int a,b;
//   public:
//   add(int x, int y){
//     a=x;
//     b=y;
//   }
//   void sum();
// };

// void add::sum(){
//     cout<<a+b;
//   }

// int main() 
// {
//   add A1(7,10);
//   A1.sum();
//   return 0;
// }

/////////////////////////////////////////////////////////////////////

//add program with class and function define within the class//

// #include <iostream>
// using namespace std;

// class add {
//   private: 
//   int a,b;
//   public:
//   add(int x, int y){
//     a=x;
//     b=y;
//   }
//   void sum(){
//     cout<<a+b;
//   }
// };


// int main() 
// {
//   add A1(7,10);
//   A1.sum();
//   return 0;
// }
//////////////////////////////////////////////////////////////

//add program //

// #include <iostream>
// using namespace std;
 
 
// int main() {
//   int a,b;
//   cin>>a>>b;
//   cout<<a+b;
//   return 0;
// }

/////////////////////////////////////////////////////////////////////////

//add function with class using friend function//

// #include <iostream>
// using namespace std;

// class add {
//   private: 
//   int a,b;
//   public:
//   add(int x, int y){
//     a=x;
//     b=y;
//   }
//   friend void sum(add);
// };

// void sum(add A){
//   cout<<"Sum of Variable "<<A.a+A.b;
// }

// int main() 
// {
//   add A1(7,10);
//   sum(A1);
//   return 0;
// }