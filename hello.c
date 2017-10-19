#include <cs50.h>
#include <stdio.h>

void say(string what_to_say, int repeat_time);

int main (void){
    say("Hello, world!!!", 1);
    say("Not what you want?\nOr enter 1 to speak your own word.", 1);
    int which = get_int();
    if (which == 1){
        say("Okay, what do you want to say?", 1);
        string i_wanna_say = get_string();
        say("So, how many times?", 1);
        int no_of_times = get_int();
        say(i_wanna_say, no_of_times);
    }
    else {
        say("Error", 1);
    }
}

void say(string what_to_say, int repeat_time){
    for (int i=0; i<repeat_time; i++){
        printf("\n%s\n", what_to_say);
    }
}