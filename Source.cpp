#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
using namespace std;
template <typename T>
T write(T *fs)
{

	char text[] = "Hello World!!\n";
	char name[] = "Test.txt";
	if ((fs = fopen(name, "w")) == NULL)
	{
		perror("ERROR");


	}
	else
	{
		fputs(text, fs);
		fclose(fs);
	}
	return *fs;
}
template <typename T>
T read(T* fs)
{
	char cc[256];
	char text[] = "Hello World!!";
	char name[] = "Test.txt";
	if ((fs = fopen(name, "r")) == NULL)
	{
		perror("ERROR");


	}
	else
	{
		while(fgets(cc,256,fs)!=NULL)
		{
			printf("%s", cc);
		
		}
	}
	return *fs;
}
template <typename T>
T write2(T* fs)
{
	char text[] = "Hello World!!";
	char name[] = "Test.txt";
	if ((fs = fopen(name, "a")) == NULL)
	{
		perror("ERROR");


	}
	else
	{
		fputs(text, fs);
		fclose(fs);
	}
	return *fs;

}


void main()
{
	FILE* fs = 0;
	write(fs);
	read(fs);
	write2(fs);



}

