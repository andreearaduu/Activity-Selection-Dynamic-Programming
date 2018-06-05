#include <stdlib.h>
#include <time.h>
#include "activities.h"
/**This function will generate and return a random number between 1 and 24
    @date 01.06.2018
*/
int generate_number(){
    ///The auxiliar will hold the number generated
    int aux;

    aux = rand() % 24;

    return aux;
}
/** This function will generate the start and finish time of an activity
*   @author Radu Maria Andreea
*   @param activity_list  The structure asociated to the activity list
*   @param no_activities  The number of activities
*   @date 02.06.2018
*/

void generate_activities(struct activities *activity_list, int no_activities){
    ///Define an iterator which help us to browse all activities from the list
    int iterator;

    ///This will hold the start time
    int time1;

    ///This will hold the finish time
    int time2;

    srand(time(NULL));
    ///Browse all activity from the list
    for(iterator = 0; iterator <= no_activities; iterator++){
        activity_list[iterator].id = iterator;
        do{
            /// This will generate the start and finish time while there are equal
            time1 = generate_number();
            time2 = generate_number();
        } while (time1 == time2);
        ///In case of one time is smaller than other, the following will assume that the smallest is the begining time and the other the end time
        if (time1 < time2){
            activity_list[iterator].start_time = time1;
            activity_list[iterator].end_time = time2;
        }else{
            activity_list[iterator].start_time = time2;
            activity_list[iterator].end_time = time1;
        }
    }
}

