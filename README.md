
# c-clock
This is a simple clock made in C using the sleep function from unistd.h. 
It accepts 3 command line arguments (argv)  which constitute the initial time: H m s.

## Example
./clock 10 11 12
Running this binary with those arguments would start a clock from 10:11:12.

## Bash Script
You can also simply run the bash script clock.sh without any command line arguments and it will run the date command in the background (usually installed in Unix systems) and extract the current time (hours, minutes, seconds) and run the clock binary passing those values as arguments.
