#include <iostream>
#include <cmath>

// First task
double areaOfTrap(double b1, double b2, double h) { //creating a function to find the area of a trapezoid.
    return 0.5 * (b1 + b2) * h;
}

// Second task
double circleLength(double rad) { //creating a function to find the circumference of a circle
    return 2 * 3.14 * rad;
}

double circleArea(double rad) { //creating a function to find the area of a circle
    return 3.14 * pow(rad, 2);
}

// Third task
double triangleArea(double base, double height) { //function to find the area of a right-angled triangle
    return 0.5 * base * height;
}

double hypot(double side1, double side2) { //function to find the hypotenuse of a right-angled triangle
    return sqrt(pow(side1, 2) + pow(side2, 2));
}

// Fourth task
int sumOfDigits(int number) {
    int summa = 0;
    while (number != 0) {
        summa += number % 10; //Calculate the remainder of dividing the number by 10 using the % operator. This yields the last digit which is added to the summa variable.
        number /= 10; //Dividing the number by 10 using the / operator to remove the last digit and move on to the next one.
    }
    return summa;
}

// Fifth task
void decToPolar(double x, double y, double& r, double& theta) { //creating a function to convert Cartesian coordinates to polar coordinates
    r = sqrt(x * x + y * y); //formulas
    theta = atan2(y, x);
}

// Sixth task
void polarToDec(double r1, double theta1, double& x1, double& y1) { //creating a function to convert polar coordinates to Cartesian coordinates
    x1 = r1 * cos(theta1); //formulas
    y1 = r1 * sin(theta1);
}

// Seventh task
void equation(double a, double b, double c) { //function to find the discriminant
    double discr = b * b - 4 * a * c;

    if (discr > 0) { //if the discriminant is greater than 0, then two roots
        double root1 = (-b + sqrt(discr)) / (2 * a);
        double root2 = (-b - sqrt(discr)) / (2 * a);

        std::cout << "The roots of the quadratic equation are: " << root1 << " and " << root2 << std::endl;
    }
    else if (discr == 0) { //if the discriminant equals 0, then one double root
        double root = -b / (2 * a);

        std::cout << "The quadratic equation has a double root: " << root << std::endl;
    }
    else { //no real roots
        std::cout << "The quadratic equation has complex roots." << std::endl;
    }
}

// Eighth task
void findMedians(double a, double b, double c) {  //creating a function to find the medians of a triangle

    double m1 = 0.5 * std::sqrt(2 * b * b + 2 * c * c - a * a); //finding the medians of the original triangle
    double m2 = 0.5 * std::sqrt(2 * a * a + 2 * c * c - b * b);
    double m3 = 0.5 * std::sqrt(2 * a * a + 2 * b * b - c * c);


    double m1_new = 0.5 * std::sqrt(2 * m2 * m2 + 2 * m3 * m3 - m1 * m1); //finding the medians of a triangle whose sides are the medians of the original triangle
    double m2_new = 0.5 * std::sqrt(2 * m1 * m1 + 2 * m3 * m3 - m2 * m2);
    double m3_new = 0.5 * std::sqrt(2 * m1 * m1 + 2 * m2 * m2 - m3 * m3);


    std::cout << "The medians of a triangle whose sides are the medians of the original triangle: " << std::endl; //displaying the results
    std::cout << "m1_new: " << m1_new << std::endl;
    std::cout << "m2_new: " << m2_new << std::endl;
    std::cout << "m3_new: " << m3_new << std::endl;

}
// Task nine
void calculateTime(int seconds) { // Create a function to determine the number of hours and minutes
    int hours = seconds / 3600;  // Determine the number of whole hours
    int minutes = (seconds % 3600) / 60;  // Determine the number of whole minutes

    std::cout << "It's been " << hours << " hours and " << minutes << " minutes since the beginning of the day." << std::endl; // Output the results
}

// Task ten
void triangleIsosceles(int a, int b, int c) { // Create a function to check if the triangle is isosceles
    if ((a == b) || (a == c) || (b == c)) {         // If any two sides of the triangle are equal, then it is isosceles
        std::cout << "The triangle is isosceles." << std::endl;
    }
    else {
        std::cout << "The triangle is not isosceles." << std::endl;
    }
}

// Task eleven
void discount(int a) { // Create a function to check if the person will receive a discount
    if (a > 1000) {
        std::cout << "Since the purchase price is more than 1000 rubles, then your discount is 10%. Your price is " << a * 0.9 << std::endl; // Apply a 10% discount
    }
    else {
        std::cout << "There will be no discount. Your price is " << a << " rubles" << std::endl; // No discount
    }
}

// Task twelve
void recommendWeight(double height, double weight) { // Create a function to find the ideal weight of a person
    double idealWeight = height - 100; // Formula

    if (weight < idealWeight) {
        std::cout << "You should gain weight. The ideal weight for you: " << idealWeight << " kg\n"; // Too thin
    }
    else if (weight > idealWeight) {
        std::cout << "You should lose weight. The ideal weight for you: " << idealWeight << " kg\n"; // Overweight
    }
    else {
        std::cout << "You're already at your ideal weight!\n"; // Ideal
    }
}

// Task thirteen
bool multiplication(int number1, int number2, int answer) { // Create a function to determine if the person calculated correctly
    return answer == number1 * number2;
}

// Task fourteen
double calculateCost(double duration, int dayOfWeek) {
    double cost = duration * 2; /* I didn't understand why we need to enter the duration of the call,
                              if we don't know the cost per minute of the call based on the task conditions,
                              so let the cost per minute of the call be two dollars */

    if (dayOfWeek == 6 || dayOfWeek == 7) { // If it's Saturday or Sunday
        cost *= 0.8; // Apply a 20% discount
    }

    return cost;
}

// Task fifteen
void monthAndSeason(int month) { // Create a function to determine the month and season
    std::string monthName;
    std::string season;

    if (month == 1) {
        monthName = "January";
        season = "Winter";
    }
    else if (month == 2) {
        monthName = "February";
        season = "Winter";
    }
    else if (month == 3) {
        monthName = "March";
        season = "Spring";
    }
    else if (month == 4) {
        monthName = "April";
        season = "Spring";
    }
    else if (month == 5) {
        monthName = "May";
        season = "Spring";
    }
    else if (month == 6) {
        monthName = "June";
        season = "Summer";
    }
    else if (month == 7) {
        monthName = "July";
        season = "Summer";
    }
    else if (month == 8) {
        monthName = "August";
        season = "Summer";
    }
    else if (month == 9) {
        monthName = "September";
        season = "Autumn";
    }
    else if (month == 10) {
        monthName = "October";
        season = "Autumn";
    }
    else if (month == 11) {
        monthName = "November";
        season = "Autumn";
    }
    else if (month == 12) {
        monthName = "December";
        season = "Winter";
    }
    else {
        std::cout << "Invalid month number!" << std::endl;
        return;
    }

    std::cout << "The month is " << monthName << "." << std::endl;
    std::cout << "The season is " << season << "." << std::endl;
}

// Task sixteen
bool luckyNumber(int number) { // Create a function to determine if the number is a lucky number

    int left = number / 1000;  /* Split the number into two parts - left and right. Variable left gets the sum of digits in the left part of
                               the number. (left % 10) returns the last digit in the number, (left / 10) % 10 returns the second to last digit,
                               and left / 100 returns the first digit.
                               By adding these values, we get the sum of all digits in the left part of the number.
                               Similarly, the variable right gets the sum of digits in the right part of the number. */
    int right = number % 1000;
    int lsum = left % 10 + (left / 10) % 10 + left / 100;
    int rsum = right % 10 + (right / 10) % 10 + right / 100;

    if (lsum == rsum) {
        return true;
    }
    else {
        return false;
    }
}

// Task seventeen
void kopeyka(int number) { // Create a function to modify the word "kopeyka" to the correct form
    int lastDigit = number % 10;

    if (number >= 11 && number <= 19) {
        std::cout << number << " kopeek" << std::endl;
    }
    else if (lastDigit == 1) {
        std::cout << number << " kopeyka" << std::endl;
    }
    else if (lastDigit >= 2 && lastDigit <= 4) {
        std::cout << number << " kopeyki" << std::endl;
    }
    else {
        std::cout << number << " kopeek" << std::endl;
    }
}

// Task eighteen
                              /*1. Initially, the variable initNum contains the original number that we need to check for a palindrome.
                              2. In the while (initNum > 0) loop, the following actions are performed as long as initNum is greater than zero:
                              - The % 10 operator is used to get the last digit of the number initNum. For example, if initNum is 12345, then digit will be equal to 5.
                              - The variable reverse is multiplied by 10 and the value of digit is added to it. For example, if reverse is initially 0 and digit is 5, then after this operation, reverse will be equal to 5.
                              - Then the number initNum is divided by 10 using the /= 10 operator. For example, if initNum is initially 12345, then after this operation, initNum will become 1234.
                              - The loop repeats with the next digit of the number initNum until all the digits have been checked.
                              3. After the loop ends, the variable reverse will contain the number obtained by reversing the original number initNum.
                              4. Next, you can compare the original number with the reversed number. If they are equal, then the original number is a palindrome.
                              */
bool palindrome(int number) {
    int initNum = number;
    int reverse = 0;

    while (initNum > 0) {
        int digit = initNum % 10;
        reverse = reverse * 10 + digit;
        initNum /= 10;
    }

    if (number == reverse) {
        return true;
    }
    else {
        return false;
    }
}

// Task nineteen
bool initialGreaterThanB(int number, int b) { // Create a function for the first part of the task
    int initialNum = 1;

    while (number > 0) { /*The % operator returns the remainder of dividing the number by 10, i.e., the last digit of the number.
                         Then, the obtained digit is multiplied by the variable initialNum, which is initially set to 1. This allows calculating the product of all the digits in the number.
                         Then, the /= operator divides the number by 10, which allows "dropping" the last digit of the number.
                         Thus, these operations are repeated until the number becomes equal to 0, that is, until all the digits of the number have been processed.*/
        int digit = number % 10;
        initialNum *= digit;
        number /= 10;
    }

    if (initialNum > b) {
        return true;
    }
    else {
        return false;
    }
}


bool sumDivisibleBy7(int number) { // Define a function for the second part of the task
    int sum = 0;

    while (number > 0) {  // The logic is the same as I described above
        int digit = number % 10;
        sum += digit;
        number /= 10;
    }

    if (sum % 7 == 0) {
        return true;
    }
    else {
        return false;
    }
}

// Task twenty
bool fitRectangle(double a, double b, double c, double d) { // Create a function

    if ((a <= c && b <= d) || (a <= d && b <= c)) { /*A rectangle with sides a, b can be placed inside a rectangle with sides c, d in such a way
                                                    that the sides of one rectangle are parallel to the sides of the other, if these conditions are met.*/
        return true;
    }
    else {
        return false;
    }
}

int main() {
    // Task one
    double base1, base2, height;
    std::cout << "Enter the length of the first base of the trapezoid: "; // Enter all the data
    std::cin >> base1;
    std::cout << "Enter the length of the second base of the trapezoid: ";
    std::cin >> base2;
    std::cout << "Enter the height of the trapezoid: ";
    std::cin >> height;

    double area = areaOfTrap(base1, base2, height); // Find the area of the trapezoid
    std::cout << "Trapezoid Area: " << area << std::endl; // Output the area of the trapezoid


    // Task two
    double rad;
    std::cout << "Enter the radius of the circle: "; // Enter the radius
    std::cin >> rad;

    double length = circleLength(rad); // Find the circumference
    std::cout << "Circle Length: " << length << std::endl; // Output it

    double area1 = circleArea(rad); // Find the area of the circle
    std::cout << "Circle Area: " << area1 << std::endl; // Output it



    // Task three
    double base, height1;
    std::cout << "Enter the base and height of the triangle: "; // Enter the required data
    std::cin >> base >> height1;

    double triangle_Area = triangleArea(base, height1); // Find the area
    std::cout << "Area of the triangle: " << triangle_Area << std::endl;

    double side1, side2;
    std::cout << "Enter the lengths of the two sides of the triangle: "; // Enter the required data
    std::cin >> side1 >> side2;

    double hyp = hypot(side1, side2); // Find the hypotenuse
    std::cout << "Hypotenuse of the triangle: " << hyp << std::endl;

    // Task four
    int number;
    std::cout << "Enter a four-digit number: "; // Enter a 4-digit number
    std::cin >> number;

    int sum = sumOfDigits(number); // Find the sum
    std::cout << "The sum of the digits of the number is: " << sum << std::endl; // Output the sum

    // Task five
    double x, y, r, theta;
    std::cout << "Enter the value of x: "; // Enter the data
    std::cin >> x;
    std::cout << "Enter the value of y: ";
    std::cin >> y;
    decToPolar(x, y, r, theta); // Call the function

    std::cout << "The polar coordinates are: (" << r << ", " << theta << " radians)" << std::endl; // Output the coordinates

    // Task six
    double r1, theta1, x1, y1;
    std::cout << "Enter polar coordinates (r, theta): "; // Enter the data
    std::cin >> r1 >> theta1;
    polarToDec(r1, theta1, x1, y1); // Call the function

    std::cout << "The Cartesian coordinates are: (" << x1 << ", " << y1 << ")" << std::endl; // Output the coordinates



    // Task seven
    double a, b, c;
    std::cout << "Enter the coefficients of the quadratic equation (a, b, c): "; // Enter the coefficients
    std::cin >> a >> b >> c;

    equation(a, b, c); // Call the function

    // Task eight
    double side_a, side_b, side_c;
    std::cout << "Enter the value of side a: "; // Enter the sides of the original triangle
    std::cin >> side_a;
    std::cout << "Enter the value of side b: ";
    std::cin >> side_b;
    std::cout << "Enter the value of side c: ";
    std::cin >> side_c;

    findMedians(side_a, side_b, side_c); // Call the function

    // Task nine
    int sec;  // Create a variable to store the second of the day
    std::cout << "Enter the number of the second of the day: "; // Enter the value of the second of the day
    std::cin >> sec;
    calculateTime(sec); // Call the function to determine the integer number of hours and minutes

    // Task ten
    int side_aIso, side_bIso, side_cIso;
    std::cout << "Enter the value of side a: "; // Enter the sides of the triangle
    std::cin >> side_aIso;
    std::cout << "Enter the value of side b: ";
    std::cin >> side_bIso;
    std::cout << "Enter the value of side c: ";
    std::cin >> side_cIso;
    triangleIsosceles(side_aIso, side_bIso, side_cIso); // Call the function to check for isosceles triangle

    // Task eleven
    int price;
    std::cout << "Enter the price in rubles: "; // Enter the price of the product in rubles
    std::cin >> price;
    discount(price); // Call the function to check if the person will get a discount

    // Task twelve
    double heighthuman, weight;
    std::cout << "Enter your height (in centimeters): "; // Enter your height
    std::cin >> heighthuman;
    std::cout << "Enter your weight (in kilograms): "; // Enter your weight
    std::cin >> weight;
    recommendWeight(heighthuman, weight); // Call the function



    // Task thirteen
    std::srand(std::time(0));  /* We use the current time (in seconds) as a seed for the random number generator
                                to get different random numbers each time the program is run.*/
    int numberOne = std::rand() % 9 + 1;  // Generate two random numbers in the range from 1 to 9
    int numberTwo = std::rand() % 9 + 1;

    std::cout << "Enter the result of multiplying the numbers: " << numberOne << " and " << numberTwo << ": "; // Enter two digits
    int answer;
    std::cin >> answer;
    if (multiplication(numberOne, numberTwo, answer)) { // Call the function
        std::cout << "You're right, congratulations!\n";
    }
    else {
        std::cout << "Unfortunately, you made a mistake. Try again!\n";
    }

    // Task fourteen
    double duration;
    int dayOfWeek;

    std::cout << "Enter the duration of the conversation (in minutes): "; // Enter the duration of the conversation
    std::cin >> duration;

    std::cout << "Enter the day of the week (1-7): "; // Enter the day of the week
    std::cin >> dayOfWeek;

    double cost = calculateCost(duration, dayOfWeek); // Call the function
    std::cout << "The final cost of the conversation is: $" << cost << std::endl; // Output the result

    // Task fifteen
    int month;
    std::cout << "Enter the month number (1-12): "; // Enter the value
    std::cin >> month;
    monthAndSeason(month); // Call the function

    // Task sixteen
    int numberLuc;
    std::cout << "Enter a six-digit number: "; // Enter the data
    std::cin >> numberLuc;
    if (numberLuc >= 100000 && numberLuc <= 999999) {
        if (luckyNumber(numberLuc)) {
            std::cout << "The number is a lucky number!" << std::endl; // lucky
        }
        else {
            std::cout << "The number is not a lucky number!" << std::endl; // unlucky
        }
    }

    // Task seventeen
    int numberKop;
    std::cout << "Enter a number between 1 and 99: "; // Enter the value
    std::cin >> numberKop;
    if (numberKop >= 1 && numberKop <= 99) {
        kopeyka(numberKop);
    }


    // Task eighteen
    int numberPal;
    std::cout << "Enter a four-digit number: "; // Enter the value
    std::cin >> numberPal;

    if (palindrome(numberPal)) {
        std::cout << "The number is a palindrome." << std::endl; //palindrome
    }
    else {
        std::cout << "The number is not a palindrome." << std::endl; //not a palindrome
    }

    // Task nineteen
    int numberThreeDigit;
    int B;
    std::cout << "Enter a three-digit number: "; // Enter a three-digit number
    std::cin >> numberThreeDigit;
    std::cout << "Enter the value of b: "; // Enter the value of b
    std::cin >> B;

    if (initialGreaterThanB(numberThreeDigit, B)) {
        std::cout << "The product of the digits is greater than the number b." << std::endl; //greater
    }
    else {
        std::cout << "The product of the digits is not greater than the number b." << std::endl; //less
    }

    if (sumDivisibleBy7(numberThreeDigit)) {
        std::cout << "The sum of the digits is a multiple of 7." << std::endl; //divisible by 7
    }
    else {
        std::cout << "The sum of the digits is not a multiple of 7." << std::endl; //not divisible by 7
    }

    // Task twenty
    double A1, B1, C1, D1;

    std::cout << "Enter the sides of the rectangles (a, b, c, d): "; // Enter all values
    std::cin >> A1 >> B1 >> C1 >> D1;

    if (fitRectangle(A1, B1, C1, D1)) { /* Check if a rectangle with sides a, b can fit inside a rectangle with sides c, d such that
                                        the sides of one rectangle are parallel to the sides of the other.*/
        std::cout << "Rectangle with sides " << A1 << " and " << B1 << " can fit inside rectangle with sides " << C1 << " and " << D1 << std::endl;
    }
    else {
        std::cout << "Rectangle with sides " << A1 << " and " << B1 << " cannot fit inside rectangle with sides " << C1 << " and " << D1 << std::endl;
    }

    return 0;
}