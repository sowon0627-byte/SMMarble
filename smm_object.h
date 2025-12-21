//
//  smm_object.h
//  SMMarble object
//
//  Created by Juyeop Kim on 2023/11/05.
//

#ifndef smm_object_h
#define smm_object_h

/* node type :
    lecture,
    restaurant,
    laboratory,
    home,
    experiment,
    foodChance,
    festival
*/

#define SMMNODE_TYPE_LECTURE      0
#define SMMNODE_TYPE_RESTAURANT   1
#define SMMNODE_TYPE_LABORATORY   2
#define SMMNODE_TYPE_HOME         3
#define SMMNODE_TYPE_GOTOLAB      4
#define SMMNODE_TYPE_FOODCHANGE   5
#define SMMNODE_TYPE_FESTIVAL     6

#define SMMNODE_OBJTYPE_BOARD   0
#define SMMNODE_OBJTYPE_GRADE   1
#define SMMNODE_OBJTYPE_FOOD    2
#define SMMNODE_OBJTYPE_FEST    3


#define SMMNODE_MAX_GRADE       13


//structure type definition
typedef enum {
        SMM_GRADE_AP = 0,
        SMM_GRADE_A0 = 1,
        SMM_GRADE_AM = 2,
        SMM_GRADE_BP = 3,
        SMM_GRADE_B0 = 4,
        SMM_GRADE_BM = 5,
        SMM_GRADE_CP = 6,
        SMM_GRADE_C0 = 7,
        SMM_GRADE_CM = 8,
        SMM_GRADE_DP = 9,
        SMM_GRADE_D0 = 10,
        SMM_GRADE_DM = 11,
        SMM_GRADE_F = 12,
} smmGrade_e;
        

//object generation
void* smmObj_genObject(char* name, int objType, int type, int credit, int energy, int grade);
char* smmObj_getObjectName(void *ptr);
int smmObj_getObjectCredit(void *ptr);
int smmObj_getObjectEnergy(void *ptr);
int smmObj_getTypeName(void *ptr);
int smmObj_getObjectGrade(void *ptr);

//element to string
char* smmObj_getGradeName(smmGrade_e grade);
smmGrade_e takeLecture(int player, char *lectureName, int credit);





#endif /* smm_object_h */
