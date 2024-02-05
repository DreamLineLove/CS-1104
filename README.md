# Welcome to CS-1104!

```
CS-1104/
├── exam
│   ├── bin
│   ├── practice
│   └── .cpp ...
├── experimental
│   └── / ...
├── README.md
└── submitted    
    └── / ...
```

In this repository, you will find: 
- programs, assignments, and powerpoints (**submitted**)
- exploratory code I wrote in my spare time (**experimental**) and
- select **exam** programs.

I was introduced to several basic concepts of Computer Science such as 
- data structures and algorithms,
- pointers and memory and
- imperative (C-style) programming constructs
<br>by building basic CLI programs in C++.

## Requirements
- You should have **git** <a href="http://git-scm.com">installed</a> (in order to clone the repository).

## Usage
- First, clone the repository to your local machine:
```
    $ git clone https://github.com/DreamLineLove/CS-1104.git
```
- Navigate to the folder:
```
    $ cd CS-1104
```
- Navigate to the directory of the source file and then run it. For example:
```
    $ cd CS-1104/experimental/insertion_deletion/
    $ ./v1_insertion_deletion
```
- If new changes were added after having already cloned, use ```$ git pull``` to fetch them.

## Notes
- I was introduced the concept of accessing memory addresses using pointers.
  - I was shocked to learn that looping over an array is literally manipulating units of data stored in a contiguous block of memory.
- I implemented search algorithms like linear search and binary search.
- I also implemented a few sorting algorithms like bubble sort and selection sort.
- I handled C-style strings (arrays of characters that are null-terminated).
  - In addition, I learned some library functions from the \<cstring\> header such as strcpy(), strcmp(), strcat(), and strlen(), which I found to be very convenient when handling C-style strings.
- By learning C-style strings, I got a basic sense of how a string might actually look like in a computer's memory.
- I also learned about and interacted with standard-in and -out by using standard library functions.
  - In addition, I was introduced to streams and "buffered" streams.
  - I was also introduced to a (seemingly) myriad of functions that handle std-in and -out.
- Of course, I went over references, pointers, pointer dereferencing, and basic pointer arithmetic.
- Throughout the course, I came across a whole lot of functions from the standard library, including those from the \<cmath\> header.
