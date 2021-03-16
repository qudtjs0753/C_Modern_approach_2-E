#include <stdio.h>
#include <string.h>

#define MAX_REMIND 50 //maximum number of remainders
#define MSG_LEN 60  //max length of reminder message

int read_line(char str[], int n);


int main(void){
    char reminders[MAX_REMIND][MSG_LEN+3];
    char day_str[20], day_hour[6] ,msg_str[MSG_LEN+1];
    int month, day, hour,i, j, num_remind = 0;

    for(;;){
        if (num_remind == MAX_REMIND){
            printf("-- No space left --\n");
            break;
        }
        
        printf("Enter day, and 24-hour and reminder: ");
        scanf("%2d/%2d %2d", &month, &day, &hour);
        if(month == 0)
            break;
        else if(day>31 || day<0){
            printf("Error. type correct day.\n");
            continue;
        }
        sprintf(day_str, "%2d/%2d     %2d", month, day, hour);
        read_line(msg_str, MSG_LEN);
        for(i= 0; i<num_remind;i++)
        //reminders[i] day_str 비교, month, day, hour 비교.
            if(strcmp(day_str, reminders[i])<0)
                break;
        //sort 안된부분만 sorting 시작.
        //index j에 index j-1의 reminders 저장.
        for (j = num_remind; j>i; j--)
            strcpy(reminders[j], reminders[j-1]);
        //다 끝나고 i번째에 day_str, msg_str 대입
        strcpy(reminders[i], day_str);
        strcat(reminders[i], msg_str);

        num_remind++;
    }

    printf("\nYearly Reminder\n");
    printf("Month/day time\n");
    for(i=0; i<num_remind;i++)
        printf(" %s\n", reminders[i]);

    return 0;
}

int read_line(char str[], int n){

    int ch, i = 0;

    while ((ch=getchar()) != '\n')
        if (i < n)
          str[i++] = ch;
    str[i] = '\0';
    return i;
}