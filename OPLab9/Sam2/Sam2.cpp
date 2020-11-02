#include <stdio.h>
#include <windows.h> 

int main() { 
	int n;
	do { 
	double seconds; 
	printf( "How many seconds? \n" ); 
	scanf_s( "%lf" , &seconds); 
	Sleep(seconds * 1000); 
	Beep(750, 1000); 
	printf( "Continue? 1 - yes, 2 - no\n" ); 
	scanf_s( "%d" , &n); 
	} while (n != 2); 
}