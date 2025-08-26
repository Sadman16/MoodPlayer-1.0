#include <stdio.h>

int main() {
    int Mood, Language;


    #define LINK(text, url) "\033]8;;" url "\033\\▶ " text "\033]8;;\033\\"

    // Happy
    char *happy_bangla[] = {
        "Bhalobashi Bolbo Na\n" LINK("Click to listen", "https://www.youtube.com/watch?v=T4VwIXvLdg8"),
        "Tomake Chai Na-Arijit Singh\n" LINK("Click to listen", "https://www.youtube.com/watch?v=1f18irP--O8"),
        "Onno Groher Chand-Sohan Ali\n" LINK("Click to listen", "https://www.youtube.com/watch?v=Y1z069Ci5aE"),
        "Jawl Phoring 2.0-Anupam Roy\n" LINK("Click to listen", "https://www.youtube.com/watch?v=qMPqnA8kjT0"),
        "Prostab - Odd Signature\n" LINK("Click to listen", "https://www.youtube.com/watch?v=_z1EfMNUqFs"),
        "Gulbahar-Ishaan\n" LINK("Click to listen", "https://www.youtube.com/watch?v=Ib_L3vuUX5k")
    };
    int happy_bangla_count = 6;

    char *happy_english[] = {
        "Something Just Like This\n" LINK("Click to listen", "https://www.youtube.com/watch?v=FM7MFYoylVs"),
        "Cheap Thrills\n" LINK("Click to listen", "https://www.youtube.com/watch?v=nYh-n7EOtMA"),
        "Die With A Smile\n" LINK("Click to listen", "https://www.youtube.com/watch?v=kPa7bsKwL-c"),
        "Closer\n" LINK("Click to listen", "https://www.youtube.com/watch?v=PT2_F-1esPk"),
        "Hall of Fame\n" LINK("Click to listen", "https://www.youtube.com/watch?v=mk48xRzuNvA")
    };
    int happy_english_count = 5;

    // Sad  (Bangla, English, Hindi, Other)
    char *sad_bangla[] = {
        "Obosthan\n" LINK("Click to listen", "https://www.youtube.com/watch?v=RCO1NWm3_eI"),
        "Neshar Bojha\n" LINK("Click to listen", "https://www.youtube.com/watch?v=O3SyEDO0K9U")
    };
    int sad_bangla_count = 2;

    char *sad_english[] = {
        "See You Again\n" LINK("Click to listen", "https://www.youtube.com/watch?v=RgKAFK5djSk"),
        "Broken Angel\n" LINK("Click to listen", "https://www.youtube.com/watch?v=bC3WAxiLnDY")
    };
    int sad_english_count = 2;

    while (1) {
        // Mood
        printf("\nPlease tell me how is your mood\n");
        printf("1. Happy\n");
        printf("2. Sad\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &Mood);

        if (Mood == 0) {
            printf("Goodbye! 🎵\n");
            break;
        }

        while (1) {
            // Language
            printf("\nChoose a language:\n");
            printf("1. Bangla\n");
            printf("2. English\n");
            printf("5. Back\n");
            printf("Enter your choice: ");
            scanf("%d", &Language);

            if (Language == 5) break;

            printf("\n🎶 Recommended Songs:\n");

            char **selected_songs = NULL;
            int song_count = 0;

            if (Mood == 1) { // Happy
                if (Language == 1) { selected_songs = happy_bangla; song_count = happy_bangla_count; }
                else if (Language == 2) { selected_songs = happy_english; song_count = happy_english_count; }
            } else if (Mood == 2) { // Sad
                if (Language == 1) { selected_songs = sad_bangla; song_count = sad_bangla_count; }
                else if (Language == 2) { selected_songs = sad_english; song_count = sad_english_count; }
            }

            for (int i = 0; i < song_count; i++) {
                printf("%d. %s\n", i + 1, selected_songs[i]);
            }
        }
    }

    return 0;
}

