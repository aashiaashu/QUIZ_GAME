#include <stdio.h>
int main()
{
    int i;
    int ans1,ans2,ans3,ans4,ans5;
    int count =0;
    printf("Welcome to the Quiz Game \n\n");
    printf("> Press 7 to start the game \n");
    printf("> Press 0 to quit the game \n");
    scanf("%d",&i);
    if(i==7)
    {
        printf("The game has started\n\n");
    }
    else if(i==0)
    {
        printf("The game has ended\n\n");
    }
    else
    {
        printf("Invalid number\n\n");
    }
    if(i==7)
    {
        printf("1] Which one is the first search engine in internet?\n\n");
        printf("1) Google\n");
        printf("2) Archie\n");
        printf("3) Wais\n");
        printf("4) Altavista\n");
        printf("Enter your answer : \n");
        scanf("%d",&ans1);
        if(ans1==2)
        {
            printf("Correct answer\n");
            count++;
        }
        else
        {
            printf("Wrong answer\n");
            printf("Correct answer option is 2\n");
        }
        printf("2] Which is the first web browser invented in 1990?\n\n");
        printf("1) Internet Explorer\n");
        printf("2) Mosaic\n");
        printf("3) Mozilla\n");
        printf("4) Nexus\n");
        printf("Enter your answer : \n");
        scanf("%d",&ans2);
        if(ans2==4)
        {
            printf("Correct answer\n");
            count++;
        }
        else
        {
            printf("Wrong answer\n");
            printf("Correct answer option is 4\n");
        }
        printf("3] First computer virus is known as?\n\n");
        printf("1) Rabbit\n");
        printf("2) Creeper virus\n");
        printf("3) Elk Cloner\n");
        printf("4) SCA virus\n");
        printf("Enter your answer : \n");
        scanf("%d",&ans3);
        if(ans3==2)
        {
            printf("Correct answer\n");
            count++;
        }
        else
        {
            printf("Wrong answer\n");
            printf("Correct answer option is 2\n");
        }
        printf("4] Firewall in computer is ?\n\n");
        printf("1) Security\n");
        printf("2) Data tansmission\n");
        printf("3) Monitoring\n");
        printf("4) Authentication\n");
        printf("Enter your answer : \n");
        scanf("%d",&ans4);
        if(ans4==1)
        {
            printf("Correct answer\n");
            count++;
        }
        else
        {
            printf("Wrong answer\n");
            printf("Correct answer option is 1\n");
        }
        printf("5] Which of the folowing is a database managment software?\n\n");
        printf("1) mysql\n");
        printf("2) oracle\n");
        printf("3) cobal\n");
        printf("4) sybase\n");
        printf("Enter your answer : \n");
        scanf("%d",&ans5);
        if(ans5==3)
        {
            printf("Correct answer\n");
            count++;
        }
        else
        {
            printf("Wrong answer\n");
            printf("Correct answer option is 3\n");
        }
        printf("Each question holds the value of 5 points\n");
        printf("Your score is %d",5*count);
    }

    return 0;
}
