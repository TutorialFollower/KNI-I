#pragma once

#include<iostream>
#include<string>
using namespace std;

//Data Types
typedef int INT;
typedef double INT32;
typedef long INT64;
typedef char CHAR;
typedef string STRING;

//Function Placeholder
string whileExp;
string ifExp;
string funcationParams;

//It's bad practice use macros but I dont know any other way lol
#define WHILE(whileExp) while(whileExp)
#define REPEAT(i,N) for(int (i) = 0; (i) < (N); ++(i))
#define IF(ifExp) if(ifExp)

//Print message to console
int LOG(string message) {
	cout << message;
	return 0;
}


