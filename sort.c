#include"sort.h"
#include<stdio.h>
/** This function will sort the activities according to their end time
*   @author Radu Maria Andreea
*   @param activity_list  The structure asociated to the list
*   @param no_activities  The number of activities
*   @date 02.06.2018
*/

void sort_by_end_time(struct activities *activity_list, int no_activities){
    /// These iterators will help to browse the activity list
    int iterator_1;
    int iterator_2;

    /// This  auxiliar variable will hold the id of the activity.
    int aux_id;

    /// This auxiliar variable will hold the start time of the activity.
    int aux_start_time;

    ///This auxiliar variable will hold the end time of the activity.
    int aux_end_time;

    /// This will browse the activity list with two iterators for sorting it
    for ( iterator_1 = 0; iterator_1 < no_activities -1 ; iterator_1++) {
        for ( iterator_2 = iterator_1; iterator_2 < no_activities; iterator_2++) {

                ///This check which activity has the end time grater.
            if ( activity_list[iterator_1].end_time > activity_list[iterator_2].end_time ){

                /// This will make the change of values between activities
                aux_id = activity_list[iterator_1].id;
                aux_end_time = activity_list[iterator_1].end_time;
                aux_start_time = activity_list[iterator_1].start_time;
                activity_list[iterator_1].id = activity_list[iterator_2].id;
                activity_list[iterator_1].end_time = activity_list[iterator_2].end_time;
                activity_list[iterator_1].start_time = activity_list[iterator_2].start_time;
                activity_list[iterator_2].id = aux_id;
                activity_list[iterator_2].end_time = aux_end_time;
                activity_list[iterator_2].start_time = aux_start_time;
            }
        }
    }
}
