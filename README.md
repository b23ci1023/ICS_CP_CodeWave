
# Geometric Shapes And Functions Area Calculator

This C program allows users to calculate the area of various geometric shapes, including circles, squares, rectangles, trapeziums, triangles, parallelograms, and cones. Additionally, it provides the option to find the area under a user-defined mathematical function using Riemann sums.


# Supported Shapes:

Circle

Square

Rectangle

Trapezium

Triangle

Parallelogram

Cone


# Supported Functions:

y = sin(x)

y = cos(x)

y = e^x

y = x

y = x^2

y = x^3

y = tan(x)

# Example Usage:

For a circle, enter the radius when prompted.

For a square, enter the side length.

For a rectangle, enter both the shorter and longer side lengths.

For a trapezium, enter the shorter parallel side, longer parallel side, and height.

For a triangle, enter the lengths of the three sides.

For a parallelogram, enter the base and height.

For a cone, choose whether to find the curved surface area or total surface area, then enter the radius and slant height.


If you choose to calculate the area under a mathematical function:
- Enter the function type (e.g., sin(x), cos(x)).
- Specify the domain and range.
- The program will display the Riemann sum for the given function within the specified range.

# Function Definitions

The code begins with the definition of several functions, each responsible for printing a particular geometric shape:-

printCircle(), printRectangle(), printSquare(), printTriangle(), printParallelogram(), printTrapezoid(), printEllipse(), printcone(), printCone(): These functions print the corresponding geometric shape to the console.

# Shape Identifying Functions:

Next, there are also functions like circle(), square(), etc., which take a string as an argument and return the length of the string if it matches the name of a geometric shape (case-insensitive). These functions are used for identifying the shape when the user inputs its name.

# Handling Mathematical Function:

The program supports the calculation of the area under a mathematical function. The functionkonsa() function contains a switch statement to return different mathematical functions. The selected function is used in the functiongetter() function to retrieve the y-coordinate for a given x-coordinate.

# Riemann Sum Calculation for Mathematical Function:

The irregularfigures() function calculates the area under the selected mathematical function using either the right or left Riemann sum method. It also prints a simple graph of the function within a specified range.

### How it Works:

User Input:
The user is prompted to choose between the Right Riemann Sum and the Left Riemann Sum.

Interval Division:
The interval [a, b] is divided into n subintervals of equal width, where a is the lower limit, b is the upper limit, and n is the number of intervals specified by the user.

Sample Points:
For the Right Riemann Sum, the right endpoint of each subinterval is used as the sample point.
For the Left Riemann Sum, the left endpoint of each subinterval is used as the sample point.

Function Evaluation:
The mathematical function (e.g., sin(x), cos(x), etc.) is evaluated at each sample point within its respective subinterval.

Summation:
The Riemann sum is calculated by summing up the products of the function values and the width of each subinterval.

Display Result:
The calculated Riemann sum is then displayed to the user.


# Printing the Graph of a Mathematical Function

Here's a breakdown of how this function works:

Input Parameters:
a and b: The lower and upper limits of the interval for which the Riemann sum and graph are calculated.

n: The number of intervals used in the Riemann sum calculation.
xmin and xmax: The minimum and maximum x-values for printing the graph.

ymin and ymax: The minimum and maximum y-values for printing the graph.

choice: User's choice for the Riemann sum method (Right or Left).

Riemann Sum Calculation:
The function calculates the Riemann sum based on the chosen method (Right or Left).

The loop iterates over the intervals and calculates the function value at each sample point within the interval.

The Riemann sum accumulates the sum of function values multiplied by the interval width.

Graph Printing:
The function then prints a simple graph of the mathematical function.
It uses a nested loop to iterate over the specified x and y ranges, printing '*' for points where the function value is close to the y-coordinate.

The condition fabs(y - functionValue) < 0.1 checks if the y-coordinate of the current point is close to the function value.

Display Results:
The Riemann sum value (either Right or Left) is displayed based on the user's choice.

### Example Usage for Mathematical Function:

- Choose to find the area under a mathematical function by entering 'f' at the main menu.
- Enter the function type: 1 for sin(x), 2 for cos(x), 3 for pow(2.71828, x), 4 for x, 5 for x*x, 6 for x*x*x, 7 for tan(x).
- Enter the lower limit for the domain: -2
- Enter the upper limit for the domain: 2
- Enter the number of intervals: 100
- Enter the minimum x domain for printing: -2
- Enter the maximum x domain for printing: 2
- Enter the minimum y range for printing: -1
- Enter the maximum y range for printing: 1
- Enter '1' for Right Riemann Sum or '2' for Left Riemann Sum: 1
- Result: Right Riemann Sum = 3.14
- [Printed Graph of the Mathematical Function]

# Main Function:

The main() function is the entry point of the program. It prompts the user to choose between finding the area of geometric shapes or calculating the area under a mathematical function.

If the user chooses to find the area of geometric shapes:

The program prompts for the name of the shape and relevant dimensions.
The corresponding shape function is called to calculate and display the area.

If the user chooses to calculate the area under a mathematical function:

The program prompts for the type of mathematical function (sin(x), cos(x), etc.).
The user inputs the domain, range, and other relevant parameters.
The program calculates and displays the Riemann sum for the selected function and displays a simple graph.



