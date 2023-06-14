# Requirements
- Given a number of seconds, convert that to time right down to the seconds.

# Solution
- Get the input from the command line.
- All variables are declared *int*
- When you divide two integers in cpp, the result is a whole number.
    - Meaning, every digit below the decimal point are discarded.
- To get days only, divide the input seconds with the number of seconds in a day (daySeconds = 86400);
    - This should give you the number of days discarding any decimal point.
- To get hours (after the days), you need to get that decimal point which was previously discarded.
    - Using the remainder operator for the division of input seconds with the number of seconds in a day, you get the excess value that could not form a day.
    - This value is in raw seconds. There are 3600 seconds in an hour.
    - By dividing this raw seconds with the number of seconds in an hour, you get the output in hours.
- To get minutes, get the remainder when the raw seconds after the days division was divided by the number of hours to get excess hours.
    - The remainder should still be in seconds. Divide that with the number of seconds in a minute and you will get minutes.
- The same for seconds.
