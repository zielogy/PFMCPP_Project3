#include <iostream>
#include <string>

/*
Project 3 - Part 1a-e / 5
Video:  Chapter 2 Part 5
User-Defined Types

Purpose: The entire purpose of Project 3 is to get you
writing real C++ code that compiles and runs and to reinforce the syntax habits
that C++ requires.
What you create in this project will be used as the basis of
Project 5.

************************
Part1 purpose:  Learn to write User-Defined Types (UDTs)

You are going to write 10 UDTs in Project3.
Part1 will be broken up into 5 sub-parts, all on the same branch.
    Part 1a (3 steps): you will learn to think about an object in terms of
    its sub-parts (sub-objects).

    Part 1b (3 steps): you will write 4 un-related UDTs in plain English.

    Part 1c (5 steps): you will write 1 UDT in plain English that will be
    made from 5 related sub-objects.

    Part 1d (8 steps): you will write plain-English UDTs for the 5
    sub-objects that form the UDT defined in Part 1c.

    Part 1e (19 steps): you will convert those 10 plain-English UDTs into code
    that compiles and executes.
*/
/*
*********************************************************************************
************************************ PART 1A
*************************************
*********************************************************************************
*/

/*
=================
Setup - Assignment:
=================
Create a branch named 'Part1' from the 'master' branch, just like you did in
Project 1 and Project 2
*/

/*
=================
Part 1a - Step 1: Lesson
=================
When we are trying to get a computer to perform work for us, we must define
attributes and actions that we want done. When there is a lot of work to be
done, it is easiest to break that job into smaller parts. A good example of this
is a car. A car does a lot of work and uses smaller parts that have specific,
focused jobs to get all of that work done.
- we need the engine to provide the power to drive the wheels.
- We need the brakes to provide resistance to slow the wheels down.
- We need an electrical system to power the lights.
- We need the lights to alert the people around us what we plan on doing and to
illuminate the path ahead of us.

Remember this concept of breaking work/objects down into smaller parts while you
complete the rest of this project. It is a simple concept but it is the
foundation that all software design is built upon.
*/

/*
=================
Part 1a - Step 2: Assignment
=================
    - Look at the picture of the car interior (Part1a pic.jpg).
    - The picture in the list of files on the left in Replit.
    - take note of the different sub-objects that you see in the interior.

    Several sub-objects are listed below that can be found in this car's
interior.

    - you're going to name several things that you'll find on each
    sub-object. (nouns)
    - you're going to name several things that each sub-object can do. (verbs)
    - A few blanks are filled in for you already.

    Fill in the remaining blanks below which describe this car interior in terms
of sub-objects.

Main Object: Car Interior
    Sub Object: Steering Wheel
        Name 4 nouns you'll find on the [Sub Object]
            1) paddle shifters
            2) 'cruise control' controls
            3) Horn
            4) 'Audio' controls
        Name 2 actions that the [Sub Object] can do:
            1) adjust cruise control settings.
            2) increase volume of head unit

    Sub Object: Instrument Cluster
        Name 4 nouns you'll find on the [Sub Object]
            1) trip odometer
            2) engine speed/RPM
            3) fuel level
            4) engine temperature
        Name 3 actions that the [Sub Object] can do:
            1) check trip odometer
            2) monitor fuel level
            3) check engine speed/RPM

    Sub Object: Environment Controls
        Name 3 nouns you'll find on the [Sub Object]
            1) AC climate control
            2) switch on/off head unit
            3) gear shift transmissions
        Name 3 actions that the [Sub Object] can do:
            1) increase/decrease AC temperature
            2) turn on/off head unit
            3) shifting transmissions

    Sub Object: Infotainment System
        Name 3 nouns you'll find on the [Sub Object]
            1) navigation
            2) radio
            3) apple car play
        Name 3 actions that the [Sub Object] can do:
            1) enter destination
            2) choose radio frequency
            3) connect to apple car play

    Sub Object: Seat
        Name 3 nouns you'll find on the [Sub Object]
            1) head rest
            2) reclining controls
            3) lumbar support controls
        Name 2 actions that the [Sub Object] can do:
            1) adjust headrest
            2) adjust reclining position
*/

/*
=================
Part 1a - Step 3: Commit!
=================
Now that you've made changes to the code, make a commit!
Be sure to make the commit message meaningful.
*/

/*
*********************************************************************************
************************************ PART 1B
*************************************
*********************************************************************************
*/
/*
=================
Part 1b - Step 1: Lesson
=================
Now you have some basic understanding of how to think of an object
in terms of its sub-objects.

Next you will write 4 un-related UDTs in plain English:
example:

Thing: Car Wash
    5 properties:
        - number of vacuum cleaners
        - number of eco-friendly cleaning supplies
        - the amount of water used per week.
        - amount of profit made per week
        - number of cars serviced per day
    3 things it can do:
        - wash and wax car
        - charge customer
        - detail the car interior

    Notice that I did not use "has a vacuum cleaner" or "Has
    eco-friendly cleaning supplies" as one of the properties.

    Writing 'has a ___' checks whether or not your object ** has the
    ability to do something ** or ** has a particular thing **.
    Instead, I wrote "number of vacuum cleaners" and "number of
    eco-friendly cleaning supplies".

    These are specific objects or amounts.

    In C++ terms this means to I want you to avoid using 'bool'
    (has a) as a member variable type.
    Instead, prefer the other primitive types.

    In addition to the usual primitives (covered in Project 2), you
    can use 'std::string' to represent strings of text in this project.
 */

/*
=================
Part 1b - Step 2: Assignment
=================
    - Fill in the 4 UDTs below with a random UDT in plain English.
    - These 4 UDTs do not need to be related.
        a) For each plain-English UDT, write out 5 traits or
        properties and 3 things it can do.
        b) remember: these properties will eventually become
        primitives.
        c) pick properties that can eventually be represented with
        'int float double bool char std::string'.


*/

/*
=================
Part 1b - Step 3: Commit
=================
Now that you've made changes to the code, make a commit!
Be sure to make the commit message meaningful.
*/
/*
*********************************************************************************
************************************ PART 1C
*************************************
*********************************************************************************
*/
/*
=================
Part 1c - Step 1: Lesson
=================
You have just finished practicing writing out a UDT that has
5 properties and can perform 3 actions.

Now you will write 1 more UDT in plain English.

This UDT will be different than the previous 4 you wrote: It will
use other UDTs to describe its 5 properties, as opposed to using C++
primitives to describe the 5 properties.

You will define these 5 other 'property' UDTs in Part 1d.

Example:
   UDT: Cell Phone

   A Cell Phone is built using the following 5 UDTs:
       Display
       Memory
       CPU
       Radio
       Applications

   A Cell Phone has 3 things it can do:
       make a call
       send a text
       run an application.

   Notice that I did not use "has a display" or "Has memory" or
   "has a cpu" as one of the properties of the CellPhone.

   Writing 'has a ___' checks whether or not your object ** has the
   ability to do something ** or ** has a particular thing **.
   Instead, I wrote "Display" or "CPU".  These are specific
   objects.

   In C++ terms, this means to I want you to AVOID USING 'bool'
   (has a) as a member variable type.
   Instead, prefer the other primitive types or custom UDT.

   When you choose your 5 smaller parts, remember that each of
   these 5 Sub Objects will need to be defined with 5 primitive
   properties and 3 actions EACH.
*/

/*
===================
Part 1c - Step 2: Assignment
===================
    - write the name of the primitive type you'll be using after each property
in UDTs 1-4 you created in Part 1b:
    - pick properties that can be represented with 'int float double bool char
std::string'.

example:
    Display:
        Number of Pixels (int)
        Amount of Power consumed (milliwatt-hours) (float)
        Brightness (double)
        area in cm2 (int)
        brand (std::string)
*/

/*
=================
Part 1c - Step 3: Commit
=================
Now that you've made changes to the code, make a commit!
Be sure to make the commit message meaningful.
*/

/*
=================
Part 1c - Step 4: Assignment
=================
2) Fill in the 10th UDT below.
Define an object that is made of 5 sub-objects.
    These 5 sub-objects will not be defined using Primitives, but instead will
be their own UDTs you'll define these 5 sub-objects in Part 1d.


 */

/*
=================
Part 1c - Step 5: Commit
=================
Now that you've made changes to the code, make a commit!
Be sure to make the commit message meaningful.
*/

/*
*********************************************************************************
************************************ PART 1D
*************************************
*********************************************************************************
*/
/*
=================
Part 1d - Step 1: Lesson
=================
You now know how to define a UDT that is composed of other UDT.
Now you will learn how to break down those sub-object UDTs into
their 5 properties and 3 actions.

The goal of Part 1d is to get you to think about breaking down an
object into smaller and smaller objects, until the smallest object
is made up of only C++ primitives and std::string.

Revisiting the previous example: Cell Phone

A Cell Phone is made up of the following 5 properties/sub-objects
and 3 actions:
    Display
    Memory
    CPU
    Radio
    Applications
3 actions:
    make a call
    send a text
    run an application.

These 5 properties can be broken down into their own sub-objects (UDTs).

If we break down the first property 'Display' into its 5 properties
we get:
    brightness
    amount of power consumed.
    pixels
    width in cm
    height in cm

the Display's brightness can be represented with a Primitive,
such as a double.

The amount of power consumed can also be represented with a
Primitive, such as a float or integer (i.e. 250mW)

The 'pixels' property must be represented with an array of Pixel
instances, as the screen has more than 1 row of pixels.
    Arrays have not been discussed and can't be used in this
    project.
    Instead, we can use an Integer primitive to store the
    Number of Pixels:

Display:
    Number of Pixels
    Amount of Power consumed (milliwatt-hours)
    Brightness
    width in cm
    height in cm

As you can see, the 'Display' UDT has been broken down to the
point of being able to describe it with C++ primitives.
*/

/*
===================
Part 1d - Step 2: Assignment
===================
-  Fill in #5 - #9 below with plain-English UDTs for the 5 properties you
created for UDT #10.

example:
    If #10's first property was 'Engine', then `Thing 5)` will be `Engine`.
    You will need to provide 5 properties and 3 member functions of that Engine
object in plain English. Remember to pick properties that can be represented
with 'int float double bool char std::string'.

 */

/*
=================
Part 1d - Step 3: Commit
=================
Now that you've made changes to the code, make a commit!
Be sure to make the commit message meaningful.
*/

/*
================
Part 1d - Step 4: Assignment
================
    - write the name of the primitive type you'll be using after each property
for UDTs 5 - 9.
    - You already did this for UDTs 1-4 in Part 1c.
    - Pick properties that can be represented with 'int float double bool char
std::string'

example:
    Display:
        Number of Pixels (int)
        Amount of Power consumed (milliwatt-hours) (float)
        Brightness (double)
        width in cm (int)
        height in cm (int)
*/

/*
=================
Part 1d - Step 5: Commit
=================
Now that you've made changes to the code, make a commit!
Be sure to make the commit message meaningful.
*/

/*
===================
Part 1d - Step 6: assignment
===================
You've just defined 10 UDTs!
4 of them are unrelated (UDTs 1-4).
5 of them form the sub-objects that make up the 10th UDT.

MOVE THEM to the space below this block comment and put them in numerical order
(1 - 10).
    DO NOT COPY.
    CUT AND PASTE.
    I do not want to see 2 copies of your Plain-English UDTs.
    I only want to see the 10 UDTs written BELOW this block comment, in
numerical order (1 - 10). simply CUT and PASTE them in the space provided below:
*/

/*
Thing 1) F1 Race
5 properties:
    1) number of car brand participate (int)
    2) amount of viewer per race (int)
    3) number of circuit (int)
    4) total racer participate (int)
    5) total of engineer per car (int)
3 things it can do:
    1) generate revenue from race 
    2) do race 
    3) press confrence after race 

Thing 2) Restaurant
5 properties:
    1) number of waiter (int)
    2) count of revenue per day (float)
    3) number of chef (int)
    4) raw material (std::string)
    5) menu (std::string)
3 things it can do:
    1) made food for customer
    2) charge customer
    3) serving customer

Thing 3) IKEA Store
5 properties:
    1) article no (int)
    2) number of co worker (int)
    3) average revenue per day (double)
    4) number of stores (int)
    5) food menu (std::string)
3 things it can do:
    1) Delivery order to customer
    2) showcase room setting
    3) return articles

Thing 4) Hotel
5 properties:
    1) number of rooms (int)
    2) hotel menu (std::string)
    3) total of co worker (int)
    4) count of smoking room (int)
    5) average visit per day (int)
3 things it can do:
    1) provide room service
    2) book room for stay
    3) reserve hotel restaurant

Thing 5) barcode scanner
5 properties:
    1) infrared scanner type (int)
    2) height in cm (int)
    3) width in cm (int)
    4) sensitivity (float)
    5) build of material (std::string)
3 things it can do:
    1) swith on infrared scanner
    2) configure sensitivity
    3) connect with computer

Thing 6) customer pole display
5 properties:
    1) screen resolution (int)
    2) height in cm (int)
    3) width in cm (int)
    4) power consumption (wh) (float)
    5) brand (std::string)
3 things it can do:
    1) configure text to display
    2) check connection with POS
    3) turn on/off

Thing 7) main POS display
5 properties:
    1) screen resolution (int)
    2) height in cm (int)
    3) width in cm (int)
    4) screen to bezel ratio (int)
    5) brightness level (float)
3 things it can do:
    1) adjust screen resolution
    2) adjust brightness level
    3) connect to computer

Thing 8) receipt printer
5 properties:
    1) height in cm (int)
    2) weight in cm (int)
    3) paper roll size (float)
    4) power consumption (wh) (int)
    5) button type (int)
3 things it can do:
    1) turn on/off
    2) print receipt
    3) connect to POS

Thing 9) cash drawer
5 properties:
    1) ejector type (int)
    2) compartment size (float)
    3) key type (int)
    4) mounting size (float)
    5) braket size (float)
3 things it can do:
    1) put money
    2) open cash drawer
    3) connect to POS

Thing 10) POS
5 properties:
    1) barcode scanner
    2) customer display
    3) main display
    4) receipt printer
    5) cash drawer
3 things it can do:
    1) Input transaction
    2) print reciept
    3) open cash drawer
*/

/*
=================
Part 1d - Step 7: Commit
=================
Now that you've made changes to the code, make a commit!
Be sure to make the commit message meaningful.
*/

/*
=================
Part 1d - Step 8: Request a review
=================
After you have MOVED/CUT-AND-PASTED your 10 UDTs, send me a DM with your pull
request link. I will review the pseudo-code that you have written. If approved,
you'll start on Part 1e
*/

/*
*********************************************************************************
************************************ PART 1E
************************************
*********************************************************************************

NOTE: do not write namespace <SomeName> { } around your code like I have done
here. I'm only doing it to prevent compiler errors. ignore these lines and focus
on the example code inside of the namespace  <SomeName> { }
*/

namespace Part1E_Instructions {
/*
=================
Part 1e - Step 1: Assignment and Example Info
=================
NOTE: I recommend compiling after each step before committing and making sure it
compiles without errors or warnings before moving on to writing the next UDT.

Goal: Convert your 10 Plain-English UDTs into code.

Task: define an empty struct below your plain-English UDT.
- Do this for all 10 UDTs
*/
namespace Part1E_Step1 {
/*

my plain-English UDT:

Thing 1): Car Wash
    5 properties:
        1) number of vacuum cleaners
        2) number of eco-friendly cleaning supplies
        3) stores the amount of water used per week.
        4) stores amount of profit made per week
        5) number of cars serviced per day
    3 things it can do:
        1) wash and wax car
        2) charge customer
        3) detail the car interior
 */
struct CarWash // This is the empty struct, below my plain-English UDT.
{
  // notice that no code is written inside the curly braces.
};
/*
Notice that the struct name 'CarWash' conforms with the Course Coding Standard,
described in the Readme.MD
*/


/*
=================
Part 1e - Step 2: Commit
=================
Now that you've made changes, make a commit!
Be sure to make the commit message meaningful.
*/

} // end namespace Part1E_Step1

namespace Part1E_Step3 {
/*
=================
Part 1e - Step 3: Assignment
=================
    - Below your plain-English UDT, Copy your 5 properties & 3 actions into the
empty struct body.
    - comment them out.
    - Do this for all 10 UDTs
    */

struct CarWash {
  // 5 properties:
  //     - number of vacuum cleaners
  //     - number of eco-friendly cleaning supplies
  //     - stores the amount of water used per week.
  //     - stores amount of profit made per week
  //     - number of cars serviced per day
  // 3 things it can do:
  //     - wash and wax car
  //     - charge customer
  //     - detail the car interior
};


/*
=================
Part 1e - Step 4: Commit
=================
Now that you've made changes, make a commit!
Be sure to make the commit message meaningful.
*/
} // end namespace Part1E_Step3

namespace Part1E_Step5 {
/*
=================
Part 1e - Step 5: Assignment
=================
    - declare your member variables using camelCase versions of the
plain-english properties
    - give the member variables relevant data types and reasonable default
values
    - Do this for all 10 UDTs
 */
struct CarWash {
  // number of vacuum cleaners
  int numVacuumCleaners = 3;
  // number of eco-friendly cleaning supplies
  int numEcoFriendlyCleaningSupplies = 20;
  // stores the amount of water used per week.
  float waterUsedPerWeek = 200.f;
  // stores amount of profit made per week
  float profitPerWeek = 495.95f;
  // number of cars serviced per day
  int numberOfCarsServiced = 10;
  // 3 things it can do:
  //     - wash and wax car
  //     - charge customer
  //     - detail the car interior
};

/*

=================
Part 1e - Step 6: Commit
=================
Now that you've made changes, make a commit!
Be sure to make the commit message meaningful.
*/
} // end namespace Part1E_Step5

namespace Part1E_Step7 {
/*
=================
Part 1e - Step 7: Assignment
=================
  - declare your member functions underneath each plain-English comment in your
struct's body.
  - add function parameters where it makes sense to have them.
  - if your functions return something other than 'void', add a comment
explaining what is being returned.  see the example code below.
  */
struct CarWash {
  // number of vacuum cleaners
  int numVacuumCleaners = 3;
  // number of eco-friendly cleaning supplies
  int numEcoFriendlyCleaningSupplies = 20;
  // stores the amount of water used per week.
  float waterUsedPerWeek = 200.f;
  // stores amount of profit made per week
  float profitPerWeek = 495.95f;
  // number of cars serviced per day
  int numberOfCarsServiced = 10;

  // 3 things it can do:
  // wash and wax car
  void washAndWaxCar();

  // charge customer       //NOTE: function parameter is relevant to the work
  // that the function performs
  float
  chargeCustomer(float discountPercentage); // returns the total amount charged.

  // detail the car interior
  void detailInterior();
};


/*
=================
Part 1e - Step 8: Commit
=================
Now that you've made changes, make a commit!
Be sure to make the commit message meaningful.
*/
} // end namespace Part1E_Step7

namespace Part1E_Step19 {
/*
=================
Part 1e - Step 9: Assignment
=================
5) Declare/define a nested class inside 2 of the 9 user-defined types.
    - Do not declare/define a nested class in UDT #10
    - this nested class also needs 5 properties and 3 actions.
    - these nested classes are in addition to the 10 UDTs you are defining in
this project.
    - this nested class MUST be related to the class it is nested inside
*/
struct CarWash {
  // number of vacuum cleaners
  int numVacuumCleaners = 3;
  // number of eco-friendly cleaning supplies
  int numEcoFriendlyCleaningSupplies = 20;
  // stores the amount of water used per week.
  float waterUsedPerWeek = 200.f;
  // stores amount of profit made per week
  float profitPerWeek = 495.95f;
  // number of cars serviced per day
  int numberOfCarsServiced = 10;

  // this is the nested UDT:
  struct Car // Note that the nested type 'Car' is related to the 'CarWash'
  {
    // 5 member variables with relevant data types.  the names are relevant to
    // the UDT's purpose.
    bool isAPickupTruck = false;
    float gasMileage = 26.2f;
    int year = 1985;
    std::string manufacturer = "Toyota";
    std::string model = "Corolla";

    // 3 member functions.
    // they take multiple parameters. some parameters have default values.
    // the parameter names are related to the work the function will perform.
    // all function and variable names conform to the course coding standard,
    // described in the Readme.MD file
    void fillTank(float costPerGallon, double fuelAmountInGallons = 2.0,
                  bool requiresDiesel = false);
    void breakDown(std::string failureType, bool requiresTow = false);
    int getMilesTraveledAnnually(
        bool includeUberLyftTrips); // 3) returns the number of miles traveled
  };                                // this is the end of the nested class

  // 3 things it can do:
  // wash and wax car
  void washAndWaxCar();

  // charge customer       //NOTE: function parameter is relevant to the work
  // that the function performs
  float
  chargeCustomer(float discountPercentage); // returns the total amount charged.

  // detail the car interior
  void detailInterior();
};


/*
=================
Part 1e - Step 10: Commit
=================
Now that you've made changes, make a commit!
Be sure to make the commit message meaningful.
*/
} // namespace Part1E_Step19

namespace Part1E_Step11 {
/*
=================
Part 1e - Step 11: Assignment
=================
4) make the function parameter lists for your UDTs' member functions use some of
your User-Defined Types.
    - You'll write definitions/implementations for these functions in Project3
Part2
    - you'll call each of these functions in Project3 part3
    - You can use the nested classes you just created.  see the example code
below
    - You can also declare instances of these nested classes as member
variables, but the intended usage must make sense and must compile without
errors.  see the note below the example code.

Remember: in C++ you cannot use something before it is declared.
The compiler parses the files from top to bottom.
This means you can only use a UDT AFTER you have written the closing curly brace
for it };

Keep this in mind when you define the function parameter lists to use some of
your User-Defined Types.
*/
struct CarWash {
  // number of vacuum cleaners
  int numVacuumCleaners = 3;
  // number of eco-friendly cleaning supplies
  int numEcoFriendlyCleaningSupplies = 20;
  // stores the amount of water used per week.
  float waterUsedPerWeek = 200.f;
  // stores amount of profit made per week
  float profitPerWeek = 495.95f;
  // number of cars serviced per day
  int numberOfCarsServiced = 10;

  struct Car {
    bool isAPickupTruck = false;
    float gasMileage = 26.2f;
    int year = 1985;
    std::string manufacturer = "Toyota";
    std::string model = "Corolla";

    void fillTank(float costPerGallon, double fuelAmountInGallons = 2.0,
                  bool requiresDiesel = false);
    void breakDown(std::string failureType, bool requiresTow = false);
    int getMilesTraveledAnnually(bool includeUberLyftTrips);
  };

  // wash and wax car
  void washAndWaxCar(Car car); // a member function whose parameter is a UDT.
  // Notice that `Car car` is written AFTER `struct Car { ... };

  // charge customer
  float chargeCustomer(float discountPercentage);
  // detail interior
  void detailInterior(Car car);

  // 5) a member variable whose type is a UDT.
  Car carBeingServiced; // Notice that this is written AFTER `struct Car { ...
                        // };
};
/*
A Note regarding functions that use UDTs in their parameter list:
Pay attention to the member functions that take an instance of 'Car'
Notice that there is a member variable of the same type.

It makes sense to pass a Car to the function 'washAndWaxCar' because car
washes service MANY cars However, they only service ONE car at a time. the
carBeingServiced's value would change every time you wash and wax the car.

I see many students who write code emulating this format, but their usage does
not make logical sense. Consider the following snippet:

struct SoccerTeam
{
    struct Manager
    {
        ...
    };

    // train their skills
    void trainPlayerSkills(Manager managerA);

    Manager teamManager;
};

It does not make sense to pass in a new Manager whenever you are going to
train your team players. Soccer teams have ONE manager.

a much more relevant usage would be adding a member function that hires a new
manager:

struct SoccerTeam
{
    struct Manager
    {
        ...
    };

    void hireNewManager(Manager newManager);

    Manager teamManager;
};

We can safely assume that the 'Manager' instance that is being passed to that
function will be replacing the current 'teamManager' variable without looking
at any other code. This is because the function name and function argument
clearly indicate what they are/what they do.

Your function names and parameter names should make LOGICAL SENSE.
Readers of your code should be able to INTUITIVELY understand what your
function implementations will do without actually seeing the implementations.

Keep this in mind when you define your UDTs in this project part.
*/

/*
=================
Part 1e - Step 12: Commit
=================
Now that you've made changes, make a commit!
Be sure to make the commit message meaningful.
*/
} // end namespace Part1E_Step11

namespace Part1E_Step13 {
/*
=================
Part 1e - Step 13: Assignment
=================
6) your 10th UDT's properties should be instances of your #5-#9 UDTs.
    - No primitives allowed!
    - see the example below, which uses the 10th UDT example from Part 1C
    note: the example UDTs 5-9 below are empty, solely for the purpose of
keeping the example easy to understand
 */

struct Display // UDT 5
{
  /* empty just to make the example easy to follow */
};
struct Memory {};       // UDT 6
struct CPU {};          // UDT 7
struct Radio {};        // UDT 8
struct Applications {}; // UDT 9

// UDT 10, from Part 1c example
struct CellPhone {
  Display display; // a member variabledeclaration of an instance of UDT 5
  Memory memory;   // a member variabledeclaration of an instance of UDT 6
  CPU cpu;         // a member variabledeclaration of an instance of UDT 7
  Radio radio;     // a member variabledeclaration of an instance of UDT 8
  Applications
      applications; // a member variabledeclaration of an instance of UDT 9

  bool makeACall(std::string number); // returns true if the call connected
  bool
  sendAText(std::string number,
            std::string messageToSend); // returns true if the text was sent
  int runApplication(
      std::string applicationName); // returns how much memory (bytes) the
                                    // application asked for
};

/*
=================
Part 1e - Step 14: Commit
=================
Now that you've made changes, make a commit!
Be sure to make the commit message meaningful.
*/
} // end namespace Part1E_Step13
/*
=================
Part 1e - Step 15: Assignment
=================
7) After you finish defining each type, click the [run] button.
   Clear up any errors or warnings as best you can.
   if your code produces a [-Wpadded] warning, add '-Wno-padded' to the .replit
file with the other compiler flags (-Weverything -Wno-missing-prototypes etc
etc)
*/

/*
=================
Part 1e - Step 16: Commit
=================
Now that you've made changes, make a commit!
Be sure to make the commit message meaningful.
*/

/*
=================
Part 1e - Step 17: Move your finished UDTs
=================
MOVE your 10 UDTs to the blank space below step 19 by cutting/pasting
Re-run your project to make sure everything compiles without errors or warnings.
Fix anything that needs fixing

You should see "good to go" in the program output
*/

/*
=================
Part 1e - Step 18: Commit
=================
Now that you've made changes, make a commit!
Be sure to make the commit message meaningful.
*/

/*
=================
Part 1e - Step 19: Request a review
=================
*/
} // end namespace Part1E_Instructions

/*
paste your code below
*/

struct F1Race
{
   
    int numCarBrand = 12;
  
    int amtViewerPerRace = 10000;
  
    int numOfCircuit = 20;
  
    int totalRacer = 24;
 
    int numOfEngineerPerCar = 50;

    double calcRevenuePerRace(int numViewer, double incSponsorship); // return total revenue

    void doRace();

    void pressConference();
};


struct Restaurant
{

    int numOfWaiter = 7;

    float revenuePerDay = 12500.50f;

    int numOfChef = 2;

    std::string rawMaterial = "salt";

    std::string menu = "fried rice";

    void madeFood(std::string orderedMenu, int totalOrder);

    double customerBilling(int numOrderedMenu, int numCustomer,
                            float price); // return customer billing

    void servingCustomer(int orderNumber, std::string orderedMenu);
};


struct IKEAStore 
{
    int artNo = 19240788;

    int numOfCoWorker = 1200;

    double avgRevenuePerDay = 200000.234123;

    int numOfStores = 7;

    std::string foodMenu = "Sweedish Meatball";
    
    //Nested class
    struct IKEACafe
    {
        std::string storeName = "Alam Sutera";
    
        int numOfChair = 80;

        int totalVariantMenu = 30;

        std::string beverageMenu = "Ice Americano";

        int coWorkerPerShift = 2;

        float calcTotalOrder (std::string menu, int quantity, float price); //return total order price from cust

        void makeOrder (int orderID, std::string menu, int quantity);

        void changeCoWorkerShift();
    
    };

    void deliverToCustomer(int totalOrder, std::string customerDetail,
                           std::string deliveryAddress);
    
    void showCaseRoomSetting(int roomSize, std::string roomName,
                             std::string targetCustomer);
 
    void returnArticle(std::string articleName, std::time_base returnTime,
                       int receiptNum, std::string customerName);
    
    //UDT function
    IKEACafe cafe;

    void contactlessFoodOrdering (IKEACafe cafe, std::string beverageMenu, int quantity,
                                    std::string customerName);
    
};

struct Hotel 
{
    int numOfRooms = 70;

    std::string hotelMenu = "Tuna sandwich";

    int totalCoWorker = 100;

    int cntSmookingRoom = 10;

    int avgVisitPerDay = 40;
     
    void roomService(int roomNumber, std::string requestedService);
  
    void bookRoom(int roomNumber, std::time_base date, std::string visitorName,
                    float price);
 
    void reserveRestaurant(std::string customerName, int numofCustomer);
};

struct BarcodeScanner 
{
    int infraredType = 1;

    int height = 3;

    int width = 2;

    float sensitivity = 0.75f;

    std::string bom = "Plastic";
    
    void turnOn();
  
    void configureSensitivity(int newNumber);

    bool connectingStatus(int portNumber); // return status connection with Computer
    
};

struct CustomerPoleDisplay 
{
    int screenResolution = 2160;

    int height = 10;

    int width = 3;

    float powerConsumption = 10.2f;

    std::string brand = "Dell";


    void textToDisplay(std::string text);

    bool checkConnection(int portNumber); // return status connection with POS

    void turnOn();
};

struct MainPOSDisplay 
{
    int screenResolution = 2160;

    int height = 10;

    int width = 3;

    int screenRatio = 1;

    float brightnessLevel = 80.1f;
    
    void adjResolution(int newValue);

    void adjBrightness(int newValue);

    bool checkConnection(int portNumber); // return connection status to computer
    
};

struct ReceiptPrinter 
{
    int height = 5;

    int width = 7;

    int paperRollSize = 4;

    float powerConsumption = 10.f;

    std::string buttonType = "plastic";

    void turnOn();

    void printReceipt(std::string orderDetail);
    
    bool conectToPOS(int portNumber); // return connection status to POS
};

struct CashDrawer 
{
    int ejectorType = 2;

    float compartmentSize = 3.02f;

    int keyType = 3;

    float moutingSize = 0.2f;

    float braketSize = 0.03f;

    float putMoney(float money); // return total balance on cash drawer

    void openCashDrawer();
  
    bool conectToPOS(int portNumber); // return connection status to POS
};

struct POS 
{
    BarcodeScanner scanner; 
   
    CustomerPoleDisplay poleDisplay; 
    
    MainPOSDisplay POSDisplay; 
    
    ReceiptPrinter receipt; 
    
    CashDrawer drawer; 
  
    void inputTransaction(int articleNumber, float price, int quantity);
   
    void printReceipt(int orderNumber, std::string orderDetail[]);
    
    void openCashDrawer();
};

int main() { std::cout << "good to go!" << std::endl; }
