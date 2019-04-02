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

/*function to display all courses and students*/
void display(){
int i,f,h;
	for (i = 0; i < 3; i++)

	{

		printf("\nCS%d - %s \n",courseList[i].courseID,courseList[i].courseName);

		printf("%s \n",courseList[i].courseDesc);
		printf("Registered Students: %d/%d \n",courseList[i].currentStudents,courseList[i].maxStudents);

		for (f = 0; f < 12; f++){
			if (courseList[i].students[f].id != '\0'){

				printf("* %d - %s, %s \n",courseList[i].students[f].id,courseList[i].students[f].lastName,courseList[i].students[f].firstName);
			}
		}
		if (courseList[i].waitingListCount > 0){
			printf("Waiting List (%d) \n",courseList[i].waitingListCount);
			for (h = 0; h < 12; h++){
				if (courseList[i].waitingList[h].id != '\0'){ 
					printf("* %d - %s, %s \n",courseList[i].waitingList[h].id,courseList[i].waitingList[h].lastName,courseList[i].waitingList[h].firstName);
				}
			}
		}

	};
}
