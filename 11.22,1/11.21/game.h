#define _CRT_SECURE_NO_WARNINGS 1
#ifndef __GAME_H__
#define __GAME_H__


#include<stdio.h>
#include<string.h>
#include<assert.h>
#include<stdlib.h>



enum input
{
	exitt,
	add,
	del,
	search,
	change,
	show,
	empty,
	sort

};

#define MAX_NAME 10
#define MAX_AGE 5
#define MAX_SEX 4
#define MAX_TEL 12
#define MAX_ADS 20
#define MAX 1000



typedef struct stu
{
	char name[MAX_NAME];
	int age[MAX_AGE];
	int sex[MAX_SEX];
	char tel[MAX_TEL];
	char adress[MAX_ADS];


}stu;

typedef struct Contact
{
	stu date[MAX];
	int sz;
	int cp;
}Contact;

void Initcontact(Contact *pcon);
void Addcontact(Contact *pcon);
void Showcontact(Contact *pcon);
void Delcontact(Contact *pcon);
void Searchcontact(Contact *pcon); 
void Changecontact(Contact *pcon);
void Emptycontact(Contact *pcon);
//void Sortcontact(Contact *pcon);




#endif __GAME_H__
