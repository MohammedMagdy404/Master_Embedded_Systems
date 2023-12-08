/*
 * headerTypes.h
 *
 *  Created on: Dec 3, 2023
 *      Author: mm929
 */

#ifndef HEADERTYPES_H_
#define HEADERTYPES_H_


typedef enum{
	m,
	f
}Gender;

typedef struct{
	char std_fullName[50];
	Gender std_gender;
	unsigned char std_age;
	unsigned char std_studyYear;
	unsigned int std_Roll;
	unsigned int std_Marks;
}student;



#endif /* HEADERTYPES_H_ */
