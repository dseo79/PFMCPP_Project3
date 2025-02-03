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

struct Foot
{
    int stepSize() { return 5; }
    void stepForward()
    {
        std::cout << "stepping forward!" << std::endl;
    }
};

struct Person
{    
    int age;
    int height;
    float hairLength;
    float GPA;
    unsigned int SATScore;
    int distanceTraveled;
    Foot leftFoot;
    Foot rightFoot;

    void run(int howFast, bool startWithLeftFoot);
};
    
void Person::run(int howFast, bool startWithLeftFoot)
{
    if(startWithLeftFoot == true)
    {
        leftFoot.stepForward();
        rightFoot.stepForward();
    }
    else
    {
        rightFoot.stepForward();
        leftFoot.stepForward();
    }
    distanceTraveled += leftFoot.stepSize() + rightFoot.stepSize();
    
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

struct CoffeeShop
{
    int numberOfCoffeeMachines = 3;
    int numberOfEmployees = 10;
    float amountOfMilkUsedPerWeek = 750.0f;    
    double amountOfProfitMadePerWeek = 10000.00;
    int numberOfCupsSoldPerDay = 100;

    void makeCoffee(int numberOfCups);
    void computeAmountToChargeCustomer(double amount, double discount, int loyaltyPoints);
    void makeDesserts(int numberOfDesserts);
};

void CoffeeShop::computeAmountToChargeCustomer(double amount, double discount, int loyaltyPoints) 
{
    double discountAmount = amount * (discount / 100);
    double loyaltyDiscount = loyaltyPoints * 0.5;
    double finalAmount = amount - discountAmount - loyaltyDiscount;

    std::cout << "The final amount to charge the customer is: " << finalAmount << std::endl;
}

struct GroceryStore
{
    int numEmployees = 5;
    int hoursAWeek = 40;
    int numberOfPaymentStations = 3;
    float amountOfFreshFoodSoldPerWeek = 100.0f;
    float amountOfProcessedFoodSoldPerWeek = 50.0f;
    int numberOfTransactionsADay = 10;

    void StockShelves(int numberofItems);
    void computeTotalCustomerBill(double amount, double discount, double taxRate);
    void yearlyTotalPayroll(int salary);
};

void GroceryStore::computeTotalCustomerBill(double amount, double discount, double taxRate) 
{
    double discountedAmount = amount - (amount * discount);
    double finalAmount = discountedAmount + (discountedAmount * taxRate);

    std::cout << "The final amount to charge the customer is: " << finalAmount << std::endl;
}

struct ConcertHall
{
    int numberOfSeats = 200;
    int numberOfBathrooms = 5;
    double amountOfMonthlyRent = 5000.00;
    double amountOfProfitMadePerWeek = 10000.00;
    double costOfTicket = 50.00;
    double monthlyExpenses = 2000.00;
    int numberOfConcertsAWeek = 10;

    void sellTickets(int numberOfTickets);
    void bookArtists(int numberofArtists);
    void computeProfitMadePerMonth(int totalNumTicketsSold);
};

void ConcertHall::computeProfitMadePerMonth(int totalNumTicketsSold)
{
    double totalDollarsTicketsSold = totalNumTicketsSold * costOfTicket;
    double profitPerMonth = totalDollarsTicketsSold - amountOfMonthlyRent - monthlyExpenses;

    std::cout << "The profit made per month is: " << profitPerMonth << std::endl;
}

struct LocalGovernment
{
    int numberOfAgencies = 100;
    int numberOfEmployees = 1000;
    double amountOfBudget = 50000.00;
    int numberOfPolicies = 50;
    int numberOfLawsPassed = 200;

    void createPolicies(int numberofPoliciesCreated);
    void passLaws(int numberofLawsPassed);
    void collectTaxes(double taxAmount, double taxRate, int numberOfResidents);
};

void LocalGovernment::collectTaxes(double taxAmount, double taxRate, int numberOfResidents)
{
    double collectedTaxes = taxAmount * taxRate * numberOfResidents;
    amountOfBudget += collectedTaxes;
}

struct LightingSystem
{
    int numberOfLights = 100;
    int maximumBrightness = 1000;
    float colorTemperature = 5000.0f;
    float powerConsumption = 500.0f;
    std::string brandName = "Philips";

    void configureLightingSystem(int numberOfLightsToConfigure, int brightnessLevel, float       newColorTemperature, float newPowerConsumption);
};

void LightingSystem::configureLightingSystem(int numberOfLightsToConfigure, int brightnessLevel, float newColorTemperature, float newPowerConsumption)
{
    if (numberOfLightsToConfigure <= 0)
    {
        std::cout << "Invalid number of lights. Please choose a positive number of lights." << std::endl; 
    } 
    const int maxLights = 1000;
    if (numberOfLightsToConfigure > maxLights)
    {
        std::cout << "The number of lights exceeds the maximum allowable limit of " << maxLights << " lights." << std::endl;
    }
    if (brightnessLevel < 0 || brightnessLevel > maximumBrightness)
    {
        std::cout << "Invalid brightness level. Please choose a value between 0 and " << maximumBrightness << "." << std::endl;
    }
    numberOfLights = numberOfLightsToConfigure;
    maximumBrightness = brightnessLevel;
    colorTemperature = newColorTemperature;
    powerConsumption = newPowerConsumption;
}

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

void SecuritySystem::Camera::takePhoto(int numberOfPhotos) 
{
    std::cout << "Taking " << numberOfPhotos << " photos." << std::endl;
}

void SecuritySystem::Camera::recordVideo(int durationInMinutes) 
{
    std::cout << "Recording video for " << durationInMinutes << " minutes." << std::endl;
}

void SecuritySystem::Camera::adjustExposure(int exposureLevel) 
{
    std::cout << "Adjusting exposure to level " << exposureLevel << "." << std::endl;
}

void SecuritySystem::detectMotion(Camera camera) 
{
    std::cout << "Detecting motion using camera: " << camera.brand << std::endl;
}

void SecuritySystem::triggerAlarm(int alarmVolumeLevel) 
{
    std::cout << "Triggering alarm with volume: " << alarmVolumeLevel << std::endl;
}

void SecuritySystem::recordVideo(Camera camera) 
{
    std::cout << "Recording video with camera: " << camera.brand << std::endl;
}

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

    void adjustClimateControl(float newTargetTemperature, int newFanSpeedLevel, int monitoringDuration);
};

void ClimateControl::adjustTemperature(float newTargetTemperature) 
{
    std::cout << "Adjusting temperature to " << newTargetTemperature << " degrees." << std::endl;
}

void ClimateControl::controlFanSpeed(int newFanSpeedLevel) 
{
    std::cout << "Setting fan speed to level " << newFanSpeedLevel << "." << std::endl;
}

void ClimateControl::monitorAirQuality(int monitoringDuration) 
{
    std::cout << "Monitoring air quality for " << monitoringDuration << " minutes." << std::endl;
}

void ClimateControl::adjustClimateControl(float newTargetTemperature, int newFanSpeedLevel, int monitoringDuration) 
{
    adjustTemperature(newTargetTemperature);
    controlFanSpeed(newFanSpeedLevel);      
    monitorAirQuality(monitoringDuration);  
}

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

    void adjustEntertainmentSystemSettings(int newNumberOfSpeakers, int newDisplayResolution, float newVolumeLevel, std::string newAudioSetting, int newAudioLevel);

    Speaker primarySpeaker;
};

void EntertainmentSystem::Speaker::adjustVolume(float newVolumeLevel) 
{
    std::cout << "Adjusting volume to " << newVolumeLevel << "." << std::endl;
}

void EntertainmentSystem::Speaker::changeAudioSettings(std::string newAudioSetting) 
{
    std::cout << "Changing audio settings to " << newAudioSetting << "." << std::endl;
}

void EntertainmentSystem::Speaker::adjustAudioLevels(int newAudioLevel) 
{
    std::cout << "Adjusting audio level to " << newAudioLevel << "." << std::endl;
}

void EntertainmentSystem::playMovies(int numberOfMovies) 
{
    std::cout << "Playing " << numberOfMovies << " movies." << std::endl;
}

void EntertainmentSystem::streamMusic(Speaker speaker) 
{
    std::cout << "Streaming music using speaker: " << speaker.brand << std::endl;
}

void EntertainmentSystem::adjustAudioLevels(Speaker speaker) 
{
    std::cout << "Adjusting audio levels for speaker: " << speaker.brand << std::endl;
}

void EntertainmentSystem::adjustEntertainmentSystemSettings(int newNumberOfSpeakers, int newDisplayResolution, float newVolumeLevel, std::string newAudioSetting, int newAudioLevel)
{
    numberOfSpeakers = newNumberOfSpeakers;
    displayResolution = newDisplayResolution;

    primarySpeaker.adjustVolume(newVolumeLevel);
    primarySpeaker.changeAudioSettings(newAudioSetting);
    primarySpeaker.adjustAudioLevels(newAudioLevel);

    std::cout << "Entertainment system updated: " << std::endl;
    std::cout << "Number of Speakers: " << numberOfSpeakers << std::endl;
    std::cout << "Display Resolution: " << displayResolution << std::endl;
}

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

    void adjustSmartAssistantSettings(std::string newWakeWord, std::string newSupportedLanguages, int newNumberOfMicrophones, float newSpeakerPower, std::string newConnectionType);
};

void SmartAssistant::answerQuestions(int numberOfQuestions) 
{
    std::cout << "Answering " << numberOfQuestions << " questions." << std::endl;
}

void SmartAssistant::controlSmartDevices(int numberOfDevices) 
{
    std::cout << "Controlling " << numberOfDevices << " devices." << std::endl;
}

void SmartAssistant::setReminders(int numberOfReminders) 
{
    std::cout << "Setting " << numberOfReminders << " reminders." << std::endl;
}

void SmartAssistant::adjustSmartAssistantSettings(std::string newWakeWord, std::string newSupportedLanguages, int newNumberOfMicrophones, float newSpeakerPower, std::string newConnectionType)
{
    wakeWord = newWakeWord;
    supportedLanguages = newSupportedLanguages;
    numberOfMicrophones = newNumberOfMicrophones;
    speakerPower = newSpeakerPower;
    connectionType = newConnectionType;

    std::cout << "Smart Assistant settings updated: " << std::endl;
    std::cout << "Wake Word: " << wakeWord << std::endl;
    std::cout << "Supported Languages: " << supportedLanguages << std::endl;
    std::cout << "Number of Microphones: " << numberOfMicrophones << std::endl;
    std::cout << "Speaker Power: " << speakerPower << " Watts" << std::endl;
    std::cout << "Connection Type: " << connectionType << std::endl;
}

struct SmartHome
{

    LightingSystem lightingSystem;
    SecuritySystem securitySystem;
    ClimateControl climateControl;
    EntertainmentSystem entertainmentSystem;
    SmartAssistant smartAssistant;

    void controlLightingSystem(int brightnessLevel, float newColorTemperature, float newPowerConsumption);
    void automateRoutines(int numberOfRoutines);
    void monitorHomeSecurity(int monitoringDuration);
    void adjustHomeSettingsRemotely(int numberOfSettings);
};

void SmartHome::controlLightingSystem(int brightnessLevel, float newColorTemperature, float newPowerConsumption)
{
    std::cout << "Adjusting lighting system: "
    << "Brightness: " << brightnessLevel << "%, "
    << "Color Temperature: " << newColorTemperature << "K, "
    << "Power Consumption: " << newPowerConsumption << "W." << std::endl;
}
void SmartHome::automateRoutines(int numberOfRoutines) 
{
    std::cout << "Automating " << numberOfRoutines << " routines." << std::endl;
}

void SmartHome::monitorHomeSecurity(int monitoringDuration) 
{
    std::cout << "Monitoring home security for " << monitoringDuration << " minutes." << std::endl;
}
void SmartHome::adjustHomeSettingsRemotely(int numberOfSettings)
{
    std::cout << "Adjusting " << numberOfSettings << " home settings remotely." << std::endl;
}

int main()
{
    std::cout << "good to go!" << std::endl;
}
