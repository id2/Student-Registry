/* PROGRAM:  Assignment1
   AUTHOR:  Vicken Aharonian and Franck Ngassa
   DATE:   November 23, 2017
   PURPOSE:  self referencing structs (linked lists) and formatting delimited lists
   LEVEL OF DIFFICULTY: 4.5
   CHALLENGES: removing duplicate students and making sure no student is in a course twice, during the second pass of 	   adding the students.
   HOURS SPENT: 25
 */


#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include"addStudents.h"
#include"sort.h"

/*function to randomly generate and return a number between two given values*/
int randomNumber(int min, int max)
	{
	int diff = max-min;
	return (int) (((double)(diff+1)/RAND_MAX) * rand() + min);
}

/*function to create students/courses and add the students to courses, twice*/
void addStudents(){

	int l,g,j,x,t;

	int rand1[2] = {1, 2};/*variable to change course number if students registered in first course*/

	int rand2[2] = {0, 2};/*variable to change course number if students registered in second course*/

	int rand3[2] = {0, 1};/*variable to change course number if students registered in thirdS course*/

	int randNum [12]; /*array to hold random student IDs*/

	int randCID [3]; /*array to hold random course IDs*/

	int randomMax [3];/*array to hold random max students in course*/

	/*random student ID generator*/
	for (j = 0; j < 12; j++){
		randNum[j] = randomNumber(10000,99999);
	}

	/*random course ID generator*/
	for (x = 0; x < 3; x++){
		randCID[x] = randomNumber(100,999);
	}

	/*random course size*/
	for (t = 0; t < 3; t++){
		randomMax[t] = randomNumber(4,8);
	}

	studentList[0].id = randNum[0];
	strcpy_s(studentList[0].firstName, 15, "Donald");
	strcpy_s(studentList[0].lastName, 15, "Trump");

	studentList[1].id = randNum[1];
	strcpy_s(studentList[1].firstName, 15, "Justin");
	strcpy_s(studentList[1].lastName, 15, "Trudeau");

	studentList[2].id = randNum[2];
	strcpy_s(studentList[2].firstName, 15, "Floyd");
	strcpy_s(studentList[2].lastName, 15, "Mayweather");

	studentList[3].id = randNum[3];
	strcpy_s(studentList[3].firstName, 15, "James");
	strcpy_s(studentList[3].lastName, 15, "Blunt");

	studentList[4].id = randNum[4];
	strcpy_s(studentList[4].firstName, 15, "Snoop");
	strcpy_s(studentList[4].lastName, 15, "Dogg");

	studentList[5].id = randNum[5];
	strcpy_s(studentList[5].firstName, 15, "Steven");
	strcpy_s(studentList[5].lastName, 15, "Smith");

	studentList[6].id = randNum[6];
	strcpy_s(studentList[6].firstName, 15, "Mike");
	strcpy_s(studentList[6].lastName, 15, "Myers");

	studentList[7].id = randNum[7];
	strcpy_s(studentList[7].firstName, 15, "David");
	strcpy_s(studentList[7].lastName, 15, "Jin");

	studentList[8].id = randNum[8];
	strcpy_s(studentList[8].firstName, 15, "Kevin");
	strcpy_s(studentList[8].lastName, 15, "Hart");

	studentList[9].id = randNum[9];
	strcpy_s(studentList[9].firstName, 15, "Kim");
	strcpy_s(studentList[9].lastName, 15, "Lee");

	studentList[10].id = randNum[10];
	strcpy_s(studentList[10].firstName, 15, "Jason");
	strcpy_s(studentList[10].lastName, 15, "Wu");

	studentList[11].id = randNum[11];
	strcpy_s(studentList[11].firstName, 15, "Arnold");
	strcpy_s(studentList[11].lastName, 15, "Rogers");

	strcpy_s(courseList[0].courseName, 40, "Intro to C Programming");
	strcpy_s(courseList[0].courseDesc, 100, "Learn to program in the C language");
	courseList[0].courseID = randCID[0];
	courseList[0].maxStudents = randomMax[0];

	strcpy_s(courseList[1].courseName, 40, "Intro to Java Programming");
	strcpy_s(courseList[1].courseDesc, 100, "Learn to program in the Java language");
	courseList[1].courseID = randCID[1];
	courseList[1].maxStudents = randomMax[1];

	strcpy_s(courseList[2].courseName, 40, "Perl Programming");
	strcpy_s(courseList[2].courseDesc, 100, "Introduction to learn how to program in perl");
	courseList[2].courseID = randCID[2];
	courseList[2].maxStudents = randomMax[2];

	/*add students to courses - first pass*/
	for (g = 0; g < 12; g++)

	{
		int b = (rand()%3);

		if (courseList[b].currentStudents < courseList[b].maxStudents)
		{
			if (b == 0)
			{
				courseList[0].students[g] = studentList[g];
				courseList[0].currentStudents++;
				studentList[g].courseRegistered = 0;
			}
			if (b == 1)
			{
				courseList[1].students[g] = studentList[g];
				courseList[1].currentStudents++;
				studentList[g].courseRegistered = 1;
			}
			if (b == 2)
			{
				courseList[2].students[g] = studentList[g];
				courseList[2].currentStudents++;
				studentList[g].courseRegistered = 2;
			}
		}

		else if (courseList[b].currentStudents == courseList[b].maxStudents)
		{
			if (b == 0)
			{
				courseList[0].waitingList[g] = studentList[g];
				courseList[0].waitingListCount++;
				studentList[g].courseRegistered = 0;
			}
			if (b == 1)
			{
				courseList[1].waitingList[g] = studentList[g];
				courseList[1].waitingListCount++;
				studentList[g].courseRegistered = 1;
			}
			if (b == 2 && studentList[g].id != '\0'){
				courseList[2].waitingList[g] = studentList[g];
				courseList[2].waitingListCount++;
				studentList[g].courseRegistered = 2;
			}
		}
	}

	/*add students to courses - second pass with more steps and verifications*/
	for (l = 0; l < 12; l++)
	{
		int f = (rand()%3);
		if (f == 0 && studentList[l].courseRegistered == 0)
		{
			f = rand1[rand()%2];
		}
		else if (f == 1 && studentList[l].courseRegistered == 1)
		{
			f = rand2[rand()%2];
		}
		else if (f == 2 && studentList[l].courseRegistered == 2)
		{
			f = rand3[rand()%2];
		}

		if (courseList[f].currentStudents < courseList[f].maxStudents)
		{
			if (f == 0 && studentList[l].courseRegistered != 0)
			{
				courseList[0].students[l] = studentList[l];
				courseList[0].currentStudents++;
			}
			else if (f == 1 && studentList[l].courseRegistered != 1)
			{
				courseList[1].students[l] = studentList[l];
				courseList[1].currentStudents++;
			}
			else if (f == 2 && studentList[l].courseRegistered != 2)
			{
				courseList[2].students[l] = studentList[l];
				courseList[2].currentStudents++;
			}
		}

		else if (courseList[f].currentStudents == courseList[f].maxStudents)
		{
			if (f == 0 && studentList[l].courseRegistered != 0)
			{
				courseList[0].waitingList[l] = studentList[l];
				courseList[0].waitingListCount++;
			}
			else if (f == 1 && studentList[l].courseRegistered != 1)
			{
				courseList[1].waitingList[l] = studentList[l];
				courseList[1].waitingListCount++;
			}
			else if (f == 2 && studentList[l].courseRegistered != 2)
			{
				courseList[2].waitingList[l] = studentList[l];
				courseList[2].waitingListCount++;
			}
		}
	}
}
