#include<stdio.h>
#include<string.h>


int main(){
	
	// char name[100];
	// printf("enter name: ");
	// gets(name);
	// int strlen=0;

	// for(int i=0;name[i]!='\0';i++){
	// 	strlen++;
	// }

	// for(int i=0;i<(strlen/2);i++){
	// 	char term = name[i];
	// 	name[i]= name[strlen-1-i];
	// 	name[strlen-1-i] = term;
	// }

	// puts(name);

	char name[100];
	gets(name);
	char reverse[100] = strrev(name);
	puts(strrev(name));

	return 0;
}