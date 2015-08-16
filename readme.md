# A library aimed to help people learn to code

This is a library that simplifies the c++ language, by turning a lot of the
language to easy to call functions that will help the user understand what he or she is doing
better.

## The functions

### print()

To print something to the screen you need to type print(); and in the brackets put the message
you want printing int quotation marks, for example:

print("hello world");

will give you the output:

hello world

### print_number()

To print a number on its own you need to type print_number(); and in the brackets put the number
you want printing to the screen, you can print out numbers with just print(); but if you want to
use a function that gives you back a number you have to use print_number();, for example:

print_number(123);

will give you the output:

123

### print_numberWithDecimal()

To print a number with decimal places you need to type print_numberWithDecimal(); and in the brackets put your number
you want printing to the screen. you can't use print_number(); to print out a decimal. For example:

print_numberWithDecimal(3.141);

will get you the output:

3.141

### getAnswer()

To get input from a user you need to use the function getAnswer(); in the brackets you put the question you want to ask
the user, for example:

getAnswer("what is your faviroute colour?");

will get the output:

what is your faviroute colour?
_ *user inputs colour here*

### getAnswerNumber()

To get a number input from the user you need to use the function getAnswerNumber(); in the brackets you put the question you want to ask the user, this is used if you require input as a number form, for example:

getAnswerNumber("what is your faviroute number?");

will get the output:

what is your faviroute number?
_ *user inputs number here*


### The next functions only give back a result and do not print them out so you have to encompass them in a function like print();
### print_number(); e.g. print_number(function());

### add()

To add two numbers you can use the function add(); in the brackets you need to put two numbers you want adding, for example:

print_number(add(7, 3));

will get the output:

10

### subtract()

To subtract two numbers you can use the function subtract(); in the brackets you need to put two numbers you want subtracting, for
example:

print_number(subtract(10, 3));

will get the output:

7

### multiply()

To multiply two numbers you can use the function multiply(); in the brackets you put two numbers you want multiplied, for example:

print_number(multiply(5, 2));

will get the output:

10

### divide()

To divide two numbers you can use the function divide(); in the brackets you put two numbers you want divided, for example:

print_number(divide(10, 2));

will get the output:

5

### area()

To get the area of a shape you can use the function area(); in the brackets you put the height and the width of the shape you want
to find the area of, for example:
    _____________
    |            |
3cm |            |
    |____________|
         5cm

print_number(area(3, 5));

will get the output:

15

### area_of_a_triangle()

To get the area of a triangle you need to use the function area_of_a_triangle(); in the brackets you put the width and height of
the triangle, for example:

        ||
3cm    |  |
      |    |
     |______|
        4cm

print_number(area_of_a_triangle(4, 3));

will get the output:

6

### area_of_circle()

To get the area of a circle you will need to use the function area_of_circle(); in the brackets you put the radius of the circle,
for example:

circle radius = 5

print_number(area_of_circle(5));

will get the output:

78

### perimeter_of_circle()

To get the perimeter of a circle you will need to use the function perimeter_of_circle(); in the brackets you put the diameter of the circle, for example:

circle diameter = 10

print_number(perimeter_of_circle(10));

will get the output:

31

## More functions coming soon.
