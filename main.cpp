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

struct LeftFoot 
{
    int step;
};
struct RightFoot
{ 
    int step;
};

struct Person 
{
    
    LeftFoot leftFoot;
    RightFoot rightFoot;

    void stepForward(LeftFoot leftFoot, RightFoot rightFoot);

    int stepSize (LeftFoot leftFoot, RightFoot rightFoot);

    void run();
};

void Person::run() 
{
    
}

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
