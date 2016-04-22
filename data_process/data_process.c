/*************************************************************************
	> File Name: data_proccess.c
	> Author: 
	> Mail: 
	> Created Time: Tue 12 Apr 2016 06:04:50 PM CST
 ************************************************************************/

#include<stdio.h>

void exeTime()
{
    int id1, id2;
    int start_time, end_time;
    int readytime, deadline;
    freopen("../execution_time_of_servant.data", "r", stdin);
    freopen("execution_time.data", "w", stdout);
    
    while( scanf("%d", &id1) != EOF )
    {
        scanf("%d", &start_time);
        scanf("%d", &end_time);

        if( id1 != 21 )
        {
            scanf("%d", &readytime);
            scanf("%d", &deadline);
        }
        scanf("%d", &id2);

        if( id2 == (id1 + 10) * 3 )
        {
            printf("%d %d\n", id1, (end_time - start_time)); // transit to micro second.
        }
        else
        {
            fprintf(stderr,"Servant %d had been preempted\n", id1);
            fprintf(stderr,"id: %d ; start_time %d\n", id1, start_time);
            fprintf(stderr,"id: %d ; end_time   %d\n", id2, end_time);
        }
    }

    fclose(stdin);
    fclose(stdout);

}

void s_time_spec()
{
    int id1, id2;
    int start_time, end_time;
    int readytime, deadline;
    freopen("../execution_time_of_servant.data", "r", stdin);
    freopen("s_time_spec.data", "w", stdout);
    
    while( scanf("%d", &id1) != EOF )
    {
        scanf("%d", &start_time);
        scanf("%d", &end_time);
        if( id1 != 21 )
        {
            scanf("%d", &readytime);
            scanf("%d", &deadline );
        }
        scanf("%d", &id2);

        // record the start time and end time of S-servant
        if( id1 != 21 && id2 == (id1 + 10) * 3 )
        {
            printf("%d %d %d %d %d\n", id1, start_time, end_time, readytime, deadline); // transit to micro second.
        }
    }
    fclose(stdin);
    fclose(stdout);
    
}

void r_time_spec()
{
    int id1, id2;
    int start_time, end_time;
    int readytime, deadline;
    freopen("../execution_time_of_servant.data", "r", stdin);
    freopen("r_time_spec.data", "w", stdout);
    
    while( scanf("%d", &id1) != EOF )
    {
        scanf("%d", &start_time);
        scanf("%d", &end_time);
        if( id1 != 21 )
        {
            scanf("%d", &readytime);
            scanf("%d", &deadline );
        }
        scanf("%d", &id2);

        // record the start time and end time of S-servant
        if( id1 == 21 && id2 == (id1 + 10) * 3 )
        {
            printf("%d %d %d\n", id1, start_time, end_time); // transit to micro second.
        }
    }
    fclose(stdin);
    fclose(stdout);
}

// conclude the information of servants into tasks
int IS_LAST_SERVANT[21] = 
{
    0,1,
    0,1,
    1,
    1,
    1,
    0,1,
    0,0,1,
    0,
    0,1,
    0,0,1,
    1,
    1,
    1
};

int taskid[21] =
{
    1,1,
    2,2,
    3,
    4,
    5,
    6,6,
    7,7,7,
    8,
    9,9,
    10,10,10,
    11,
    12,
    13
};

void task_time_spec()
{
    int id1, id2;
    int start_time, end_time;
    int readytime, deadline;
    freopen("../execution_time_of_servant.data", "r", stdin);
    freopen("task_time_spec.data", "w", stdout);
    
    while( scanf("%d", &id1) != EOF )
    {
        scanf("%d", &start_time);
        scanf("%d", &end_time);
        if( id1 != 21 )
        {
            scanf("%d", &readytime);
            scanf("%d", &deadline );
        }
        scanf("%d", &id2);

        // this servant is last servant of task 
        if( IS_LAST_SERVANT[id1] == 1 )
        {
            printf("%d %d %d %d\n", taskid[id1], readytime, end_time, deadline); 
        }
    }
    fclose(stdin);
    fclose(stdout);
    
}

int main()
{

    exeTime();
    s_time_spec();
    r_time_spec();
    task_time_spec();

    return 0;
}
