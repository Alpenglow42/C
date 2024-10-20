//hw3 chp 4 
/*5. Write a program that requests the download speed in megabits per second (Mbs) and
the size of a file in megabytes (MB). The program should calculate the download time
for the file. Note that in this context one byte is eight bits. Use type float, and use /
for division. The program should report all three values (download speed, file size, and
download time) showing two digits to the right of the decimal point, as in the following:
At 18.12 megabits per second, a file of 2.20 megabytes
downloads in 0.97 seconds.*/


#include <stdio.h>

int main() {
    // Declare variables to store download speed, file size, and download time
    float download_speed, file_size, download_time;

    // Request user input for download speed in megabits per second
    printf("Enter the download speed in megabits per second: ");
    scanf("%f", &download_speed);

    // Request user input for file size in megabytes
    printf("Enter the size of the file in megabytes: ");
    scanf("%f", &file_size);

    // Calculate download time using the formula: time = size / speed
    download_time = file_size / (download_speed / 8.0);  // convert speed to megabytes per second

    // Display the information
    printf("At %.2f megabits per second, a file of %.2f megabytes\n", download_speed, file_size);
    printf("downloads in %.2f seconds.\n", download_time);

    return 0;
}
