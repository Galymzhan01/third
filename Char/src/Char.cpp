//============================================================================
// Name        : Char.cpp
// Author      : Galymzhan
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	char text[] = "hello";
	/*for(int i = (sizeof(text) - 1); i >= 0; i -= 1){
		cout << text[i] << flush;
	} */
	int san = (sizeof(text)-2);
	char *pStart = text[0];
	char *pEnd = text[san];
	while(pStart < pEnd){

		*pStart = *pEnd
		*pEnd
	}
	return 0;
}
