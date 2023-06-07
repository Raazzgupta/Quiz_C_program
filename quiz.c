#include <stdio.h>

int main()
{

    int i;
    int ans1, ans2, ans3, ans4, ans5, ans6;
    int point1, point2, point3, point4, point5, point6;
    int wrong_point1, wrong_point2, wrong_point3, wrong_point4, wrong_point5, wrong_point6;

    printf("Welcome to the quiz...\n\n");
    printf("Press 1 to start game.....\n");
    printf("Press 0 to quit game.....\n");
    scanf("%d", &i);

    if (i == 1)
    {
        printf("The quiz has started\n\n");
    }
    else if (i == 0)
    {
        printf("The quiz has ended....\n\n");
    }
    else
    {
        printf("Invalid Input!!!!!!\n");
    }
    if (i == 1)
    {
        //....................Question 1...............

        printf("Q1) What is the full form of RAM?\n\n ");
        printf("1.) Read Access Memory.\n");
        printf("2.) Read only Memory.\n");
        printf("3.) Read And Memory.\n");
        printf("4.) Reaccess admin Memory\n\n");
        printf("Enter Your Answer\n");
        scanf("%d", &ans1);

        if (ans1 == 1)
        {
            printf("Correct Answer\n");
            point1 = 5;
            printf("You have scored %d point\n\n", point1);
        }
        else
        {
            printf("Wrong Answer");
            wrong_point1 = 0;
            printf("Your Answer is Wrong. You have scored %d point\n", wrong_point1);
        }

        //..............Question 2.............

        printf("Q2) What is the full form of ROM?\n\n ");
        printf("1.) Read Access Memory.\n");
        printf("2.) Read only Memory.\n");
        printf("3.) Read And Memory.\n");
        printf("4.) Reaccess admin Memory\n\n");
        printf("Enter Your Answer\n");
        scanf("%d", &ans2);

        if (ans2 == 2)
        {
            printf("Correct Answer\n");
            point2 = 5;
            printf("You have scored %d point\n\n", point2);
        }
        else
        {
            printf("Wrong Answer");
            wrong_point2 = 0;
            printf("Your Answer is Wrong. You have scored %d point\n", wrong_point2);
        }

        // .............Question 3............

        printf("Q3) What is the full form of BOIS?\n\n ");
        printf("1.) Brave Operating input system.\n");
        printf("2.) Break outpur Input system.\n");
        printf("3.) Read And Memory.\n");
        printf("4.) Basic input and Output system\n\n");
        printf("Enter Your Answer\n");
        scanf("%d", &ans3);

        if (ans3 == 4)
        {
            printf("Correct Answer\n");
            point3 = 5;
            printf("You have scored %d point\n\n", point3);
        }
        else
        {
            printf("Wrong Answer");
            wrong_point3 = 0;
            printf("Your Answer is Wrong. You have scored %d point\n", wrong_point3);
        }

        //................Question 4............

        printf("Q4) What is the full form of Virus ?\n\n ");
        printf("1.)Vital internet Resource under seige.\n");
        printf("2.) Vital intro Read under seige.\n");
        printf("3.) Vital information Resource under seige.\n");
        printf("4.) Vital insert resource under seige.\n\n");
        printf("Enter Your Answer\n");
        scanf("%d", &ans4);

        if (ans4 == 3)
        {
            printf("Correct Answer\n");
            point4 = 5;
            printf("You have scored %d point\n\n", point4);
        }
        else
        {
            printf("Wrong Answer");
            wrong_point4 = 0;
            printf("Your Answer is Wrong. You have scored %d point\n", wrong_point4);
        }

        //................... Question 5...............

        printf("Q5) What is the full form of Trojan ?\n\n ");
        printf("1.) Talented Read optimistic joyful abmitrus and Nurished..\n");
        printf("2.) Talented Responsible optimistic joyful abmitrus and Nurished.\n");
        printf("3.) Talented Reaad optimistic joyful avast and Nurished..\n");
        printf("4.) Talented Responsible optimistic joy abmitrus and Nurished.\n\n");
        printf("Enter Your Answer\n");
        scanf("%d", &ans5);

        if (ans5 == 2)
        {
            printf("Correct Answer\n");
            wrong_point5 = 5;
            printf("You have scored %d point\n\n", point5);
        }
        else
        {
            printf("Wrong Answer");
            wrong_point5 = 0;
            printf("Your Answer is Wrong. You have scored %d point\n", wrong_point5);
        }

        //...............Question 6..................

        printf("Q6) What is the full form of CPU ?\n\n ");
        printf("1.) Central progress unit .\n");
        printf("2.) Center process unit .\n");
        printf("3.) Central processing unit.\n");
        printf("4.) Compact process unit. \n\n");
        printf("Enter Your Answer\n");
        scanf("%d", &ans6);

        if (ans6 == 3)
        {
            printf("Correct Answer\n");
            point6 = 5;
            printf("You have scored %d point\n\n", point6);
        }
        else
        {
            printf("Wrong Answer");
            wrong_point6 = 0;
            printf("Your Answer is Wrong. You have scored %d point\n", wrong_point6);
        }
    }

    return 0;
}