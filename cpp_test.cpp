#include <iostream>
#include <String>

using namespace std;


class Example
{
	protected:
		string name = "Gulag";
		
	public:
	    void print_name()
	    {
		    cout << name << endl;
	    }
};


int main()
{
	Example e;
	cout << "Example" << endl;
	e.print_name();
	return 0;
}

