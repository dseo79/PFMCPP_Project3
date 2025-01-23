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


struct CoffeeShop
{
    int numberOfCoffeeMachines = 3;
    int numberOfEmployees = 10;
    float amountOfMilkUsedPerWeek = 750.0f;    
    double amountOfProfitMadePerWeek = 10000.00;
    int numberOfCupsSoldPerDay = 100;

    void makeCoffee(int numberofCups);
    void chargeCustomer(double amount);
    void makeDesserts(int numberofDesserts);
};

struct GroceryStore
{
    int numberOfEmployees = 5;
    int numberOfPaymentStations = 3;
    float amountOfFreshFoodSoldPerWeek = 100.0f;
    float amountOfProcessedFoodSoldPerWeek = 50.0f;
    int numberOfTransactionsADay = 10;

    void stockShelves(int numberofItems);
    void chargeCustomer(double amount);
    void sellFood(int numberofItems);
};

struct ConcertHall
{
    int numberOfSeats = 200;
    int numberOfBathrooms = 5;
    double amountOfRent = 5000.00;
    double amountOfProfitMadePerWeek = 10000.00;
    int numberOfConcertsAWeek = 10;

    void sellTickets(int numberOfTickets);
    void bookArtists(int numberofArtists);
    void sellFood(int numberofItems);
};

struct FederalGovernment
{
    int numberOfAgencies = 100;
    int numberOfEmployees = 1000;
    double amountOfBudget = 50000.00;
    int numberOfPolicies = 50;
    int numberOfLawsPassed = 200;

    void createPolicies(int numberofPoliciesCreated);
    void passLaws(int numberofLawsPassed);
    void collectTaxes(double taxAmount);
};

struct LightingSystem
{
    int numberOfLights = 100;
    int maximumBrightness = 1000;
    float colorTemperature = 5000.0f;
    float powerConsumption = 500.0f;
    std::string brandName = "Philips";

    void turnLightsOn(int numberofLightsToTurnOn);
    void dimLights(int brightnessLevel);
    void changeLightColor(std::string newColor);
};

struct SecuritySystem
{
    int numberOfCameras = 10;
    int numberOfMotionSensors = 5;
    int alarmVolume = 100;
    int batteryBackupDuration = 24;
    std::string monitoringServiceName = "Security Monitoring System";

    struct Camera
    {
        bool hasNightVision = true;
        float zoom = 1.0f;
        int year = 2020;
        std::string brand = "Canon";
        std::string model = "EOS 5D Mark IV";

        void takePhoto(int numberofPhotos);
        void recordVideo(int durationInMinutes);
        void adjustExposure(int exposureLevel);
    };

    void detectMotion(Camera camera);
    void triggerAlarm(int alarmVolumeLevel);
    void recordVideo(Camera camera);

    Camera primaryCamera;
};

struct ClimateControl
{
    float currentTemperature = 25.0f;
    float targetTemperature = 30.0f;
    float humidityLevel = 50.0f;
    int fanSpeedLevels = 3;
    std::string manufacturer = "Philips";

    void adjustTemperature(float newTargetTemperature);
    void controlFanSpeed(int newFanSpeedLevel);
    void monitorAirQuality(int monitoringDuration);
};

struct EntertainmentSystem
{
    int numberOfSpeakers = 5;
    int displayResolution = 1920;
    std::string supportedStreamingServices = "Netflix, Hulu, Prime Video";
    float powerOutput = 500.0f;
    std::string brandName = "Sony";

    struct Speaker
    {
        bool hasSubwoofer = true;
        float volume = 1.0f;
        int year = 2020;
        std::string brand = "Sony";
        std::string model = "WH-1000XM4";

        void adjustVolume(float newVolumeLevel);
        void changeAudioSettings(std::string newAudioSetting);
        void adjustAudioLevels(int newAudioLevel);
    };

    void playMovies(int numberOfMovies);
    void streamMusic(Speaker speaker);
    void adjustAudioLevels(Speaker speaker);

    Speaker primarySpeaker;
};

struct SmartAssistant
{

    std::string wakeWord = "Alexa";
    std::string supportedLanguages = "English, Spanish, French";
    int numberOfMicrophones = 3;
    float speakerPower = 500.0f;
    std::string connectionType = "Bluetooth";

    void answerQuestions(int numberOfQuestions);
    void controlSmartDevices(int numberOfDevices);
    void setReminders(int numberOfReminders);
};

struct SmartHome
{

    LightingSystem lightingSystem;
    SecuritySystem securitySystem;
    ClimateControl climateControl;
    EntertainmentSystem entertainmentSystem;
    SmartAssistant smartAssistant;

    void automateRoutines(int numberOfRoutines);
    void monitorHomeSecurity(int monitoringDuration);
    void adjustHomeSettingsRemotely(int numberOfSettings);
};

int main()
{
    std::cout << "good to go!" << std::endl;
}
