#include <stdio.h>
struct entry
{
    char name[50];
    int room;
    char out_time[10];
    char in_time[10];
    char purpose[60];
};
struct complaint
{
    char name[50];
    int room;
    int phone;
    char complaint[200];
};

struct entry en[100];
struct complaint com[100];
void entry(int a)
{

    printf("----Entry:---\n ");
    printf("Name: \n");
    scanf("%s", &en[a].name);

    printf("Room No. \n");
    scanf("%d", &en[a].room);

    printf("Out Time: \n");
    scanf("%s", &en[a].out_time);

    printf("Purpose: \n");
    scanf("%s", &en[a].purpose);

    printf("-----Entry Done----\n");
}
void display_entry(int i)
{

    printf("----Your Entry:---\n ");
    printf("Name: %s\n", en[i].name);

    printf("Room No. %d\n", en[i].room);

    printf("Out Time: %s\n", en[i].out_time);

    printf("Purpose: %s\n", en[i].purpose);
}
void Complaint(int x)
{
    int choice;
    printf("Enter Your Department Of Complaint:-\n");
    printf("1.Electrician\n");
    printf("2.Plumber\n");
    printf("3.Security\n");
    printf("4.Mess/Food\n");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        for (int i = 0; i < 1; i++)
        {
            printf("------Enter Your Details------\n");
            printf("Enter Your Name:\n");
            scanf("%s", &com[i].name);
            printf("Enter Your Room No.- \n");
            scanf("%d", &com[i].room);
            printf("Enter Your Phone No:\n");
            scanf("%d", &com[i].phone);
            printf("Enter Your Complaint:\n");
            scanf("%s", &com[i].complaint);

            break;
        }
        break;

    default:
        break;
    }
}
int display_com(int v)
{
    int num;
    printf("Enter Your Room No.:-\n");
    scanf("%d", &num);

    for (int i = 0; i < 1; i++)
    {
        if (num == com[i].room)
        {
            printf("-----Your Complaint-----\n");
            printf("%s", com[i].name);
            printf("%d", com[i].room);
            printf("%d", com[i].phone);
            printf("%s", com[i].complaint);
        }
    }
}
int main()
{
    int n, x;
    char choice;

    int arr[100];
start:
    printf("Enter You Choice: \n");
    printf("1. Fill out time\n");
    printf("2. in time\n");
    printf("3. Fill a complaint (plumber electrician food etc.)\n");
    printf("4. nihgt out pass\n");
    printf("5. Day out pass\n");
    printf("6. To Exit\n");
    scanf("%d", &n);

    switch (n)
    {
    case 1:
        for (int i = 0; i < 1; i++)
        {
        choice:

            entry(i);
            display_entry(i);
            printf("Do You Wish To Rewrite Your Entry?: Y for yes or N for no\n");
            scanf(" %c", &choice);
            if (choice == 'Y' || choice == 'y')
            {
                goto choice;
            }
            else if (choice == 'N' || choice == 'n')
            {
                goto start;
            }
            else
            {
                printf("Enter a Valid Character\n");
            }

            break;
        }

        break;
    case 2:
        for (int i = 0; i < 1; i++)
        {
            printf("Enter your Room No.: \n");
            scanf("%d", &x);

            for (int j = 0; j < 1; j++)
            {
                if (x == en[j].room)
                {
                    display_entry(j);
                    printf("Enter Your In-Time: ");
                    scanf("%s", &en[j].in_time);
                    goto start;
                    break;
                }
            }
        }

        break;
    case 3:
        for (int j = 0; j < 1; j++)
        {
            Complaint(j);
            display_com(j);
            break;
        }

        break;
    // case 4:
    // entry();
    // break;
    // case 5:
    // entry();
    // break;
    case 6:
        return 0;
        break;
    }

    return 0;
}