#include <stdio.h>
#include <stdlib.h>
#include"get.h"
#include"activities.h"
#include"sort.h"
#include"print.h"
/**
*   The activity problem solved with Dynamic Programming
*   @author Radu Maria Andreea
*   @date 04.06.2018
*
*/

int main()
{   ///The number of activities
    int no_activities;

    printf("Give the number of activities!\n");
    scanf("%d",&no_activities);

    struct activities *activity_list;
    activity_list = malloc(no_activities * sizeof(struct activities));

    generate_activities(activity_list,no_activities);
    print_activities(activity_list, no_activities);

    sort_by_end_time(activity_list, no_activities);
    printf("\n======Activities sorted by end time=====\n");
    print_activities(activity_list,no_activities);


    printf("\nThe maximum number of activities that can be performed by a person is %d\n",maxNoAct(activity_list, no_activities));

    return 0;
}
