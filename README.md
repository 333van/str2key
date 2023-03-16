# str2key
a script to convert string into scan codes for windows 11 in C.
In another words, it simulate keyboard inputs based on string.

## build
```PowerShell
gcc str2key.c -I./ -o str2key
```

## usage
```PowerShell
${ String to be converted into scan codes } = "Hello World!"
${ Sleep Time in Seconds before calling SendInput() from Windows OS } = 3
str2key.exe `
${ String to be converted into scan codes } `
${ Sleep Time in Seconds before calling SendInput() from Windows OS } `
# Hello World!
```

## license
MIT
