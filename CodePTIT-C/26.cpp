#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char time[11]; 
    scanf("%s", time);
    
    int hour, minute, second;
    char period[3]; 
    
   
    sscanf(time, "%d:%d:%d%2s", &hour, &minute, &second, period);
    
   
    if (toupper(period[0]) == 'P' && hour != 12) {
        hour += 12;
    } else if (toupper(period[0]) == 'A' && hour == 12) {
        hour = 0;
    }
    
   
    printf("%02d:%02d:%02d", hour, minute, second);
    
    return 0;
}