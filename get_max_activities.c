#include"get.h"
#include<stdlib.h>

/**
*   This function will return the maximum number of activities that can be performed by a person
*   @author Radu Maria Andreea
*   @param activity_list  The structure asociated to the list
*   @param no_activities  The number of activities
*   @date 02.06.2018
*/


int maxNoAct( struct activities *activity_list, int no_activities)
{    ///Define two iterators which help to browse all activities from the list
   int iterator1;
   int iterator2;

   ///The maximum number of activities that can be performed
   int max=0;

   /// I used a vector maximum number of activities
   int *max_act =(int*) malloc ( sizeof( int ) * no_activities );

   /// Initialize maximum number of activities values with 1 for all indexes
   for ( iterator1 = 0; iterator1 < no_activities; iterator1++ )
          max_act[iterator1] = 1;

   ///Browse the activity_list
   for ( iterator1 = 1; iterator1 < no_activities; iterator1++ ){

     { for ( iterator2 = 0; iterator2 < iterator1; iterator2++ ){
        /// Compare the finish time of already finalized max_act with the start time of new max_act being constructed.
         if ( ((activity_list[iterator1].start_time) > (activity_list[iterator2].end_time) )&&( max_act[iterator1] < (max_act[iterator2] + 1)))
                max_act[iterator1] = max_act[iterator2] + 1;
     }}}



   ///Pick maximum of all maximum number of activities  values
   for ( iterator1 = 0; iterator1 < no_activities; iterator1++ )
      if ( max < max_act[iterator1] )
            max = max_act[iterator1];

   ///Free memory to avoid memory leak
   free( max_act );

   ///Retrun the maximum number of activities
   return max;
   }
