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

/*function to sort students and courses in ascending order from their IDs, using bubble sort*/
void sortAll(){

int i,j;
	for (i = 0; i < 12; i++)
   		 {
     		   for (j = 0; j < (12 - i - 1); j++)
      		  {
         	   if (courseList[0].students[j].id > courseList[0].students[j + 1].id)
         		   {
             	  	   temp = courseList[0].students[j];
              	 	   courseList[0].students[j] = courseList[0].students[j + 1];
              		   courseList[0].students[j + 1] = temp;
          		   }
      		  }
 	}

	for (i = 0; i < 12; i++)
   		 {
     		   for (j = 0; j < (12 - i - 1); j++)
      		  {
         	   if (courseList[1].students[j].id > courseList[1].students[j + 1].id)
         		   {
             	  	   temp = courseList[1].students[j];
              	 	   courseList[1].students[j] = courseList[1].students[j + 1];
              		   courseList[1].students[j + 1] = temp;
          		   }
      		  }
 	}

	for (i = 0; i < 12; i++)
   		 {
     		   for (j = 0; j < (12 - i - 1); j++)
      		  {
         	   if (courseList[2].students[j].id > courseList[2].students[j + 1].id)
         		   {
             	  	   temp = courseList[2].students[j];
              	 	   courseList[2].students[j] = courseList[2].students[j + 1];
              		   courseList[2].students[j + 1] = temp;
          		   }
      		  }
 	}

	for (i = 0; i < 12; i++)
   		 {
     		   for (j = 0; j < (12 - i - 1); j++)
      		  {
         	   if (courseList[0].waitingList[j].id > courseList[0].waitingList[j + 1].id)
         		   {
             	  	   temp = courseList[0].waitingList[j];
              	 	   courseList[0].waitingList[j] = courseList[0].waitingList[j + 1];
              		   courseList[0].waitingList[j + 1] = temp;
          		   }
      		  }
 	}

	for (i = 0; i < 12; i++)
   		 {
     		   for (j = 0; j < (12 - i - 1); j++)
      		  {
         	   if (courseList[1].waitingList[j].id > courseList[1].waitingList[j + 1].id)
         		   {
             	  	   temp = courseList[1].waitingList[j];
              	 	   courseList[1].waitingList[j] = courseList[1].waitingList[j + 1];
              		   courseList[1].waitingList[j + 1] = temp;
          		   }
      		  }
 	}

	for (i = 0; i < 12; i++)
   		 {
     		   for (j = 0; j < (12 - i - 1); j++)
      		  {
         	   if (courseList[2].waitingList[j].id > courseList[2].waitingList[j + 1].id)
         		   {
             	  	   temp = courseList[2].waitingList[j];
              	 	   courseList[2].waitingList[j] = courseList[2].waitingList[j + 1];
              		   courseList[2].waitingList[j + 1] = temp;
          		   }
      		  }
 	}

	for (i = 0; i < 3; i++)
   		 {
     		   for (j = 0; j < (3 - i - 1); j++)
      		  {
         	   if (courseList[j].courseID > courseList[j+1].courseID)
         		   {
             	  	   temp2 = courseList[j];
              	 	   courseList[j] = courseList[j + 1];
              		   courseList[j + 1] = temp2;
          		   }
      		  }
 	}
}
