#include<stdio.h>
int main ()
{
    int Mood,Language;

    while (1)//Loop for Mood Choice
    {
        //Mood Menu
        printf("\nPlease tell me how is your mood\n");
        printf("1. Happy\n");
        printf("2. Sad\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &Mood);

        if (Mood == 0)
        {
            printf("Goodbye! 🎵\n");
            break;// Exit program
        }
        while (1)
        {
            //Language list
            printf("\nChoose a language:\n");
            printf("1. Bangla\n");
            printf("2. English\n");
            printf("3. Hindi\n");
            printf("4. Other\n");
            printf("5. Back\n");
            printf("Enter your choice: ");
            scanf("%d", &Language);

            if (Language == 5)//problem
            {
                break; // Back to Mood Choice
            }
            //Song printing
            printf("\n🎶 Recommended Song:\n");


            if(Mood==1)//Happy song
            {
                switch (Language)//Language choie
                {
                case 1://Bangla Song
                {
                    printf("\n🎶 Recommended Happy Bangla Song:\n");
                    printf("\n1.Bhalobashi Bolbo Na\n");
                    printf("\033]8;;https://www.youtube.com/watch?v=T4VwIXvLdg8&list=PLWxx9wj5pRHSU8r_bovItWBI_Z0YFVTKZ&index=64\033\\▶      Click to listen\033]8;;\033\\\n");
                    printf("\n2.Tomake Chai Na-Arijit Singh \n");
                    printf("\033]8;;https://www.youtube.com/watch?v=1f18irP--O8&list=PLzxTmXYDR-xXzzlHxQk0AeUxunUwOYdkg\033\\▶ Click to listen\033]8;;\033\\\n");
                    printf("\n3.Onno Groher Chand-Sohan Ali\n");
                    printf("\033]8;;https://www.youtube.com/watch?v=Y1z069Ci5aE&list=RDQMoKGsczQWU8E&index=4\033\\▶ Click to listen\033]8;;\033\\\n");
                    printf("\n4.Jawl Phoring 2.0-Anupam Roy \n");
                    printf("\033]8;;https://www.youtube.com/watch?v=qMPqnA8kjT0&list=RDQMoKGsczQWU8E&index=25\033\\▶ Click to listen\033]8;;\033\\\n");
                    printf("\n5.Prostab - Odd Signature \n");
                    printf("\033]8;;https://www.youtube.com/watch?v=_z1EfMNUqFs&list=RDGMEMCMFH2exzjBeE_zAHHJOdxg&start_radio=1&rv=o5iNbmDbViA\033\\▶ Click to listen\033]8;;\033\\\n");
                    printf("\n6.Gulbahar-Ishaan \n");
                    printf("\033]8;;https://www.youtube.com/watch?v=Ib_L3vuUX5k&list=RDMM&start_radio=1&rv=syFZfO_wfMQ\033\\▶ Click to listen\033]8;;\033\\\n");



                    break;

                }
                case 2://English
                {
                    printf("\n1.Something Just Like This-The Chainsmokers & Coldplay \n");
                    printf("\033]8;;https://www.youtube.com/watch?v=FM7MFYoylVs&list=PLWxx9wj5pRHTo1gbIIkRmyVBvxLIs81BB&index=30\033\\▶ Click to listen\033]8;;\033\\\n");
                    printf("\n2.Cheap Thrills-Sean Paul \n");
                    printf("\033]8;;https://www.youtube.com/watch?v=nYh-n7EOtMA\033\\▶ Click to listen\033]8;;\033\\\n");
                    printf("\n3.Die With A Smile-Lady Gaga, Bruno Mars \n");
                    printf("\033]8;;https://www.youtube.com/watch?v=kPa7bsKwL-c&list=PLWxx9wj5pRHTo1gbIIkRmyVBvxLIs81BB&index=88\033\\▶ Click to listen\033]8;;\033\\\n");
                    printf("\n4.Closer-The Chainsmokers\n");
                    printf("\033]8;;https://www.youtube.com/watch?v=PT2_F-1esPk&list=PLWxx9wj5pRHTo1gbIIkRmyVBvxLIs81BB&index=76\033\\▶ Click to listen\033]8;;\033\\\n");
                    printf("\n5.Hall of Fame-The Script \n");
                    printf("\033]8;;https://www.youtube.com/watch?v=mk48xRzuNvA&list=PLWxx9wj5pRHTo1gbIIkRmyVBvxLIs81BB&index=2\033\\▶ Click to listen\033]8;;\033\\\n");


                    break;

                }
                case 3://Hinde
                {
                    printf("\n1. 2 States Offo-Aditi Singh Sharma, Amitabh Bhattacharya \n");
                    printf("\033]8;;https://www.youtube.com/watch?v=pd7KUAfA4KM&list=PLWxx9wj5pRHS842utNtyVwggmw-JnJuTP&index=44\033\\▶ Click to listen\033]8;;\033\\\n");
                    printf("\n2.Sooraj Dooba Hain-Arijit singh, Aditi Singh Sharma  \n");
                    printf("\033]8;;https://www.youtube.com/watch?v=nJZcbidTutE&list=PLWxx9wj5pRHS842utNtyVwggmw-JnJuTP&index=42\033\\▶ Click to listen\033]8;;\033\\\n");
                    printf("\n3.Aal Izz Well-Swanand K & Shaan \n");
                    printf("\033]8;;https://www.youtube.com/watch?v=7PzwOiW8-n0\033\\▶ Click to listen\033]8;;\033\\\n");
                    printf("\n4.Tumhi Ho Bandhu-Pritam \n");
                    printf("\033]8;;https://www.youtube.com/watch?v=o1RducJbUdc&list=PLWxx9wj5pRHS842utNtyVwggmw-JnJuTP&index=31\033\\▶ Click to listen\033]8;;\033\\\n");
                    printf("\n5.Makhna - Drive|\n");
                    printf("\033]8;;https://www.youtube.com/watch?v=HqUeSjsYLNU&list=RDGMEM2j3yRsqu_nuzRLnHd2bMVA&index=4\033\\▶ Click to listen\033]8;;\033\\\n");
                    printf("\n6.Kashmir Main Tu Kanyakumari-Sunidhi Chauhan, Arijit Singh, Neeti Mohan\n");
                    printf("\033]8;;https://www.youtube.com/watch?v=WxtJqyIyThU\033\\▶ Click to listen\033]8;;\033\\\n");

                    break;


                }
                case 4://Other
                {
                    printf("\n1.Plastic Bertrand - Ça plane pour moi \n");
                    printf("\033]8;;https://www.youtube.com/watch?v=8soQkubMk1g\033\\▶ Click to listen\033]8;;\033\\\n");
                    printf("\n2.Dynamite-BTS \n");
                    printf("\033]8;;https://www.youtube.com/watch?v=gdZLi9oWNZg\033\\▶ Click to listen\033]8;;\033\\\n");
                    printf("\n3. Dancing Queen-ABBA\n");
                    printf("\033]8;;https://www.youtube.com/watch?v=-sVB91NTa4A\033\\▶ Click to listen\033]8;;\033\\\n");
                    printf("\n4.André Hazes - Zij Gelooft In Mij \n");
                    printf("\033]8;;https://www.youtube.com/watch?v=VAc9opfAEYQ\033\\▶ Click to listen\033]8;;\033\\\n");
                    printf("\n5.99 Luftballons \n");
                    printf("\033]8;;https://www.youtube.com/watch?v=Fpu5a0Bl8eY\033\\▶ Click to listen\033]8;;\033\\\n");
                    break ;
                }
                }

            }
            else if (Mood==2)//sad
            {
                switch(Language)
                {
                case 1://Bangla
                {
                    printf("\n1.Obosthan-High Way(Rakib Hasan)  \n");
                    printf("\033]8;;https://www.youtube.com/watch?v=RCO1NWm3_eI&list=RDGMEMCMFH2exzjBeE_zAHHJOdxgVMRCO1NWm3_eI&start_radio=1\033\\▶ Click to listen\033]8;;\033\\\n");
                    printf("\n2.Neshar Bojha-Popeye \n");
                    printf("\033]8;;https://www.youtube.com/watch?v=O3SyEDO0K9U&list=RDGMEMCMFH2exzjBeE_zAHHJOdxgVMRCO1NWm3_eI&index=17\033\\▶ Click to listen\033]8;;\033\\\n");
                    break ;


                }
                case 2://English
                {
                    printf("\n1.See You Again-Wiz Khalifa   \n");
                    printf("\033]8;;https://www.youtube.com/watch?v=RgKAFK5djSk&list=PLWxx9wj5pRHTo1gbIIkRmyVBvxLIs81BB\033\\▶ Click to listen\033]8;;\033\\\n");
                    printf("\n2. Broken Angel-Arash\n");
                    printf("\033]8;;https://www.youtube.com/watch?v=bC3WAxiLnDY&list=PLWxx9wj5pRHTo1gbIIkRmyVBvxLIs81BB&index=6\033\\▶ Click to listen\033]8;;\033\\\n");
                    break;

                }
                case 3://Hinde
                {
                    printf("\n1.Tujhe Kitna Chahne Lage – Arijit Singh \n");
                    printf("\033]8;;https://www.youtube.com/watch?v=2IGDsD-dLF8\033\\▶ Click to listen\033]8;;\033\\\n");
                    printf("\n2.Give Me Some Sunshine- Suraj Jagan | \n");
                    printf("\033]8;;https://www.youtube.com/watch?v=lbCRtrrMvSw\033\\▶ Click to listen\033]8;;\033\\\n");

                    break;

                }
                case 4://Other
                {
                    printf("\n1.Gloomy Sunday – Rezső Seress\n");
                    printf("\033]8;;https://www.youtube.com/watch?v=xBgLqHc3iw4\033\\▶ Click to listen\033]8;;\033\\\n");
                    printf("\n2.Jacques Brel - Ne me quitte pas \n");
                    printf("\033]8;;https://www.youtube.com/watch?v=oR_SZR_tmxM\033\\▶ Click to listen\033]8;;\033\\\n");

                    break;
                }
                }
            }


        }


    }
}

