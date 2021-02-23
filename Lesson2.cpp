#include <iostream>
#include <cstdlib>


int main (void){
//Task1
{
	char c = 'A';
	int i = 666;
	unsigned char b = 'B';
	uint k = 777;
	short int d = 255;;
	unsigned short int s = 255;
	long int l = 100 000;
	unsigned long int L = 2000000;
	short int T = 255;
	short unsigned int R = 789;
	long long int O = 789159;
	float price = 3.3;
	double fix_price = 100.75689;
	long double freaks = 12345.156789;
}

// Task2
{
	enum {cross = 1, nol = 2} Gam1, Gam2;


//Task3

	int Steps [2];
	Gam1 = cross;
	Gam2 = nol;
	Steps [0] = Gam1;
    Steps [1] = Gam2;
}
//Task4
{
    typedef struct  {
		const int str;
		const int col;
	    int** sign;	
	} Field;
	Field F;
	F.str = 15;
	F.col = 10;
    F.Sign = (int**) malloc (sizeof(int**)*F.col);
	for (int i = 0; i < F.str; i++)
		F.Sign[i] = (int*) calloc (F.col, sizeof(int)); 
}
	
//Task5
{
	union Y {
	int i;
	char c;
	float f;
	};
	union Y y;
	typedef struct {
		unsigned char i : 1;
        unsigned char c : 1;		
		unsigned char f : 1;
	} B;
	B b;
	y.c = 'A';
	b.i = 0;
	b.c = 1;
	b.f = 0;
	printf ("%d %d %d %c", b.i, b.c, b.f, y.c);
}
    return 0;
}