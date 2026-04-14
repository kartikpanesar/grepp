# grepp

A Simple grep-like command-line tool written in C.

## Features
- Searches for pattern in text
- '-n': enables Line Numbers
- '-x': invert match
- '-i': case insensitive match

## Usage
- ./grepp [options] pattern

## Examples
- ./grep -nxi pattern
- ./grep -n -x pattern

## Future Improvements
- File Input support
- other options 

## How to use  
1. open up a terminal.  
2. Run this Command- gcc main.c find_pattern.c options.c get_line.c -o grepp  
3. Then Try- ls -l | ./grepp -n main.c  


