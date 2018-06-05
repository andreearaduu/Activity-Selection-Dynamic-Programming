
/**
*    @file get.h
*    @brief this header file will contain definition of the function "maxNoAct" and the definition of the structure
*
*    @author Radu Maria Andreea
*
*    @date 04.06.2018
*
*/
#ifndef GET_H_INCLUDED
#define GET_H_INCLUDED

struct activities{
int start_time;
int end_time;
int id;
};
int maxNoAct(struct activities *activity_list, int no_activities);


#endif // GET_H_INCLUDED
