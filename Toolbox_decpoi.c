//decpoi is here...
#include<stdio.h>
#include<conio.h>
#include<Windows.h>
#include<time.h>
void darsad(void);
void moaadel(void);
void rooz(void);
void timer(void);
void cornometter(void);
void shomarande(void);
void game(void);
void af(void);
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
    printf("\n\n\n\tlotfan ye adad vared kon : \n\n\n");
    setTextColor(11);
    printf("\t\t\t1.");
    setTextColor(7);
    printf("darsad giri\n\n\n");
    setTextColor(11);
    printf("\t\t\t2.");
    setTextColor(7);
    printf("mohasebe moaadel\n\n\n");
    setTextColor(11);
    printf("\t\t\t3.");
    setTextColor(7);
    printf("mohasebe rooz\n\n\n");
    setTextColor(11);
    printf("\t\t\t4.");
    setTextColor(7);
    printf("timer\n\n\n");
    setTextColor(11);
    printf("\t\t\t5.");
    setTextColor(7);
    printf("cornometter\n\n\n");
    setTextColor(11);
    printf("\t\t\t6.");
    setTextColor(7);
    printf("shomarande\n\n\n");
    setTextColor(11);
    printf("\t\t\t7.");
    setTextColor(7);
    printf("bazi\n\n\n");
    setTextColor(11);
    setTextColor(11);
    printf("\t\t\t8.");
    setTextColor(7);
    printf("A(LOVE)F\n\n\n");
    setTextColor(11);
    printf("\t\t\t0.");
    setTextColor(7);
    printf("exit\n\n\n");
    printf("\t\t\t\t\tentekhabe man : ");
    setTextColor(11);
    gets(answer);
    if(strcmp(answer,"1")==0)
    {
        system("cls");
        darsad();
    }
    else if(strcmp(answer,"2")==0)
    {
        system("cls");
        moaadel();
    }
    else if(strcmp(answer,"3")==0)
    {
        system("cls");
        rooz();
    }
    else if(strcmp(answer,"4")==0)
    {
        system("cls");
        timer();
    }
    else if(strcmp(answer,"5")==0)
    {
        system("cls");
        cornometter();
    }
    else if(strcmp(answer,"6")==0)
    {
        system("cls");
        shomarande();
    }
    else if(strcmp(answer,"7")==0)
    {
        system("cls");
        game();
    }
    else if(strcmp(answer,"8")==0)
    {
       system("cls");
       af();
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
void darsad(void)
{
    setTextColor(7);
    float dorost , ghalat , nazade , kol ;


    printf("\n\n\n\n\tchand soaale? : ");
    setTextColor(11);
    scanf("%f",&kol);
    setTextColor(7);
    printf("\n\n\n\n\tchand ta dorost? : ");
    setTextColor(11);
    scanf("%f",&dorost);
    setTextColor(7);
    printf("\n\n\n\n\tchand ta ghalat? : ");
    setTextColor(11);
    scanf("%f",&ghalat);
    setTextColor(14);

    float darsad;

    darsad = (((dorost * 3) - (ghalat)) / (3*kol)) * 100 ;

    printf("\n\n\n\n\t\t\t\t\t\t\tdarsad = %4.2f%% ",darsad);
    setTextColor(10);
    printf("\n\n\n\n\t\t\t\t\t\t\t    A(LOVE)F");
    setTextColor(7);
    printf("\n\n\n\n\t\t\t\t\t\t\t    baraye bargasht 0 ro vared kon : ");

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
void moaadel(void)
{
    printf("\n\n\n   tedad dars : ");

    int number;

    setTextColor(10);

    scanf("%d",&number);

    int counter;

    float nomre[number] , vahed[number] ;

    //JAME ZARAYEB
    float sum = 0;

    //SOORATE KASR
    float sum2 = 0;

    setTextColor(7);

    for(counter = 0 ; counter <= number - 1 ; counter++)
    {
         setTextColor(14);

        printf("\n\n\t%dth nomre ra vared kon : ",counter+1);

        setTextColor(11);

        scanf("%f",&nomre[counter]);

        setTextColor(7);

        printf("\n\n\t%dth vahed dars : ",counter+1);

        setTextColor(11);

        scanf("%f",&vahed[counter]);

        setTextColor(7);

        sum = sum + vahed[counter];

        sum2 = sum2 + (nomre[counter]*vahed[counter]) ;
    }

    float avg =(float)(sum2 / sum);

    setTextColor(10);

    system("cls");

    printf("\n\n\n\n\n\t\t\t\t\t**********   avg = %2.2f   **********\n\n\n\n\n",avg);

    setTextColor(7);

    getchar();
    printf("\n\n\n\n\t\t\t\t\t\t\t    baraye bargasht 0 ro vared kon : ");

    char exi[1];
    setTextColor(11);
    gets(exi);
    setTextColor(7);
    if(strcmp(exi,"0")==0)
    {
        main();
    }

}
void rooz(void)
{
    setTextColor(7);
    printf("\n\n\n\n\trooze shoroo ro vared kon : ");

    char start[10];
    setTextColor(11);
    gets(start);
    setTextColor(7);

    int y_s , m_s , d_s;

    y_s = atoi(start);

    char M_S[3] , D_S[3] ;

    M_S[0] = start[5];
    M_S[1] = start[6];
    M_S[2] = '\0';
    D_S[0] = start[8];
    D_S[1] = start[9];
    D_S[2] = '\0';

    m_s = atoi(M_S);
    d_s = atoi(D_S);

    char end[10];

    printf("\n\n\n\n\trooze payan ro vared kon : ");

    setTextColor(11);
    gets(end);
    setTextColor(7);

    int y_e , m_e , d_e;

    y_e = atoi(end);

    char M_E[3] , D_E[3] ;

    M_E[0] = end[5];
    M_E[1] = end[6];
    M_E[2] = '\0';
    D_E[0] = end[8];
    D_E[1] = end[9];
    D_E[2] = '\0';

    m_e = atoi(M_E);
    d_e = atoi(D_E);

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
    printf("\n\n\n\t\t\t\t\t\tba emrooz chand rooz forsat ast? = %d",remain-1);
    printf("\n\n\n\t\t\t\t\t\tbi emrooz chand rooz forsat ast? = %d",remain-2);
    printf("\n\n\n\t\t\t\t\t\tchand rooz dige ast? = %d",remain-1);
    printf("\n\n\n\t\t\t\t\t\tba emrooz chand rooz moonde? = %d",remain);
    setTextColor(10);
    printf("\n\n\n\t\t\t\t\t\t\t\t\tA(LOVE)F\n\n\n\n\n\n\n");
    setTextColor(7);

    printf("\n\n\n\n\t\t\t\t\t\t\t    baraye bargasht 0 ro vared kon : ");



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
    setTextColor(14);
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\ttime ro vared kon(hh:mm:ss) : ");
    char time[8];
    setTextColor(11);
    gets(time);
    setTextColor(7);
    int h,m,s;
    h = atoi(time);
    char M[3] , S[3] ;
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
                                printf("%02d\n\n\n\n\n\t\t\t\t\t\t\tA(LOVE)F",s);
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
    printf("00\n\n\n\n\n\t\t\t\t\t\t\tA(LOVE)F");
    setTextColor(7);
    int j;
    for(j=1 ; j<=15 ; j++)
    {
       Beep(750,800);
    }

    setTextColor(7);

    printf("\n\n\n\n\t\t\t\t\t\t\t    baraye bargasht 0 ro vared kon : ");



    char exi[1];
    setTextColor(11);
    gets(exi);
    setTextColor(7);
    if(strcmp(exi,"0")==0)
    {
        main();
    }

}
void cornometter(void)
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
                                printf("%02d\n\n\n\n\n\t\t\t\t\t\t\tA(LOVE)F",s);
                                printf("\n\n\n\n\t\t\t\t\t\t\t    baraye bargasht 0 ro vared kon : ");


                                Sleep(1000);
                                system("cls");
                            }

                        s = 0 ;

                }

            m = 0 ;

    }
}
void shomarande(void)
{
    int counter = 0;
    char c;

    while(1)
    {

        setTextColor(14);
        printf("\n\n\t'y' ro bezan bara afzayesh , baraye bazgasht 0 : ");
        setTextColor(11);
        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\tcounter : %d\n\n\n\n\n\t\t\t\t\t\t\t",counter);
        setTextColor(10);
        printf("A(LOVE)F");
        c = getch();
        if(c == 'y')
        {
            counter++;
        }
        else
        {
            main();
        }

        system("cls");
    }
}
void game(void)
{
    setTextColor(7);
    void clrscr();

    int i,j;
    char z;
    int x;
    char a[3][3];
    clrscr();
     // z baraie Y or N
    //randomize();
    x=rand()   ;
    x= ((x)%2);

        printf( "+------------------------------------------------------------------------------+\r");
        printf( "| PROJECT NAME: DOOZ |\r");
        printf( "+------------------------------------------------------------------------------+ \r\n");


    a[0][0]='1'; a[0][1]='2';a[0][2]='3';
    a[1][0]='4'; a[1][1]='5';a[1][2]='6';
    a[2][0]='7'; a[2][1]='8';a[2][2]='9';
    //
    setTextColor(14);
    printf("shoroo random : ");
    if (x==0)
     { printf ("Computer bayad shoroo kone...");   }
    else
     { printf ("to bayad shoroo koni...");      }

    setTextColor(11);
    printf ("\r\n\n to      :O \r\n computer :X \r\n");

    setTextColor(7);
    printf("\n 1 ro vared kon ta bazi shoroo beshe");
    setTextColor(11);
      getche();

    while(x!=2) //     +++++++++++++++ halgheie koli +++++++++++++++++++++
    {  //while

    if(x==0)
    {//if 1
    x=1;

    //win?
    setTextColor(14);
    for (i=0; i<3 ; i++)
    {
        if  (a[i][0]=='O' && a[i][1]=='O' && a[i][2]=='O')

          {  printf("\n	to bordi !");
             getche();                   }
    }
    //
    setTextColor(14);
    for (i=0; i<3 ; i++)
    {
       if  (a[0][i]=='O' && a[1][i]=='O' && a[2][i]=='O')

          {  printf("\n	to bordi !");
            getche();                        }
    }
    //
    setTextColor(14);
    if ( (a[0][0]=='O' && a[1][1]=='O' && a[2][2]=='O') || (a[0][2]=='O' && a[1][1]=='O' && a[2][0]=='O') )

    {  printf("\n	to bordi !");
      getche();                        }



    //win 1 !!

      else if (a[0][0]=='X' && a[0][1]=='X' && a[0][2]=='3')
      a[0][2]='X';
      else if (a[0][0]=='X' && a[0][2]=='X' && a[0][1]=='2')
      a[0][1]='X';
      else if (a[0][0]=='X' && a[1][0]=='X' && a[2][0]=='7')
      a[2][0]='X';
      else if (a[0][0]=='X' && a[2][0]=='X' && a[1][0]=='4')
      a[1][0]='X';
      else if (a[0][0]=='X' && a[1][1]=='X' && a[2][2]=='9')
      a[2][2]='X';



      else if (a[0][2]=='X' && a[0][1]=='X' && a[0][0]=='1')
      a[0][0]='X';
      else if (a[0][2]=='X' && a[1][1]=='X' && a[2][0]=='7')
      a[2][0]='X';
      else if (a[0][2]=='X' && a[1][2]=='X' && a[2][2]=='9')
      a[2][2]='X';
      else if (a[0][2]=='X' && a[2][2]=='X' && a[1][2]=='6')
      a[1][2]='X';


      else if (a[2][0]=='X' && a[1][0]=='X'&& a[0][0]=='1')
      a[0][0]='X';
      else if (a[2][0]=='X' && a[2][1]=='X' && a[2][2]=='9')
      a[2][2]='X';
      else if (a[2][0]=='X' && a[2][2]=='X' && a[2][1]=='8')
      a[2][1]='X';
      else if (a[2][0]=='X' && a[1][1]=='X' && a[0][2]=='3')
      a[0][2]='X';


      else if (a[2][2]=='X' &&  a[1][2]=='X'&& a[0][2]=='3')
      a[0][2]='X';
      else if (a[2][2]=='X' && a[2][1]=='X' && a[2][0]=='7')
      a[2][0]='X';
      else if (a[2][2]=='X' && a[1][1]=='X' && a[0][0]=='1')
      a[0][0]='X';

    //win 2 !!

    else if (a[1][2]=='X' && a[1][1]=='X' && a[1][0]=='4')
      a[1][0]='X';

    else if (a[1][0]=='X' && a[1][1]=='X' && a[1][2]=='6')
      a[1][2]='X';

    else if (a[0][1]=='X' && a[1][1]=='X' && a[2][1]=='8')
      a[2][1]='X';

    else if (a[2][1]=='X' && a[1][1]=='X' && a[0][1]=='2')
      a[0][1]='X';


    //best
    else if (a[1][1]=='5')
    a[1][1]='X';

    //anti lose !!
    else if ( (a[0][1]=='O' && a[0][2]=='O' && a[0][0]=='1') ||(a[2][2]=='O' && a[1][1]=='O' && a[0][0]=='1')|| (a[1][0]=='O' && a[2][0]=='O' && a[0][0]=='1') )
      a[0][0]='X';

    else if ( (a[0][0]=='O' && a[0][2]=='O' && a[0][1]=='2') || (a[1][1]=='O' && a[2][1]=='O' && a[0][1]=='2') )
      a[0][1]='X';

    else if ( (a[1][2]=='O' && a[2][2]=='O' && a[0][2]=='3') || (a[2][0]=='O' && a[1][1]=='O' && a[0][2]=='3') || (a[0][0]=='O' && a[0][1]=='O' && a[0][2]=='3') )
      a[0][2]='X';

    else if ( (a[0][0]=='O' && a[2][0]=='O' && a[1][0]=='4') ||(a[1][2]=='O' && a[1][1]=='O' && a[1][0]=='4'))
      a[1][0]='X';

    else if ( (a[1][1]=='O' && a[1][0]=='O' && a[1][2]=='6') ||(a[0][2]=='O' && a[2][2]=='O' && a[1][2]=='6') )
      a[1][2]='X';

    else if ( (a[0][0]=='O' && a[1][0]=='O' && a[2][0]=='7') ||(a[0][2]=='O' && a[1][1]=='O' && a[2][0]=='7') || (a[2][2]=='O' && a[2][1]=='O' && a[2][0]=='7') )
      a[2][0]='X';

    else if ( (a[0][1]=='O' && a[1][1]=='O' && a[2][1]=='8') || (a[2][2]=='O' && a[2][0]=='O' && a[2][1]=='8') )
      a[2][1]='X';

    else if ( (a[0][0]=='O' && a[1][1]=='O' && a[2][2]=='9')||(a[0][2]=='O' && a[1][2]=='O' && a[2][2]=='9')||(a[0][0]=='O' && a[2][1]=='O' && a[2][2]=='9'))
      a[2][2]='X';


    //better 1
    else if (a[2][2]=='9' && a[0][0]=='1')
    a[2][2]='X';
    else if (a[2][0]=='7' && a[0][2]=='3')
    a[2][0]='X';

    //better 2
    else if (a[1][0]=='4' && a[1][2]=='6')
    a[1][0]='X';
    else if (a[0][1]=='2' && a[2][1]=='8')
    a[0][1]='X';

    //normal 1
    else if (a[2][2]=='9')
    a[2][2]='X';
    else if (a[0][0]=='1')
    a[0][0]='X';
    else if (a[0][2]=='3')
    a[0][2]='X';
    else if (a[2][0]=='7')
    a[2][0]='X';

    //normal 2
    else if (a[0][1]=='2')
    a[0][1]='X';
    else if (a[1][2]=='6')
    a[1][2]='X';
    else if (a[2][1]=='8')
    a[2][1]='X';
    else if (a[1][0]=='4')
    a[1][0]='X';


    else
    {//else tt
    printf("\n  mosavi shod !! \n ") ;
    z='8';
    }//else tt

    //END GAME =====================================================================
    while (z=='8')
    {//bigin while
    printf("\n dobare bazi konim?(Y/N)\r");
    z=getche();

    if (z=='y' || z=='Y')
             {//==================
              clrscr();
              a[0][0]='1'; a[0][1]='2';a[0][2]='3';
              a[1][0]='4'; a[1][1]='5';a[1][2]='6';
              a[2][0]='7'; a[2][1]='8';a[2][2]='9';
              setTextColor(14);
              printf("ki shoroo konande bashe? \n 1.computer . \n 2.khodam \n 3.random") ;
              z=getche();
              if (z=='1')
              x=0;
              else if (z=='2')
              x=1;
              else if (z=='3')
              {
               //randomize ();
               x=rand()   ;
               x= ((x)%2);
              }
              else
                 {
                     setTextColor(7);
                     printf ("\r\n\n '\a'  dobare emtehan kon (press 1 or 2 or 3) ! \r\n\n");   z='8';   }
              } //=================

    else if (z=='n' || z=='N')
    main();

    else
                 {printf("\r\n\n \a dobare emtehan kon! ( press Y or N) \r\n\n");
                 z='8';             }

    }//end while
    setTextColor(7);

    //==============================================================================

    }//if 1


    //
    clrscr();
    printf ("\n\n") ;
    printf ("        |        |          \r\n") ;; setTextColor(7); printf("    %c   |    %c   |   %c      \r\n",a[0][0],a[0][1],a[0][2]) ;
    printf ("        |        |          \r\n") ;
    printf ("  ______|________|______    \r\n") ;
    setTextColor(14);
    printf ("        |        |          \r\n") ;
    printf ("        |        |          \r\n") ;
    printf("    %c   |    %c   |   %c      \r\n",a[1][0],a[1][1],a[1][2]) ;
    printf ("        |        |          \r\n") ;
    printf ("  ______|________|______    \r\n") ;
    setTextColor(11);
    printf ("        |        |          \r\n") ;
    printf ("        |        |          \r\n") ;
    printf("    %c   |    %c   |   %c      \r\n",a[2][0],a[2][1],a[2][2]) ;
    printf ("        |        |          \r\n") ;
    //
    setTextColor(7);
    if (x==1)
    { //if 2
    x=0;


    for (i=0; i<3 ; i++)
    {
    if  (a[i][0]=='X' && a[i][1]=='X' && a[i][2]=='X')

    {

    printf("\n  bakhti !");
         z='8';                    }
    }

    for (i=0; i<3 ; i++)
    {
    if  (a[0][i]=='X' && a[1][i]=='X' && a[2][i]=='X')

    {  printf("\n bakhti !");
          z='8';                    }
    }

    if ( (a[0][0]=='X' && a[1][1]=='X' && a[2][2]=='X') || (a[0][2]=='X' && a[1][1]=='X' && a[2][0]=='X') )

    {  printf("\n bakhti !");
       z='8';                     }


    if (z!='8')
    {//start if vared kardan

    char e;
    e=getche();

    //////  agar tamame khaneha zad e shode boodand
    if  ( a[0][0]!='1' && a[0][1]!='2' && a[0][2]!='3' && a[1][0]!='4' && a[1][1]!='5' && a[1][2]!='6' && a[2][0]!='7' && a[2][1]!='8' && a[2][2]!='9')
    { z='8';            }
    //////-----------------------------------------


    //vared kardane shomare
    else if (e=='1' && a[0][0]!='X' && a[0][0]!='O' )
    a[0][0]='O';

    else if (e=='2' && a[0][1]!='X' && a[0][1]!='O' )
    a[0][1]='O';

    else if (e=='3' && a[0][2]!='X' && a[0][2]!='O' )
    a[0][2]='O';

    else if (e=='4' && a[1][0]!='X' && a[1][0]!='O' )
    a[1][0]='O';

    else if (e=='5' && a[1][1]!='X' && a[1][1]!='O' )
    a[1][1]='O';

    else if (e=='6' && a[1][2]!='X' && a[1][2]!='O' )
    a[1][2]='O';

    else if (e=='7' && a[2][0]!='X' && a[2][0]!='O' )
    a[2][0]='O';

    else if (e=='8' && a[2][1]!='X' && a[2][1]!='O' )
    a[2][1]='O';

    else if (e=='9' && a[2][2]!='X' && a[2][2]!='O' )
    a[2][2]='O';

    else
    {  printf("\n  \a 2 bare talash kon");   x=1 ; }
    }//end if vared kardan
    }//if 2
    }//while
    return 0;
    }

    void clrscr(){
    system("cls");
    }

void af(void)
{
    setTextColor(10);
    printf("\n\n\n\n\t\t\tye adad vared kon : ");

    int number;
    setTextColor(11);
    scanf("%d",&number);
    setTextColor(7);
    number++;

    int num;

    num = number;

    int i , j , k;
    printf("\n\n\n");

            setTextColor(12);
            //new
            int size = number/2;

            for (int x = 0; x < size; x++)
            {
                for (int y = 0; y <= 4*size; y++)
                {
                    double dist1 = sqrt(pow(x - size, 2) + pow(y - size, 2));
                    double dist2 = sqrt(pow(x - size, 2) + pow(y - 3*size, 2));

                    if (dist1 < size + 0.5 || dist2 < size + 0.5) {
                        printf("*");
                    }
                    else {
                        printf(" ");
                    }
                }
                printf("\n");
            }
            for (int x = 1; x < 2*size; x++)
            {
                for (int y = 0; y < x; y++) {
                    printf(" ");
                }


                for (int y = 0; y < 4*size + 1 - 2*x; y++) {
                    printf("*");
                }

                printf("\n");
            }

               for(k=1;k<=number-1;k++)
                {
                    printf(" ");
                    if(k==number-1 && number%2==0)
                    {
                        printf(" ");
                    }
                }


            printf("*\n");
    //new
    for(i=1 ; i<=num ; i++)
    {
        setTextColor(14);
        printf(" ");
        if(i==num)
        {
            if(num == number)
            {
                printf("\b*");
            }
            else
            {
                printf("*");

                    if(number - num - ((number/2)-1) != 0)
                    {
                      for(j=1 ; j<=2*(number - num)-1 ; j++)
                        {
                            printf(" ");
                        }
                    }
                    else
                    {
                        for(j=1 ; j<=2*(number - num)-1 ; j++)
                        {
                            printf("*");
                        }
                    }



                printf("*");
            }

            for(i=1 ; i<=num ; i++)
            {
                printf(" ");
            }

            setTextColor(11);
            if(num == number)
            {
                for(k=1 ; k<=num ; k++)
                {
                    printf("*");
                }
            }
            else if(number/2 + 1 == num)
            {
                for(k=1 ; k<=number/2 + 3 ; k++)
                {
                    printf("*");
                }
            }
            else
            {
                printf("*");
            }
            setTextColor(7);

            printf("\n");
            num--;
            i=1;
        }

    }
    getchar();
    setTextColor(7);

    printf("\n\n\n\n\t\t\t\t\t\t\t    baraye bargasht 0 ro vared kon : ");



    char exi[1];
    setTextColor(11);
    gets(exi);
    setTextColor(7);
    if(strcmp(exi,"0")==0)
    {
        main();
    }

}

