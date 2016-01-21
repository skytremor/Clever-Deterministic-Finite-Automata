#include <iostream>

using namespace std;


string dfa(string binary)
{
	int i = binary.length() - 1;
	
	state1:
		if (i < 0)
		{
			return "reject";
		}
		if (binary[i] == '1')
		{
			i--;
			goto state0;
		}else{
			i--;
			goto state2;
		}
	state0:
		if (i < 0)
		{
			return "accept";
		}
		if (binary[i] == '1')
		{
			i--;
			goto state1;
		}else{
			i--;
			goto state0;
		}
	state2:
		if (i < 0)
		{
			return "reject";
		}
		if (binary[i] == '1')
		{
			i--;
			goto state2;
		}else{
			i--;
			goto state1;
		}
}

int main() 
{	
	cout << dfa("100") << endl;	  //4 mod 1
	cout << dfa("111") << endl;	  //7 mod 1
	cout << dfa("1010") << endl;  //10 mod 1
	cout << dfa("1101") << endl;  //13 mod 1
	cout << dfa("10000") << endl; //16 mod 1
	cout << dfa("10011") << endl; //19 mod 1
	cout << dfa("10110") << endl; //22 mod 1
	cout << dfa("11001") << endl; //25 mod 1

	return 0;
}
	