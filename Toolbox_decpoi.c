//decpoi is here...
#include<stdio.h>
#include<conio.h>
#include<Windows.h>
#include<time.h>
#include<math.h>
void percent(void);
void gpa(void);
void TimeInterval(void);
void timer(void);
void stopwatch(void);
void counter(void);
int CheckDate(char a[11]);
int CheckDate2(int a,int b);
int CheckTime(char a[8]);
typedef enum
{
    BLACK = 0, BLUE = 1, GREEN = 2,
    AQUA = 3, RED = 4, PURPLE = 5,
    YELLOW = 6, WHITE = 7, GRAY = 8,
    LIGHT_BLUE = 9, LIGHT_GREEN = 10,
    LIGHT_AQUA = 11, LIGHT_RED = 12,
    LIGHT_PURPLE = 13, LIGHT_YELLOW = 14,
    LIGHT_WHITE = 15
} ConsoleColors;
typedef HANDLE Handle;
typedef CONSOLE_SCREEN_BUFFER_INFO BufferInfo;
typedef WORD Word;
short setTextColor(const ConsoleColors foreground)
{
    Handle consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    BufferInfo bufferInfo;
    if(!GetConsoleScreenBufferInfo(consoleHandle, &bufferInfo))
        return 0;
    Word color = (bufferInfo.wAttributes & 0xF0) + (foreground & 0x0F);
    SetConsoleTextAttribute(consoleHandle, color);
    return 1;
}


void main()
{
    system("cls");
    char answer[1];
    setTextColor(14);
    printf("\n\n\n\t\tPlease Enter a  Number To Continue : \n\n\n");
    setTextColor(11);
    printf("\t\t\t1.");
    setTextColor(7);
    printf("Calculate the percentage\n\n\n");
    setTextColor(11);
    printf("\t\t\t2.");
    setTextColor(7);
    printf("Calculate the GPA\n\n\n");
    setTextColor(11);
    printf("\t\t\t3.");
    setTextColor(7);
    printf("Calculate the time interval\n\n\n");
    setTextColor(11);
    printf("\t\t\t4.");
    setTextColor(7);
    printf("Timer\n\n\n");
    setTextColor(11);
    printf("\t\t\t5.");
    setTextColor(7);
    printf("Stopwatch\n\n\n");
    setTextColor(11);
    printf("\t\t\t6.");
    setTextColor(7);
    printf("Counter\n\n\n");
    setTextColor(11);
    printf("\t\t\t0.");
    setTextColor(7);
    printf("Exit\n\n\n");
    setTextColor(14);
    printf("\t\t\t\t\tMy Choice : ");
    setTextColor(11);
    gets(answer);
    if(strcmp(answer,"1")==0)
    {
        system("cls");
        percent();
    }
    else if(strcmp(answer,"2")==0)
    {
        system("cls");
        gpa();
    }
    else if(strcmp(answer,"3")==0)
    {
        system("cls");
        TimeInterval();
    }
    else if(strcmp(answer,"4")==0)
    {
        system("cls");
        timer();
    }
    else if(strcmp(answer,"5")==0)
    {
        system("cls");
        stopwatch();
    }
    else if(strcmp(answer,"6")==0)
    {
        system("cls");
        counter();
    }
    else if(strcmp(answer,"0")==0)
    {
        system("cls");
        exit(0);
    }
    else
    {
        system("cls");
        exit(0);
    }
}
void percent(void)
{
    setTextColor(7);
    float correct = 0 , incorrect = 0 , NumberOfQuestions = 2 ;

    do
    {
        if(NumberOfQuestions < correct + incorrect)
        {
            system("cls");
            setTextColor(12);
            printf("\n\n\a\tThe Sum of the number of correct and incorrect questions\n\n\tShould Not exceed the total Number of Questions,Please Try again!!!");
        }
        do
        {
           if(NumberOfQuestions<=0)
           {
               system("cls");
               setTextColor(12);
               printf("\n\n\a\t The Number Of Questions must be a positive number!! Try again...");
           }
           setTextColor(14);
           printf("\n\n\n\n\tNumber of Questions? : ");
           setTextColor(11);
           scanf("%f",&NumberOfQuestions);
        }while(NumberOfQuestions<=0);

        do
        {
            if(correct<0)
               {
                   setTextColor(12);
                   printf("\n\n\a\t The Number Of Correct Questions must be a positive number!! Try again...");
               }
            setTextColor(14);
            printf("\n\n\n\n\tNumber of Correct Answers? : ");
            setTextColor(11);
            scanf("%f",&correct);
        }while(correct<0);
        do
        {
            if(incorrect<0)
               {
                   setTextColor(12);
                   printf("\n\n\a\t The Number Of Incorrect Questions must be a positive number!! Try again...");
               }
            setTextColor(14);
            printf("\n\n\n\n\tNumber of Incorrect Answers? : ");
            setTextColor(11);
            scanf("%f",&incorrect);
        }while(incorrect<0);
        setTextColor(14);
    } while (NumberOfQuestions < correct + incorrect);



    float percent;

    percent = (((correct * 3) - (incorrect)) / (3*NumberOfQuestions)) * 100 ;
    setTextColor(11);
    printf("\n\n\n\n\t\t\t\t\t\t\tYour Percentage = %4.2f%% ",percent);
    setTextColor(10);
    printf("\n\n\n\n\t\t\t\t\t\t\t\t    Decpoi");
    setTextColor(7);
    printf("\n\n\n\n\t\t\t\t\t\t\t    Enter 0 To Return: ");

    getchar();
    char exi[1];
    setTextColor(11);
    gets(exi);
    setTextColor(7);
    if(strcmp(exi,"0")==0)
    {
        main();
    }


}
void gpa(void)
{

    int number = 1;
    do
    {
       if(number <= 0)
       {
           setTextColor(12);

           printf("\n\n\a\tThe number of semester Courses must be a positive number!! Please Try again...");
       }

        setTextColor(14);
        printf("\n\n\n   Enter the number of semester course  : ");


        setTextColor(11);

        scanf("%d",&number);

    }while(number<=0);



    int counter;

    float grades[number] , credits[number] ;

    //Total number of Credits
    float sum = 0;

    //The numerator
    float sum2 = 0;

    setTextColor(7);

    for(counter = 0 ; counter <= number - 1 ; counter++)
    {
        setTextColor(14);

        printf("\n\n\tEnter Your %dth course Score : ",counter+1);

        setTextColor(11);

        scanf("%f",&grades[counter]);

        setTextColor(7);

        printf("\n\n\tHow many Credits does have your %dth course?  : ",counter+1);

        setTextColor(11);

        scanf("%f",&credits[counter]);

        setTextColor(7);

        sum = sum + credits[counter];

        sum2 = sum2 + (grades[counter]*credits[counter]) ;
    }

    float avg =(float)(sum2 / sum);

    setTextColor(11);


    printf("\n\n\n\n\n\t\t\t\t\t**********   Your GPA = %2.2f   **********\n\n\n\n\n",avg);

    setTextColor(10);

    printf("\n\n\t\t\t\t\t\t\t   Decpoi   \n\n\n\n\n");

    setTextColor(7);

    getchar();
    printf("\n\n\t\t\t\t\t    Enter 0 to return : ");

    char exi[1];
    setTextColor(11);
    gets(exi);
    setTextColor(7);
    if(strcmp(exi,"0")==0)
    {
        main();
    }

}
void TimeInterval(void)
{

    char start[11]="1111/11/11";

    int a; //For Start's CheckDate

    int k;//for Start's CheckDate2

    int y_s , m_s , d_s;

    char M_S[3] , D_S[3] ;

    int y_e , m_e , d_e;

    char M_End[3] , D_End[3] ;

    do
    {
        do
        {
            setTextColor(7);
            printf("\n\n\n\n\tEnter the start of the time period(YYYY/MM/DD) : ");

            setTextColor(11);
            gets(start);

            setTextColor(7);




            do
            {
                if(start[10] != '\0')
                {
                    setTextColor(12);
                    printf("\n\n\a\tEnter the input format according to the instructions!! Try again...");
                    setTextColor(7);
                    printf("\n\n\n\n\tEnter the start of the time period(YYYY/MM/DD) : ");
                    setTextColor(11);
                    gets(start);
                    setTextColor(7);
                }

            }while(start[10] != '\0');

            a = CheckDate(start);

        }while(a != 1);



        y_s = atoi(start);

        M_S[0] = start[5];
        M_S[1] = start[6];
        M_S[2] = '\0';

        D_S[0] = start[8];
        D_S[1] = start[9];
        D_S[2] = '\0';

        m_s = atoi(M_S);
        d_s = atoi(D_S);
        k = CheckDate2(m_s , d_s);

    }while(k != 1);





    char end[11] = "2222/11/11";

    int b; //For CheckDate

    int d; //For CheckDate2

    int yy = 0,mm = 0,dd = 0;//end date of the course > start date of the course


        do
        {
            do
            {

                SPRING:setTextColor(7);
                printf("\n\n\n\n\tEnter the end of the time period(YYYY/MM/DD) : ");

                setTextColor(11);
                gets(end);



                do
                {
                    if(end[10] != '\0')
                    {
                        setTextColor(12);
                        printf("\n\n\a\tEnter the input format according to the instructions!! Try again...");
                        setTextColor(7);
                        printf("\n\n\n\n\tEnter the end of the time period(YYYY/MM/DD) : ");
                        setTextColor(11);
                        gets(end);
                        setTextColor(7);
                    }

                }while(end[10] != '\0');



                b = CheckDate(end);

            }while(b != 1);



            y_e = atoi(end);

            M_End[0] = end[5];
            M_End[1] = end[6];
            M_End[2] = '\0';
            D_End[0] = end[8];
            D_End[1] = end[9];
            D_End[2] = '\0';

            m_e = atoi(M_End);
            d_e = atoi(D_End);
            d = CheckDate2(m_e , d_e);
        }while(d != 1);


        do
        {
            if(atoi(end)<y_s)
            {
                setTextColor(12);
                printf("\n\n\a\tend date of the course can not be earlier than the start date of the course!!Try again...");
                setTextColor(7);
                goto SPRING;

                setTextColor(7);
            }
        if(atoi(end) == y_s)
        {
            yy = 1;
            if(m_s > m_e)
            {
                setTextColor(12);
                printf("\n\n\a\tend date of the course can not be earlier than the start date of the course!!Try again...");
                setTextColor(7);
                goto SPRING;
            }
            if(m_s == m_e)
            {
                yy = 1;
                mm = 1;
                if(d_s > d_e)
                {
                    setTextColor(12);
                    printf("\n\n\a\tend date of the course can not be earlier than the start date of the course!!Try again...");
                    setTextColor(7);
                    goto SPRING;
                }
                if(d_s == d_e)
                {
                    setTextColor(12);
                    printf("\n\n\a\tend date of the course cannot be equal to the start date of the course!!Try again...");
                    setTextColor(7);
                    goto SPRING;
                }
                else
                {
                    yy = 1;
                    mm = 1;
                    dd = 1;
                }
            }
            if(m_e > m_s)
            {
                yy = 1;
                mm = 1;
                dd = 1;
            }
        }
        if(atoi(end)>atoi(start))
        {
            yy = 1;
            mm = 1;
            dd = 1;
        }

        }while(yy == 0 || mm == 0 || dd == 0);




    int year , month , day;

    int remain ;

    year = y_e - y_s ;

    month = m_e - m_s ;

    day  = d_e - d_s ;

    remain = 365*year + day + 1;

    int j ;

    for(j = m_s ; j < m_e ; j++)
    {
        if(j<=6)
        {
            remain = remain + 31;
        }

        else if(j>6 && j<12)
        {
            remain = remain + 30;
        }
        else if(j==12)
        {
            remain = remain + 29;
        }
    }

    setTextColor(14);
    printf("\n\n\n\t\t\t\t\t\tBy considering today how many days you have opportunity? = %d",remain-1);//By considering today how many days you have opportunity?
    printf("\n\n\n\t\t\t\t\t\tBy Not considering today how many days you have opportunity? = %d",remain-2);
    printf("\n\n\n\t\t\t\t\t\tHow much time do you have? = %d",remain-1);
    printf("\n\n\n\t\t\t\t\t\tBy considering today How many days are you away from today? = %d",remain);
    setTextColor(10);
    printf("\n\n\n\t\t\t\t\t\t\t\t\tDecpoi\n\n\n\n\n\n\n");
    setTextColor(7);

    printf("\n\n\t\t\t\t\t\t\t    Enter 0 to return : ");



    char exi[1];
    setTextColor(11);
    gets(exi);
    setTextColor(7);
    if(strcmp(exi,"0")==0)
    {
        main();
    }



}
void timer(void)
{

        char time[8] ;
        int h,m,s;
        int p = 0 ; //CheckTime
        char M[3] , S[3] ;

        do
        {
            setTextColor(7);
            printf("\n\n\n\n\n\t\t\t\t\t\tEnter the Time(hh:mm:ss) : ");

            setTextColor(11);
            gets(time);

            setTextColor(7);




            do
            {
                if(time[8] != '\0')
                {
                    setTextColor(12);
                    printf("\n\n\a\tEnter the input format according to the instructions!! Try again...");
                    setTextColor(7);
                    printf("\t\t\t\t\t\tEnter the Time(hh:mm:ss) : ");
                    setTextColor(11);
                    gets(time);
                    setTextColor(7);
                }

            }while(time[8] != '\0');

            p = CheckTime(time);

        }while(p != 1);


    h = atoi(time);

    M[0] = time[3];
    M[1] = time[4];
    M[2] = '\0' ;
    S[0] = time[6];
    S[1] = time[7];
    S[2] = '\0' ;
    m = atoi(M);
    s = atoi(S);
    system("cls");
    for(h=h ; h>=0 ; h--)
    {
            for(m=m;m>=0;m--)
                {
                        for(s=s;s>=0;s--)
                            {
                                setTextColor(11);
                                printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t%02d",h);
                                setTextColor(7);
                                printf(":");
                                setTextColor(14);
                                printf("%02d",m);
                                setTextColor(7);
                                printf(":");
                                setTextColor(10);
                                printf("%02d\n\n\n\n\n\t\t\t\t\t\t\tDecpoi",s);
                                Sleep(1000);
                                system("cls");
                            }

                        s = 59 ;

                }

            m = 59 ;

    }

    setTextColor(11);
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t00");
    setTextColor(7);
    printf(":");
    setTextColor(14);
    printf("00");
    setTextColor(7);
    printf(":");
    setTextColor(10);
    printf("00\n\n\n\n\n\t\t\t\t\t\t\tDecpoi");
    setTextColor(7);
    int j;
    for(j=1 ; j<=15 ; j++)
    {
       Beep(750,800);
    }

    setTextColor(7);

    printf("\n\n\n\n\t\t\t\t\t\t\t    Enter 0 to Return : ");



    char exi[1];
    setTextColor(11);
    gets(exi);
    setTextColor(7);
    if(strcmp(exi,"0")==0)
    {
        main();
    }

}
void stopwatch(void)
{
    int h =0 ,m = 0,s = 0;
    for(h=0 ; h<1000 ; h++)
    {
            for(m=0;m<60;m++)
                {
                        for(s=0;s<60;s++)
                            {
                                setTextColor(11);
                                printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t%02d",h);
                                setTextColor(7);
                                printf(":");
                                setTextColor(14);
                                printf("%02d",m);
                                setTextColor(7);
                                printf(":");
                                setTextColor(10);
                                printf("%02d\n\n\n\n\n\t\t\t\t\t\t\tDecpoi",s);



                                Sleep(1000);
                                system("cls");
                            }

                        s = 0 ;

                }

            m = 0 ;

    }
}
void counter(void)
{
    fflush(stdin);
    int counter = 0;
    char c;

    while(1)
    {

        setTextColor(14);
        printf("\n\n\tPress 'y' button to increment the counter.\n\n\tPress 'n' button to decrement the counter\n\n\tPress '0' button to Return : ");
        setTextColor(11);
        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\tcounter : %d\n\n\n\n\n\t\t\t\t\t\t\t",counter);
        setTextColor(10);
        printf("Decpoi");
        c = getch();
        if(c == 'y' || c == 'Y')
        {
            counter++;
        }
        else if(c == 'n' || c == 'N')
        {
            counter--;
        }
        else
        {
            main();
        }

        system("cls");
    }
}

int CheckDate(char a[11])
{

    int sum = 0;
    do
    {
       if(a[0]<48 || a[0]>57)
        {
            setTextColor(12);
            printf("\n\n\a\tEnter the input format according to the instructions!! Try again...");
            return 0 ;
        }
        else if(a[1]<48 || a[1]>57)
        {
            setTextColor(12);
            printf("\n\n\a\tEnter the input format according to the instructions!! Try again...");
            return 0 ;
        }
        else if(a[2]<48 || a[2]>57)
        {
            setTextColor(12);
            printf("\n\n\a\tEnter the input format according to the instructions!! Try again...");
            return 0 ;
        }
        else if(a[3]<48 || a[3]>57)
        {
            setTextColor(12);
            printf("\n\n\a\tEnter the input format according to the instructions!! Try again...");
            return 0 ;
        }
        else if(a[4] != 47)
        {
            setTextColor(12);
            printf("\n\n\a\tEnter the input format according to the instructions!! Try again...");
            return 0 ;
        }
        else if(a[5]<48 || a[5]>57)
        {
            setTextColor(12);
            printf("\n\n\a\tEnter the input format according to the instructions!! Try again...");
            return 0 ;
        }
        else if(a[6]<48 || a[6]>57)
        {
            setTextColor(12);
            printf("\n\n\a\tEnter the input format according to the instructions!! Try again...");
            return 0 ;
        }
        else if(a[7] != 47)
        {
            setTextColor(12);
            printf("\n\n\a\tEnter the input format according to the instructions!! Try again...");
            return 0 ;
        }
        else if(a[8]<48 || a[8]>57)
        {
            setTextColor(12);
            printf("\n\n\a\tEnter the input format according to the instructions!! Try again...");
            return 0 ;
        }
        else if(a[9]<48 || a[9]>57)
        {
            setTextColor(12);
            printf("\n\n\a\tEnter the input format according to the instructions!! Try again...");
            return 0 ;
        }
        else
        {
            return 1 ;
            sum = 1 ;
        }
    }while(sum != 1);

}

int CheckDate2(int a,int b)
{
    int sum = 0 ;


    do
    {
        if(a == 1)
        {
            if(b<=0 || b>=32)
            {
                setTextColor(12);
                printf("\n\n\t\aJanuary is 31 days, please do not enter wrong number!!try again...");
                setTextColor(7);
                return 0;

            }
            else
            {
                sum = 1 ;
                return 1;
            }
        }
        else if(a==2)
        {
            if(b<=0 || b>=29)
            {
                setTextColor(12);
                printf("\n\n\t\aFebruary is 28 or 29 days, please do not enter wrong number!!try again...");
                setTextColor(7);
                return 0;
            }
            else
            {
                sum = 1 ;
                return 1;
            }
        }
        else if(a==3)
        {
            if(b<=0 || b>=32)
            {
                setTextColor(12);
                printf("\n\n\t\a March is 31 days, please do not enter wrong number!!try again...");
                setTextColor(7);
                return 0;
            }
            else
            {
                sum = 1 ;
                return 1;
            }

        }
        else if(a==4)
        {
            if(b<=0 || b>=31)
            {
                setTextColor(12);
                printf("\n\n\t\a April is 30 days, please do not enter wrong number!!try again...");
                setTextColor(7);
                return 0;
            }
            else
            {
                sum = 1 ;
                return 1;
            }
        }
        else if(a==5)
        {
            if(b<=0 || b>=32)
            {
                setTextColor(12);
                printf("\n\n\t\a May is 31 days, please do not enter wrong number!!try again...");
                setTextColor(7);
                return 0;
            }
            else
            {
                sum = 1 ;
                return 1;
            }
        }
        else if(a==6)
        {
            if(b<=0 || b>=31)
            {
                setTextColor(12);
                printf("\n\n\t\a June is 30 days, please do not enter wrong number!!try again...");
                setTextColor(7);
                return 0;
            }
            else
            {
                sum = 1 ;
                return 1;
            }
        }
        else if(a==7)
        {
            if(b<=0 || b>=32)
            {
                setTextColor(12);
                printf("\n\n\t\a July is 31 days, please do not enter wrong number!!try again...");
                setTextColor(7);
                return 0;
            }
            else
            {
                sum = 1 ;
                return 1;
            }
        }
        else if(a==8)
        {
            if(b<=0 || b>=32)
            {
                setTextColor(12);
                printf("\n\n\t\a August is 31 days, please do not enter wrong number!!try again...");
                setTextColor(7);
                return 0;
            }
            else
            {
                sum = 1 ;
                return 1;
            }
        }
        else if(a==9)
        {
            if(b<=0 || b>=31)
            {
                setTextColor(12);
                printf("\n\n\t\a September is 30 days, please do not enter wrong number!!try again...");
                setTextColor(7);
                return 0;
            }
            else
            {
                sum = 1 ;
                return 1;
            }
        }
        else if(a==10)
        {
            if(b<=0 || b>=32)
            {
                setTextColor(12);
                printf("\n\n\t\a October is 31 days, please do not enter wrong number!!try again...");
                setTextColor(7);
                return 0;

            }
            else
            {
                sum = 1 ;
                return 1;
            }
        }
        else if(a==11)
        {
            if(b<=0 || b>=31)
            {
                setTextColor(12);
                printf("\n\n\t\a November is 30 days, please do not enter wrong number!!try again...");
                setTextColor(7);
                return 0;
            }
            else
            {
                sum = 1 ;
                return 1;
            }
        }
        else if(a==12)
        {
            if(b<=0 || b>=32)
            {
                setTextColor(12);
                printf("\n\n\t\a December is 31 days, please do not enter wrong number!!try again...");
                setTextColor(7);
                return 0;
            }

            else
            {
                sum = 1;
                return 1;
            }
        }
        else if(a<1 || a>12)
        {
            setTextColor(12);
            printf("\n\n\t\aThe input for the months is incorrect, enter a number between 1 and 12. try again...");
            setTextColor(7);
            return 0;
        }


    }while(sum != 1);


}

int CheckTime(char a[8])
{

    int sum = 0;
    do
    {
       if(a[0]<48 || a[0]>57)
        {
            setTextColor(12);
            printf("\n\a\tEnter the input format according to the instructions!! Try again...");
            return 0 ;
        }
        else if(a[1]<48 || a[1]>57)
        {
            setTextColor(12);
            printf("\n\a\tEnter the input format according to the instructions!! Try again...");
            return 0 ;
        }

        else if(a[2] != 58)
        {
            setTextColor(12);
            printf("\n\a\tEnter the input format according to the instructions!! Try again...");
            return 0 ;
        }

        else if(a[3]<48 || a[3]>57)
        {
            setTextColor(12);
            printf("\n\a\tEnter the input format according to the instructions!! Try again...");
            return 0 ;
        }
        else if(a[4]<48 || a[4]>57)
        {
            setTextColor(12);
            printf("\n\a\tEnter the input format according to the instructions!! Try again...");
            return 0 ;
        }

        else if(a[5] != 58)
        {
            setTextColor(12);
            printf("\n\a\tEnter the input format according to the instructions!! Try again...");
            return 0 ;
        }

        else if(a[6]<48 || a[6]>57)
        {
            setTextColor(12);
            printf("\n\a\tEnter the input format according to the instructions!! Try again...");
            return 0 ;
        }
        else if(a[7]<48 || a[7]>57)
        {
            setTextColor(12);
            printf("\n\a\tEnter the input format according to the instructions!! Try again...");
            return 0 ;
        }


        else
        {
            return 1 ;
            sum = 1 ;
        }
    }while(sum != 1);

}


