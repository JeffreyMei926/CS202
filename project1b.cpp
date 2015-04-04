#include <iostream>
#include <fstream>
#include <ctime>
#include <stdlib.h>

using namespace std; 

const int MAX_CHAR  = 6;
const int MAX_LEN   = 6;
const int MAX_WIDTH = 3;

void readCharFile(char filename[10],char charArr[][2][6]);
void showMenu();
void configMachine();

int main(){
	
	char symbolArr[6][2][6];
	char filename[10] = "symbols";

	// Seed Time
	srand(time(NULL));
	int x = rand()%6;

	readCharFile(filename,symbolArr);

	return 0;
}


void readCharFile(char filename[10],char charArr[][2][6]){
	int i,j,k;
	ifstream fin;
	
	// open file
	fin.open(filename);
	
	// store values into the array
	for(i=0;i<6;i++){
		for(j=0;j<2;j++){
			fin >> charArr[i][j]; 
			cout << charArr[i][j];
			cout << '\t';
		}
		cout << '\n';
	}

	// close file
	fin.close();
}
void showMenu(){}
void configMachine(){}







