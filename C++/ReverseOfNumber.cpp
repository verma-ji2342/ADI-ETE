#include<iostream>
using namespace std;
class reverse
{
	private:
		int n,i;
	public:
		reverse()
		{
			cout<<"Enter Number: ";
			cin>>n;
			cout<<n<<endl;
		}
		friend void show(reverse);
};
void show(reverse r)
{
	 cout<<"Reverse of the number: ";
			for(r.i=r.n;r.i>0;r.i=r.i/10)
			{
				cout<<r.i%10;
			}
}
int main()
{
    reverse r;
    show(r);
}