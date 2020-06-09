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
( + 3 4)
( + ( + 1 1 ) 2 )
```
### Equality Command
Checks if all of the arguments are equal
```
( equals 3 ( + 1 2 ) 3 ( + 0 3) )
( equals ( + 1 1 ) 2 )
```
### If Command
Returns the first argument after the condition if it is true and the second argument after the condition if it is false
```
( if true 3 4 )
```

