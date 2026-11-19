/* 
 * Lab         : 01  -  T1
 * Name        : Sardar Ali Raza
 * Roll No     : 26-SE-02
 * Date        : 19-11-2026
 * Purpose     : Fixing the bugs
 */
#include<iostream>
using namespace std; // BUG 1: (;)semicolon missing after std //

int main()
{
	cout<<"Welcome to the lab!"<<endl; //BUG 2: (;) semicolon or statement terminator missing after endl//
	cout<<"Today we learn \"C++\"."<<endl; //BUG 3: cout had a capital C instead of lowercase c //
	cout<<"Files are in C:\\Lab01"<<endl; //BUG 4: Double backslash escape sequence is missing but still it compiles //
	cout<<"Bye!"<<endl; //BUG 5: " inverted comma is missing after Bye! //
	return 0;
}
