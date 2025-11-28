#include <stdio.h>
#include <string.h>

int choice;

struct entry // structure For Entry
{
    char name[50];
    int room;
    char out_time[10];
    char in_time[10];
    char purpose[60];
};

struct complaint // Structure for Complaint
{
    char name[50];
    int room;
    long long phone;
    char complaint[200];
};

struct entry en[100];      // Structured Array for multiple Entries
struct complaint com[100]; // Structured Array For Multiple Complaints
void entry(int a)          // Function For Getting Entry
{

    printf("\n\n----Entry:---\n\n");
    printf("Name:\n");
    fgets(en[a].name, sizeof(en[a].name), stdin);
    en[a].name[strcspn(en[a].name, "\n")] = '\0'; // For UI From CHatGpt

    printf("Room No. \n");
    scanf("%d", &en[a].room);
    getchar();

    printf("Out Time: \n");
    fgets(en[a].out_time, sizeof(en[a].out_time), stdin);
    en[a].out_time[strcspn(en[a].out_time, "\n")] = '\0';

    printf("Purpose: \n");
    fgets(en[a].purpose, sizeof(en[a].purpose), stdin);
    en[a].purpose[strcspn(en[a].purpose, "\n")] = '\0';

    printf("\n\n-----Entry Done----\n\n");
}
void display_entry(int i) // Function For Displaying Entry If Someone Want to Make Changes
{

    printf("\n\n----Your Entry:---\n\n");

    printf("Name: %s\n", en[i].name);

    printf("Room No. %d\n", en[i].room);

    printf("Out Time: %s\n", en[i].out_time);

    printf("Purpose: %s\n\n\n", en[i].purpose);
}
void Complaint(int x) // Function For Taking Complaints
{

    printf("\n\n\nEnter Your Department Of Complaint:-\n\n");
    printf("1.Electrician\n");
    printf("2.Plumber\n");
    printf("3.Security\n");
    printf("4.Mess/Food\n");
    scanf("%d", &choice);
    switch (choice) // Switch Case For Different Departments
    {
    case 1:
        for (int i = 0; i < 100; i++)
        {
            getchar();
            printf("\n------Enter Your Details------\n");
            printf("Enter Your Name:\n");
            fgets(com[i].name, sizeof(com[i].name), stdin);
            com[i].name[strcspn(com[i].name, "\n")] = '\0';
            printf("Enter Your Room No.- \n");
            scanf("%d", &com[i].room);
            getchar();
            printf("Enter Your Phone No:\n");
            scanf("%lld", &com[i].phone);
            getchar();
            printf("Enter Your Complaint:\n");
            fgets(com[i].complaint, sizeof(com[i].complaint), stdin);
            com[i].complaint[strcspn(com[i].complaint, "\n")] = '\0';
        }

        break;
    case 2:
        for (int i = 0; i < 100; i++)
        {

            printf("\n------Enter Your Details------\n");
            printf("Enter Your Name:\n");
            fgets(com[i].name, sizeof(com[i].name), stdin);
            com[i].name[strcspn(com[i].name, "\n")] = '\0';
            printf("Enter Your Room No.- \n");
            scanf("%d", &com[i].room);
            getchar();
            printf("Enter Your Phone No:\n");
            scanf("%lld", &com[i].phone);
            getchar();
            printf("Enter Your Complaint:\n");
            fgets(com[i].complaint, sizeof(com[i].complaint), stdin);
            com[i].complaint[strcspn(com[i].complaint, "\n")] = '\0';
        }
        break;
    case 3:
        for (int i = 0; i < 100; i++)
        {
            getchar();
            printf("\n------Enter Your Details------\n");
            printf("Enter Your Name:\n");
            fgets(com[i].name, sizeof(com[i].name), stdin);
            com[i].name[strcspn(com[i].name, "\n")] = '\0';
            printf("Enter Your Room No.- \n");
            scanf("%d", &com[i].room);
            getchar();
            printf("Enter Your Phone No:\n");
            scanf("%lld", &com[i].phone);
            getchar();
            printf("Enter Your Complaint:\n");
            fgets(com[i].complaint, sizeof(com[i].complaint), stdin);
            com[i].complaint[strcspn(com[i].complaint, "\n")] = '\0';
        }
        break;
    case 4:
        for (int i = 0; i < 100; i++)
        {
            getchar();
            printf("\n------Enter Your Details------\n");
            printf("Enter Your Name:\n");
            fgets(com[i].name, sizeof(com[i].name), stdin);
            com[i].name[strcspn(com[i].name, "\n")] = '\0';
            printf("Enter Your Room No.- \n");
            scanf("%d", &com[i].room);
            getchar();
            printf("Enter Your Phone No:\n");
            scanf("%lld", &com[i].phone);
            getchar();
            printf("Enter Your Complaint:\n");
            fgets(com[i].complaint, sizeof(com[i].complaint), stdin);
            com[i].complaint[strcspn(com[i].complaint, "\n")] = '\0';
        }
        break;

    default:
        break;
    }
}
int display_com(int v) // Display Complaint In-Case Anyone Want To Make Changes
{
    int num;
    printf("Enter Your Room No.:-\n");
    scanf("%d", &num);
    int i = 0;
    for (; i < 100; i++)
    {
        if (num == com[i].room)
        {
            printf("-----Your Complaint-----\n");
            printf("%s\n", com[i].name);
            printf("%d\n", com[i].room);
            printf("%lld\n", com[i].phone);
            printf("%s\n", com[i].complaint);
        }
    }
    printf("\n----Your Complaint:---\n ");

    if (choice == 1)
    {
        printf("Department: Electrician\n");
    }
    else if (choice == 2)
    {
        printf("Department: Plumber\n");
    }
    else if (choice == 3)
    {
        printf("Department: Security\n");
    }
    else
    {
        printf("Department: Mess/Food\n");
    }
    printf("Name: %s\n", com[i].name);

    printf("Room No. %d\n", com[i].room);

    printf("Phone No.: %lld\n", com[i].phone);

    printf("Complaint: %s\n", com[i].complaint);
    return 0;
}
int main()
{
    int n, x, entry_count = 0;
    char choice1, choice_comp;
    char name[50];

    int arr[100];
start:
    printf("\n====Enter You Choice====\n\n");
    printf("1. Fill out time\n");
    printf("2. In time\n");
    printf("3. Fill a complaint (Plumber,Electrician,Food etc.)\n");
    // printf("4. nihgt out pass\n");
    // printf("5. Day out pass\n");
    printf("4. To Exit\n\n");
    scanf("%d", &n);
    getchar();

    switch (n)
    {
    case 1:
    {
        int i = entry_count;
    choice:

        entry(i);
        display_entry(i);

    line:
        printf("Do You Wish To Rewrite Your Entry?: Y for yes or N for no\n");
        scanf(" %c", &choice1);
        if (choice1 == 'Y' || choice1 == 'y')
        {
            getchar(); // fix yes choice
            goto choice;
        }
        else if (choice1 == 'N' || choice1 == 'n')
        {
            printf("\n\nYour Entry is Registered\n\n");
            entry_count++;
            goto start;
        }
        else
        {
            printf("Enter a Valid Character\n");
            goto line;
        }
    }
    break;
    case 2:
        for (int i = 0; i < 100; i++)
        {

            printf("Enter Your Name: \n");
            fgets(name, sizeof(name), stdin);
            name[strcspn(name, "\n")] = '\0';

            printf("Enter your Room No.: \n");
            scanf("%d", &x);
            getchar();

            for (int j = 0; j < entry_count; j++)
            {
                if (x == en[j].room && strcmp(name, en[j].name) == 0)

                {
                    display_entry(j);
                    printf("Enter Your In-Time: ");
                    fgets(en[j].in_time, sizeof(en[j].in_time), stdin);
                    printf("\n\n---Your Entry is Registered---\n\n");
                    goto start;
                    break;
                }
            }
            printf("\n\n!!NO ENTRY FOUND!!\n\n");
        }

        break;
    case 3:
        for (int j = 0; j < 100; j++)
        {
        choice_comp:
            Complaint(j);
            display_com(j);
            printf("Do You Wish To Rewrite Your Entry?: Y for yes or N for no\n");
            scanf(" %c", &choice_comp);
            if (choice_comp == 'Y' || choice_comp == 'y')
            {
                goto choice_comp;
            }
            else if (choice_comp == 'N' || choice_comp == 'n')
            {
                printf("Your Complaint Is Registered\n\n");
                goto start;
            }
            else
            {
                printf("Enter a Valid Character\n");
            }
            break;
        }

        break;

    case 4:
        printf("\n\nExiting The Program.\n\nGood Bye!\n\n");
        return 0;
        break;
    default:
        printf("XX------Enter a Valid Choice------XX \n");
        goto start;
    }

    return 0;
}