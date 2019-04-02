#ifndef ADDSTUDENTS_H
#define ADDSTUDENTS_H

void addStudents();

struct Student {
	int id;
	char firstName[15];
	char lastName[15];
	int courseRegistered;
};

struct Course {
	char courseName[40];
	char courseDesc[100];
	int courseID;
	int maxStudents;
	int currentStudents;
	int waitingListCount;
	struct Student students[25];
	struct Student waitingList[12];
};

struct Student temp;
struct Student studentList[12];
struct Course courseList[3];
struct Course temp2;

#endif

