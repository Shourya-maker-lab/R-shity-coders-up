#include <stdio.h>

#include <time.h>

void delay(int number_of_seconds)
{
    // Converting time into milli_seconds
    int milli_seconds = 1000 * number_of_seconds;

    // Storing start time
    clock_t start_time = clock();

    // looping till required time is not achieved
    while (clock() < start_time + milli_seconds)
        ;
}

int main() {
    delay(1000);
    printf("       _       _   _     _                                _               \n");
    printf(" ___  | |__   (_) | |_  | |_   _   _    ___    ___     __| |   ___   _ __ \n");
    printf("/ __| | '_ \\  | | | __| | __| | | | |  / __|  / _ \\   / _` |  / _ \\ | '__|\n");
    printf("\\__ \\ | | | | | | | |_  | |_  | |_| | | (__  | (_) | | (_| | |  __/ | |   \n");
    printf("|___/ |_| |_| |_|  \\__|  \\__|  \\__, |  \\___|  \\___/   \\__,_|  \\___| |_|   \n");
    printf("                               |___/                                      \n");
    printf("                     \n");
    printf(" ___   _   _   _ __  \n");
    printf("/ __| | | | | | '_ \\ \n");
    printf("\\__ \\ | |_| | | |_) |\n");
    printf("|___/  \\__,_| | .__/ \n");
    printf("              |_|    ");
    delay(1000);
    printf("💩💩💩\n");
    delay(1000);
    printf("  /\\/\\    _____   \n");
    printf("  >  <   / ___ \\  \n");
    printf(" _\\/\\ | / / __| \\ \n");
    printf("/ __` || | (__   |\n");
    printf("\\____/  \\ \\___| / \n");
    printf("         \\_____/ ");
    return 0;
}


