#include <stdio.h>
#define  NAME_LENGTH 10
#define TABLE_SIZE 100
#define UNITS_NUMBER 10

struct unit
{
	int x;
	float y;
	double z;
	short int a;
	long b;
	union
	{
		char name [NAME_LENGTH];
		int id;
		short int sid;
	}identifier;
};

int main(int argc, char *argb[])
{
	int table [TABLE_SIZE];
	struct unit data [UNITS_NUMBER];
	
	printf("%d\n", sizeof(struct unit));
	printf("%d\n", sizeof(table));
	printf("%d\n", sizeof(data));
	
	return 0;
}


