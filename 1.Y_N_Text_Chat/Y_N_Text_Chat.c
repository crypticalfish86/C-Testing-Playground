#include<stdio.h>

int main()
{
   char testArr[20] = "testing";
   char Str_3D_Array[3][3][5][640] =
    {
        {
            {
                {"Oh hi there, my name's Jace!\nAre you from a company that's coming to check out my projects?\n(Hit Y if yes, Hit X if no.)\n"},
                {"Oh that's great! how are you finding my work so far?\nI know it's probably rudimentary compared to what you might be used to but so far do you like what you see?\n(from this point on Hit Y if yes, Hit N if no.)\n"},
                {"Thankyou ^^ i'm trying really really hard every day to get better and better at C and programming in general.\nI only started studying up on C maybe the 12th of March and now i'm trying to challenge myself with this testing playground so I can get practice with the most fundemental language used in the modern day :).\n(PRESS Y TO CONTINUE)\n"},
                {"Do you think I have an adequete tech stack to begin work at your company?\n(Hit Y if yes, Hit N if no.)\n"},
                {"Great ^^,then I hope you consider my application.\nIf you came from my CV then you should have my contact info already but if you came directly from my github my contact information is below:\nEmail: jasonweerawardena@gmail.com\nPhone: 07557301204\n(END)\n"}
            },
            {
                {"You shouldn't be here, how did you get here? [0][1][0]\n"},
                {"Oh okay well regardless, i'm very new to programming and i'm studying hard to get better and better as time goes on so hopefully one day I can make a difference.\ndo you have any advice or feedback for me on how I can improve my work?\n(Hit Y if yes, Hit N if no.)\n"},
                {"Great! You can't tell me about it here i'm still very new to C,\nbut if you did want to contact me in other ways you can with my contact details:\nEmail: jasonweerawardena@gmail.com\nPhone: 07557301204\n(END)\n"},
                {"Then I really hope to learn from you!\nIt's a very very strong desire of mine to understand the physical and digital technology that makes up out civilization,\nif accepted I pledge every fibre of my being to the learning the technology in use at your company and I hope you consider my application :).\n below are my contact details:\n Email: jasonweerawardena@gmail.com\nPhone: 07557301204\n(END)\n"},
                {"You shouldn't be here, how did you get here? [0][1][4]\n"}
            },
            {
                {"You shouldn't be here, how did you get here?[0][2][0]\n"},
                {"Oh well!\nRegardless I hope you have a wonderful day reviewing my and other's applications and thank you for considering me for your company :)\n(END)\n"},
                {"You shouldn't be here, how did you get here? [0][2][2]\n"},
                {"You shouldn't be here, how did you get here? [0][2][3]\n"},
                {"You shouldn't be here, how did you get here? [0][2][4]\n"}
            },
        },
        {
            {
                {"Are you someone I know?\n (Hit Y if yes, Hit X if no.)\n"},
                {"Are you a friend :)\n (from this point on hit Y if yes Hit N if no)\n"},
                {"Hiya ^.^ hows the child/rabbit/dog/wife/husband/girlfriend/boyfriend/house/job/chicken/life going?\n(Hit Y if good, Hit N if bad)\n"},
                {"Great :3, i'm doing v good too,\nsomething really clicked in me when making this program and I think learning C helped a lot as well,\nall of computing really is just stores of memory and programming is just a math problem to access that memory!\nI'm really loving coding and I really REALLY can't wait to begin this part of my life!\n(PRESS Y TO CONTINUE)\n"},
                {"Whichever person you are in my life, I'm really grateful for all that you've done for me and my life.\nI hope whatever worries/dreams/aspirations you have I hope I can be there to help you on your journey as you have been there for mine <3,\n thanks for taking a look at my programs and i hope you enjoy the rest of these mini-apps :3\n(END)\n"}
            },
            {
                {"You shouldn't be here, how did you get here? [1][1][0]\n"},
                {"then you must be an enemy!!\nYou are not welcome here, BEGONE >:(\n(END)\n"},
                {"Awww nooo :<\nI hope your child/rabbit/dog/wife/husband/girlfriend/boyfriend/house/job/chicken/life goes better soon,\n do you wanna talk about it?\n(Hit Y if yes, Hit N if no.)\n"},
                {"I would love to talk about it with you but i can't do that well here, i'm just a matrix and bunch of arrays :3,\nI hope you feel comfortable talking about it to me in person, this part of your life isn't going to last forever and I hope you can get out of it ^.^,\nspring will come again <3\n(END)\n"},
                {"You shouldn't be here, how did you get here? [1][1][4]\n"}
            },
            {
                {"You shouldn't be here, how did you get here?[1][2][0]\n"},
                {"You shouldn't be here, how did you get here? [1][2][1]\n"},
                {"That's ok :) i'm always here if you want to open up but only when you're ready to ^.^\n(END)\n"},
                {"You shouldn't be here, how did you get here? [1][2][3]\n"},
                {"You shouldn't be here, how did you get here? [1][2][4]\n"}
            },
        },
        {
            {
                {"wait so you're someone i don't know?\nYOU SHOULD NEVER HAVE COME HERE MYSTERIOUS ENTITY I WILL NOW VANQUISH YOU USING THE ONLY POWER I HAVE IN THIS TERMINAL >:(.\n(PRESS Y TO CONTINUE.)\n"},
                {"“Exorcizamus te, omnis immundus spiritus,\nomnis satanica potestas, omnis incursio\ninfernalis adversarii, omnis legio, omnis\ncongregatio et secta diabolica. Ergo, omnis\nlegio diabolica, adiuramus te…cessa\ndecipere humanas creaturas, eisque\naeternae perditionìs venenum propinare…Vade,\nsatana, inventor et magister omnis\nfallaciae, hostis humanae salutis…Humiliare\nsub potenti manu Dei; contremisce et\neffuge, invocato a nobis sancto et terribili\nnomine…quem inferi tremunt…Ab insidiis\ndiaboli, libera nos, Domine. Ut Ecclesiam\ntuam secura tibi facias libertate servire, te\nrogamus, audi nos.\n(PRESS Y TO CONTINUE)\n"},
                {"You have now been VANQUISHED! goodbye :)\n(END)\n"},
                {"You shouldn't be here, how did you get here?[2][0][3]\n"},
                {"You shouldn't be here, how did you get here?[2][0][4]\n"}
            },
            {
                {"You shouldn't be here, how did you get here? [2][1][0]\n"},
                {"You shouldn't be here, how did you get here?[2][1][1]\n"},
                {"You shouldn't be here, how did you get here?[2][1][2]\n"},
                {"You shouldn't be here, how did you get here?[2][1][3]\n"},
                {"You shouldn't be here, how did you get here?[2][1][4]\n"}
            },
            {
                {"You shouldn't be here, how did you get here? [2][2][0]\n"},
                {"You shouldn't be here, how did you get here?[2][2][1]\n"},
                {"You shouldn't be here, how did you get here?[2][2][2]\n"},
                {"You shouldn't be here, how did you get here?[2][2][3]\n"},
                {"You shouldn't be here, how did you get here?[2][2][4]\n"}
            },
        }
    };
    int Z = 0;
    int Y = 0;
    int X = 0;
    for(int i = 0; i < 7; i++)
    {
        printf("%s", Str_3D_Array[Z][Y][X]);
        char* User_Input[1];
        scanf(" %c", User_Input);
        if(*User_Input == 'Y' || *User_Input == 'y')
        {
            X += 1;
        }
        if(*User_Input == 'N' || *User_Input == 'n')
        {
            Y += 1;
        }
        if(*User_Input == 'X' || *User_Input == 'x')
        {
            Z += 1;
        }
    }
    return 0;
}