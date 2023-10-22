# Regex
Regular expressions are called regex
Not a property of programming language 
some use it by default, some needs some packages 

Regex is not a programming lang, it is pattern matching expression

it is like * on streroid, selects everything as per patterns 

examples : 
- forcing a user to write correct format of data 
- forcing a user to make secure password  
- have credit card number in the right format  
- gives exact amount of data (otherwise difficult to find)

a lot of worms, viruses, trojans are given regexes to find the specifics of the things and attack 

Regexes are used in penetration testing and ethical hacking (analysis), taking custom scripts to find the exploration of specific patterns 

Languages use regex to find the patterns

```
CHEATSHEET : 
Character classes
.           - Any Character Except New Line
\w \d \s    - word, digit, whitespace
\d          - Digit (0-9)
\w          - Word Character (a-z, A-Z, 0-9, _)
\s          - Whitespace (space, tab, newline)
\W \D \S    - not word, digit, whitespace
\D          - Not a Digit (0-9)
\W          - Not a Word Character
\S          - Not Whitespace (space, tab, newline)

Anchors
^           - Beginning of a String
$           - End of a String
\b          - Word Boundary
\B          - Not a Word Boundary
^abc$	    - start / end of the string

Quantifiers:
*           - 0 or More
+           - 1 or More
?           - 0 or One
{3}         - Exact Number
{3,4}       - Range of Numbers (Minimum, Maximum)

Escaped characters
\t          - tab
\n          - newline
\r	        - carriage return
\. \* \\	- escaped special characters

Groups & Lookaround
( )         - Group
|           - Either Or
[]          - Matches Characters in brackets
[^ ]        - Matches Characters NOT in brackets

(abc)	    - capture group
\1	        - backreference to group #1
(?:abc)	    - non-capturing group
(?=abc)	    - positive lookahead
(?!abc)	    - negative lookahead


Quantifiers & Alternation
[abc]	    - any of a, b, or c
[^abc]	    - not a, b, or c
[a-g]	    - character between a & g
a*a+a?	    - 0 or more, 1 or more, 0 or 1
a{5}a{2,}	- exactly five, two or more
a{1,3}	    - between one & three
a+?a{2,}?	- match as few as possible
ab|cd	    - match ab or cd

Sample Regexs
[a-zA-Z0-9_.+-]+@[a-zA-Z0-9-]+\.[a-zA-Z0-9-.]+
```


[Regexr : to learn some basic syntax and few example of regex practices purposes](https://regexr.com/)

[Practice Regex](https://regex101.com/)

Regex can get into legal trouble for scraping any websites, not in apple or android ( since they can kick up and ban the accounts )

