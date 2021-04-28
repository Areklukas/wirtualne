#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class File
{
	public:
    ifstream plik;
    virtual ~File()
    { }
    File();
    ~File();
   	virtual void pow() = 0;
};
File::File()
{
    plik.open("ciagi.txt"); 
    if (!plik.good())
    {
        cerr << "Blad - pliku nie da sie otworzyc!\n";
        exit(1);
    }
}
File::~File()
{
    plik.close();
}
class Zadanie: public File
{
	public:
    virtual void pow()
    {
    	int liczba;
    	string s;
    	while(!plik1.eof())
		{
    		plik1>>liczba;
    		s = to_string(liczba);
    		string s1 = s.substr(0, s.length() / 2);
    		string s2 = s.substr(s.length() / 2);
    		if(s1==s2)
			{
        		cout<<liczba<<endl;
    		}
    	}
    }
};
int main()
{
	File * a = new Zadanie;
   	a->pow();
   	delete a;
};
