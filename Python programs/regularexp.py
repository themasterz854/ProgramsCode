'''
Identifiers
\d any number
\D anything but a number
\s space
\S anything but space
\w any character
\W anything but a character
.  any character, except a newline
\b the whitespace around words
\. a period

Modifiers
{1,3} we're expecting 1-3
+ Match 1 or more 
? Match 0 or 1 
* Match 0 or more
$ match the end of a string
^ match the beginning of a string
| either or
[] range or variance
{x} expect x amount

White space characters
\n new line
\s space
\t tab
\e escape
\f form feed
\r return

. + * ? [] $ ^ () {} | \


'''
import re

regexp = 'burrito'
string = 'boorrito'
result = re.match(regexp, string)
print(result)
result = re.match('hog', 'hedgehog')  # no match
# because the beginning of the string doesn't match the template 'hog'

regexp = ". love ...... ?.?"
print(re.match(regexp,"I love python"))

re.match("\\\\", "\\")  # match
re.match(r"\\", "\\")  # match: regexp consists of a regexp escape and a 

template = "hyperskill.org"  
escaped_template = re.escape(template)
print(escaped_template)  # 'hyperskill\.org'


temp = "hello ?there"
print(re.match(temp,"hellothere"))
re.match('love [a-zA-Z]', 'love U')         
string = '''
Jessica is 15 years old, and Daniel is 27 years old. Edward is 97 years old and his grandfather , Oscar, is 102 years old.

'''
ages = re.findall(r'\d{1,3}',string)
names = re.findall(r'[A-Z][a-z]*', string)
print(ages)
print(names)
sentence = "My name is Zaid my phone is 7332879490"
phoneno = re.compile(r'\d{10}')
num = phoneno.search(sentence)
print(num.group())
