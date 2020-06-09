## What is this?

This is a simple programming language with a syntax close to LISP.

### How to execute KamenScript code 
```
mkdir src
mkdir include
cmake .
make .
cd build/
./KamenScript
```

## Supported Command 
Please note that in all commands the command/function, its arguments and braces should be space separated
### Plus Command
Plus command can accept multiple arguments and sums them.
```
( + 3 4 )
7
```
```
( + ( + 1 1 ) 2 )
4
```
### Equality Command
Checks if all of the arguments are equal
```
( equals 3 ( + 1 2 ) 3 ( + 0 3 ) )
true
```
```
( equals ( + 1 3 ) 2 )
false
```
### If Command
The first argument is the condition and the result is the second argument if condition is true and the third argument if it is false
```
( if true 3 4 )
3
```
```
( if false 3 4 )
4
```
