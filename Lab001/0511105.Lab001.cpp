/************************************************************
File name: Lab001.cpp
Student name: 
Student ID:

Practice Item: 
 Separate your ID number into four part

 


*************************************************************/


#include <iostream> 
#include <string>
//using namespace std;

int main() {
	std::string id;
	
	int data[10] = {};
	std::cout << "Enter your id = ";
	std::cin >> id ;
	int len = id.length();
	
	for(int i = 0; i< len; i++)
		data[id[i] - '0'] ++;
	for(int i = 0; i< 10; i++)
		std::cout <<"Number of "<< i << " = " << data[i]<<std::endl; 
	
	return 0;
}
