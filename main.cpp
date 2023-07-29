 /*
 Project 3 - Part 2 / 5
 Video: Chapter 2 Part 6
 Implementations tasks
 
Create a branch named Part2

 tasks
 0) delete all of the plain english pseudo-code you added in Part1.
   don't forget to remove the blank lines left behind after you remove your comments
   - you should be left with only your UDTs.
*/
// example:
// if you had something like this at the end of Part1e:
/*
Thing: Car Wash   
    5 properties:
        - number of vacuum cleaners
        - number of eco-friendly cleaning supplies
        - stores the amount of water used per week.
        - stores amount of profit made per week
        - number of cars serviced per day
    3 things it can do:
        - wash and wax car
        - charge customer
        - detail the car interior
 */

#include <iostream>
#include <string>
namespace Part1eVersion 
{
struct CarWash        
{
    //number of vacuum cleaners                     
    int numVacuumCleaners = 3; 
    //number of eco-friendly cleaning supplies      
    int numEcoFriendlyCleaningSupplies = 20;     
    //stores the amount of water used per week.     
    float waterUsedPerWeek = 200.f;            
    //stores amount of profit made per week         
    float profitPerWeek = 495.95f;               
    //number of cars serviced per day               
    int numberOfCarsServiced = 10;               
    
    struct Car  
    {
        bool isAPickupTruck = false;
        float gasMileage = 26.2f;        
        int year = 1985;
        std::string manufacturer = "Toyota";
        std::string model = "Corolla";

        void fillTank(float costPerGallon, double fuelAmountInGallons = 2.0, bool requiresDiesel = false);  
        void breakDown(std::string failureType, bool requiresTow = false);
        int getMilesTraveledAnnually(bool includeUberLyftTrips);
    };

    //wash and wax car
    void washAndWaxCar( Car car ); 
    //charge customer
    float chargeCustomer(float discountPercentage);
    //detail the car interior
    void detailInterior( Car car );
    
    Car carBeingServiced;  
};
}

//this is what I want to see after the code is cleaned up: 
namespace Part2Version
{
struct CarWash        
{
    int numVacuumCleaners = 3; 
    int numEcoFriendlyCleaningSupplies = 20;     
    float waterUsedPerWeek = 200.f;            
    float profitPerWeek = 495.95f;               
    int numberOfCarsServiced = 10;               
    
    struct Car  
    {
        bool isAPickupTruck = false;
        float gasMileage = 26.2f;        
        int year = 1985;
        std::string manufacturer = "Toyota";
        std::string model = "Corolla";

        void fillTank(double fuelAmountInGallons = 2.0);  
        void breakDown(std::string failureType, bool requiresTow = false);
        int getMilesTraveledAnnually(bool includeUberLyftTrips);
    };

    void washAndWaxCar( Car car ); 
    float chargeCustomer(float discountPercentage);
    void detailInterior( Car car );
    
    Car carBeingServiced;  
};
}
  /*
    The above snippet is just an example showing you how to clean up your code.  
    Do not put your cleaned up code into a namespace like I have done here.

 1) write the definition for the Type that leftFoot and rightFoot are instantiations of.
    don't forget to define and implement the member functions 'stepForward()' and 'stepSize()'
    you should be able to deduce the return type of those functions based on their usage in Person::run()
    You'll need to insert the Person struct from the video in the space below.
 */





 /*
 2) provide implementations for the member functions you declared in your 10 user-defined types from the previous video outside of your UDT definitions.
    If you have 'unused parameter' warnings, you aren't using one of your function parameters in your implementation.
    Solution: use the parameter in your implementation.

    If you have 'shadows a field of <classname>' warnings, a local variable in the function has the same name as a class member.  
    This local variable could also be a function parameter with the same name as the class member.
    Solution: change the local variable's name so it is different from the class member variable's name.
 
 3) be sure to write the correct full qualified name for the nested type's member functions.
 
 4) After you finish defining each type/function, click the [run] button.  Clear up any errors or warnings as best you can.
 if your code produces a -Wpadded warning, add '-Wno-padded' to the .replit file with the other compiler flags (-Weverything -Wno-missing-prototypes etc etc)
 If your code produces -Wconversion warnings, do NOT use static_cast<> to solve the warnings.  
 Casting has not been covered yet.
 Change your code so that no warnings are produced WITHOUT using casting.
 This usually means you have to use identical types for all variables used in an expression that is producing that conversion warning.
 */


struct F1Race
{
   
    int numCarBrand = 12;
  
    int amtViewerPerRace = 10000;
  
    int numOfCircuit = 20;
  
    int totalRacer = 24;
 
    int numOfEngineerPerCar = 50;

    //function
    double calcRevenuePerRace(int numViewer, double incSponsorship); // return total revenue per race
    //     2) do race
    void doRace();
    //     3) press confrence after race
    void pressConference();
};
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
*/

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

/*
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
*/
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
/*
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
*/
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
/*
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
*/
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
/*
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
*/
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
/*
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
*/
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
/*
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
*/
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
/*
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
*/
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
/*
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
*/
struct POS 
{
    BarcodeScanner scanner; // a member variabledeclaration of an instance of UDT 5
    CustomerPoleDisplay poleDisplay; // a member variabledeclaration of an instance of UDT 6
    MainPOSDisplay POSDisplay; // a member variabledeclaration of an instance of UDT 7
    ReceiptPrinter receipt; // a member variabledeclaration of an instance of UDT 8
    CashDrawer drawer; // a member variabledeclaration of an instance of UDT 9
  
    //     1) Input transaction
    void inputTransaction(int articleNumber, float price, int quantity);
    //     2) print reciept
    void printReceipt(int orderNumber, std::string orderDetail[]);
    //     3) open cash drawer
    void openCashDrawer();
};
/*
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

int main() { std::cout << "good to go!" << std::endl; }
