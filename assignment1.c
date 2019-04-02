/* PROGRAM:  Assignment1
   AUTHOR:  Vicken Aharonian and Franck Ngassa
   DATE:   November 23, 2017
   PURPOSE:  self referencing structs (linked lists) and formatting delimited lists
   LEVEL OF DIFFICULTY: 4.5
   CHALLENGES: removing duplicate students and making sure no student is in a course twice, during the second pass of 	   adding the students.
   HOURS SPENT: 25
 */
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include"addStudents.h"
#include"sort.h"
#include"display.h"

void display();
void sortAll();
void addStudents();

int main()

{

	srand(time(NULL));

	addStudents();

	sortAll();

	display();

	printf("Press Any Key to Continue\n");
	getchar();

	return 0;

}


