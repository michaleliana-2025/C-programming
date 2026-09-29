#include <stdio.h>
int main()
{
    char empcode;
    {
        switch(empcode)
        {
            case 'M'{
                printf ("Manager\n");
                printf ("Enter your attendance(present absent leave holiday): ");

                int presentdays, absentdays, leavedays, holidaydays;
                scanf ("%d %d %d %d", &presentdays, &absentdays, &leavedays, &holidaydays);

                int Totaldays = presentdays + leavedays;
                int Monthdays =30;
                printf ("Total days: %d", Totaldays);
                printf ("Month days: %d", Monthdays);

                int BS= 40000;
                int DA = BS * 0.02;
                printf ("DA: %d", DA);

                int TA = BS * 0.01;
                printf ("TA: %d", TA);

                int HRA = BS * 0.05;
                printf ("HRA: %d", HRA);

                int TotalS = BS+DA+TA+HRA;
                printf ("Total Salary: %d", TotalS);
               break;
            }

        default:
            printf("Invalid Employee code\n");
    }
    
    }

   return 0;
}
