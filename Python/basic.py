# *******Assignment-1 (Warmup)**********
# Question 382: Who developed python?
# :- Guido van Rossum


# Question 383: when was the first version of python launched?
# :- 1994


# Question 384: "Python is a platform independent language" - True/False?
# :- True


# Question 385: How to make single line comments in python?
# :- Using # symbol


# Question 386: "Python is a statically typed programming language" - True/False?
# :- False


# ********Assignment-2 (Fundamentals of python)**********
# Question 387 : Write a command to get the python version you are using.
# python --version
# :- import sys
# print(sys.version)


# Question 388 : What is PVM?
# :- PVM stands for Python Virtual Machine. It is an interpreter that executes Python bytecode.

# Question 389 : How to create .pyc (Bytecode) file from python source code file?
# :- By importing the py_compile module and using py_compile.compile() function.
# import py_compile
# py_compile.compile('basic.py', 'basic.pyc')
#       or
# python -m py_compile basic.py


# Question 390 : How to run a python file from command prompt or terminal?
# :- By using the command `python filename.py` in the command prompt or terminal.


# Question 391 : "Data Types in Python are not keywords" - True or false?
# :- True


# ********Assignment-3 (Simple problems on print)**********
# Question 392 : Write a python script to print yourname on the screen.
# print("Paramveer Singh")


# Question 393 : Write a python script to print your name on the first line and location on the second line.
# print("Paramveer Singh \n Uttarakhand")


# Question 394 : Write a python script to print "PARAMVEER SINGH".(Remember to print double quotes)
# print("\"PARAMVEER SINGH\"")


# Question 395 : Write a python script to print "Teacher's Day" on the screen.(Remember to print single quotes and single quote)
# print("'Teacher's Day'")
# print("\"Teacher's Day\"")


# Question 396 : Write a python script to print \n on the screen.
# print("\\n")


# ********Assignment-4 (Playing with variables)******
# Question 397 : Write a python script containing a variable with some integer value, print value of this variable.
# a = 10
# print(a)


# Question 398 : Write a python script to print the value of a variable. variable contains your name as data.
# a = "Paramveer"
# print(a)


# Question 399 : Write a python script to print values of three variables, each in a new line. All three variables are filled with some integer values.
# a, b, c = 10, 20, 30
# print(a, b, c, sep=" ")

# Question 400 : Create 5 variables each of them containing different types of data (like 35, true, "paramveer", 4.4, 4+3j). Write a python script to print values of all the variables along with their data types.
# a, b, c, d, e = 35, True, "paramveer", 4.4, 4+3j
# print(a, type(a), b, type(b), c, type(c), d, type(d), e, type(e) , sep="\n")


# Question 401 : Create three variables and assign current date to them, first variable contains day number, second variable contains month number, third variable contains year. Write a python script to display date in standard way (e.g. 29/11/2022)
# a, b, c = 29, 11, 2022
# print(a, b, c, sep="/")


# ********Assignment-5 (import and keywords)******
# Question 402 : Write a python script to print all the keywords on the screen.
# import keyword
# print("import keyword")
# print(keyword.kwlist)


# Question 403 : Use help section on python shell to see all the keywords.
# on terminal type : python then type help("keywords")
#       or
# help("keywords")


# Question 404 : Create two Python files A0.py and A1.py. Create a variable in A1.py and assign some value to it. write a python script to import A1 module in A0 and print value of variable created in A0.py
# import A1
# print(A1.a)


# Question 405 : Out of all the keywords, name those keywords which are used as data.
# False, None, True


# Question 406 : What is the use of del keyword in python?
# :- The del keyword is used to delete objects in Python, such as variables, list items, or dictionary entries.










































