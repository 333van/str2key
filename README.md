# str2key
A script to convert string into scan codes for windows 11 in C.
In another words, it simulate keyboard inputs based on string.

## build
```PowerShell
gcc str2key.c -I./ -o str2key
```

## usage
```PowerShell
# PowerShell
${ String to be converted into scan codes } = "Hello World!"
${ Sleep Time in Seconds before calling SendInput() from Windows OS } = 3

str2key.exe `
${ String to be converted into scan codes } `
${ Sleep Time in Seconds before calling SendInput() from Windows OS }

# Newline will be treated as Enter
# The second param is the default sleep time, which is 3 seconds
str2key.exe @"
echo "Hello"
echo "World"

@" 3
```

## license
MIT
