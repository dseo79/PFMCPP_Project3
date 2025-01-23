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
    //number of coffee machines
    int numberOfCoffeeMachines = 3;
    //number of employees
    int numberOfEmployees = 10;
    //amount of milk used per week
    float amountOfMilkUsedPerWeek = 750.0f;    
    //amount of profit made per week
    double amountOfProfitMadePerWeek = 10000.00;
    //number of cups sold per day
    int numberOfCupsSoldPerDay = 100;
    //3 things it can do:
    //make coffee
    void makeCoffee(int numberofCups);
    //charge customer
    void chargeCustomer(double amount);
    //make desserts
    void makeDesserts(int numberofDesserts);
};

struct GroceryStore
{
    //5 properties:
    //number of employees
    int numberOfEmployees = 5;
    //number of payment stations
    int numberOfPaymentStations = 3;
    //amount of fresh food sold per week
    float amountOfFreshFoodSoldPerWeek = 100.0f;
    //amount of processed food sold per week
    float amountOfProcessedFoodSoldPerWeek = 50.0f;
    //number of transactions a day
    int numberOfTransactionsADay = 10;
    //3 things it can do:
    //stock shelves
    void stockShelves(int numberofItems);
    //charge customer
    void chargeCustomer(double amount);
    //sell food
    void sellFood(int numberofItems);
};

struct ConcertHall
{
    //5 properties:
    //number of seats
    int numberOfSeats = 200;
    //number of bathrooms
    int numberOfBathrooms = 5;
    //amount of rent
    double amountOfRent = 5000.00;
    //amount of profit made per week
    double amountOfProfitMadePerWeek = 10000.00;
    //number of concerts a week
    int numberOfConcertsAWeek = 10;
    //3 things it can do:
    //sell tickets
    void sellTickets(int numberOfTickets);
    //book artists
    void bookArtists(int numberofArtists);
    //sell food
    void sellFood(int numberofItems);
};

struct FederalGovernment
{
    //5 properties:
    //number of agencies
    int numberOfAgencies = 100;
    //number of employees
    int numberOfEmployees = 1000;
    //amount of budget
    double amountOfBudget = 50000.00;
    //number of policies
    int numberOfPolicies = 50;
    //number of laws passed
    int numberOfLawsPassed = 200;
    //3 things it can do:
    //create policies
    void createPolicies(int numberofPoliciesCreated);
    //pass laws
    void passLaws(int numberofLawsPassed);
    //collect taxes
    void collectTaxes(double taxAmount);
};

struct LightingSystem
{
    //5 properties:
    //Number of lights
    int numberOfLights = 100;
    //Maximum brightness
    int maximumBrightness = 1000;
    //Color temperature
    float colorTemperature = 5000.0f;
    //Power consumption
    float powerConsumption = 500.0f;
    //Brand name
    std::string brandName = "Philips";
    //3 things it can do:
    //Turn lights on/off
    void turnLightsOn(int numberofLightsToTurnOn);
    //Dim lights
    void dimLights(int brightnessLevel);
    //Change light color
    void changeLightColor(std::string newColor);
};

struct SecuritySystem
{
    //5 properties:
    //Number of cameras
    int numberOfCameras = 10;
    //Numer of motion sensors
    int numberOfMotionSensors = 5;
    //Alarm volume (dB)
    int alarmVolume = 100;
    //Battery backup duration
    int batteryBackupDuration = 24;
    //Monitoring service name
    std::string monitoringServiceName = "Security Monitoring System";

    //nested UDT:
    struct Camera
    {
        //5 properties:
        bool hasNightVision = true;
        float zoom = 1.0f;
        int year = 2020;
        std::string brand = "Canon";
        std::string model = "EOS 5D Mark IV";

        //3 things it can do:
        void takePhoto(int numberofPhotos);
        void recordVideo(int durationInMinutes);
        void adjustExposure(int exposureLevel);
    };

    //3 things it can do:
    //Detect motion
    void detectMotion(Camera camera);
    //Trigger alarm
    void triggerAlarm(int alarmVolumeLevel);
    //Record video
    void recordVideo(Camera camera);
    //member variable whose type is a UDT
    Camera primaryCamera;
};

struct ClimateControl
{
    //5 properties:
    //Current temperature
    float currentTemperature = 25.0f;
    //Target temperature
    float targetTemperature = 30.0f;
    //Humidity level
    float humidityLevel = 50.0f;
    //Fan speed levels
    int fanSpeedLevels = 3;
    //Manufacturer
    std::string manufacturer = "Philips";
    //3 things it can do:
    //Adjust temperature
    void adjustTemperature(float newTargetTemperature);
    //Control fan speed
    void controlFanSpeed(int newFanSpeedLevel);
    //Monitor air quality
    void monitorAirQuality(int monitoringDuration);
};

struct EntertainmentSystem
{
    //5 properties:
    //Number of speakers
    int numberOfSpeakers = 5;
    //Display resolution
    int displayResolution = 1920;
    //Supported streaming services
    std::string supportedStreamingServices = "Netflix, Hulu, Prime Video";
    //Power output
    float powerOutput = 500.0f;
    //Brand name
    std::string brandName = "Sony";

    //nested UDT:
    struct Speaker
    {
        //5 properties:
        bool hasSubwoofer = true;
        float volume = 1.0f;
        int year = 2020;
        std::string brand = "Sony";
        std::string model = "WH-1000XM4";


        //3 things it can do:
        void adjustVolume(float newVolumeLevel);
        void changeAudioSettings(std::string newAudioSetting);
        void adjustAudioLevels(int newAudioLevel);
    };

    //3 things it can do:
    //Play movies
    void playMovies(int numberOfMovies);
    //Stream music
    void streamMusic(Speaker speaker);
    //Adjust audio levels
    void adjustAudioLevels(Speaker speaker);
    //Member variable whose type is a UDT
    Speaker primarySpeaker;
};

struct SmartAssistant
{
    //5 properties:
    //Wake word
    std::string wakeWord = "Alexa";
    //Supported languages
    std::string supportedLanguages = "English, Spanish, French";
    //Number of microphones 
    int numberOfMicrophones = 3;
    //Speaker power
    float speakerPower = 500.0f;
    //Connection type
    std::string connectionType = "Bluetooth";
    //3 things it can do:
    //Answer questions
    void answerQuestions(int numberOfQuestions);
    //Control smart devices
    void controlSmartDevices(int numberOfDevices);
    //Set reminders
    void setReminders(int numberOfReminders);
};

struct SmartHome
{
    //5 properties:
    //Lighting system
    LightingSystem lightingSystem;
    //Security system
    SecuritySystem securitySystem;
    //Climate control
    ClimateControl climateControl;
    //Entertainment system
    EntertainmentSystem entertainmentSystem;
    //Smart assistant
    SmartAssistant smartAssistant;
    //3 things it can do:
    //automate routines
    void automateRoutines(int numberOfRoutines);
    //monitor home security
    void monitorHomeSecurity(int monitoringDuration);
    // adjust home settings remotely
    void adjustHomeSettingsRemotely(int numberOfSettings);
};

int main()
{
    std::cout << "good to go!" << std::endl;
}
