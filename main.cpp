/*
 Project 3 - Part 3 / 5
 video: Chapter 2 - Part 8
 Constructors tasks

 Create a branch named Part3

 On this new branch:

 0) if you opted to not fill in any of your member functions in part2, 
    fill in ALL of your member functions
    
 1) Add a constructor for each User-Defined-Type.
    The constructor should be the first declaration in your UDT, before all member variables and member functions.
    add a std::cout message in the constructor that prints out the name of the class being constructed.  
    When you run your code, you'll see the order that your objects are created in the program output. 
 
 2) For each User-Defined-Type:
        amend some of the member functions to print out something interesting via std::cout
 
 3) Instantiate 1 or 2 instances of EACH of your user-defined types in the main() function.  
    You should have at least 12 different variables declared in main(), because you have written 12 different types (including the nested types)

 4) For each instantiated UDT: 
        call each of that instance's member functions.
        You're doing this to show that your code doesn't produce warnings when you call the functions that take arguments.
 
 5) add some std::cout statements in main() that print out your UDT's member variable values or values returned from your UDT member functions (if they return values)
 
 After you finish defining each type/function:
 click the [run] button.  Clear up any errors or warnings as best you can.
 if your code produces a -Wpadded warning, add '-Wno-padded' to the .replit file with the other compiler flags (-Weverything -Wno-missing-prototypes etc etc)
 
 example:
 */

#include <iostream>
namespace Example 
{
struct UDT  // my user defined type named 'UDT'
{
    int thing = 0; //a member variable
    UDT();              //1) the constructor
    void printThing();  //the member function
};

//the function definitions are outside of the class
UDT::UDT()
{
    std::cout << "UDT being constructed!" << std::endl; //1) 
}

void UDT::printThing()
{
    std::cout << "UDT::printThing() " << thing << std::endl;  //2) printing out something interesting
}

int main()
{
    UDT foo;              //3) instantiating a UDT named 'foo' in main()
    foo.printThing();     //4) calling a member function of the UDT instance.
    
    //5) a std::cout statement accessing foo's member variable.
    //It also demonstrates a 'ternary expression', which is syntactic shorthand for an 'if/else' expression
    std::cout << "Is foo's member var 'thing' equal to 0? " << (foo.thing == 0 ? "Yes" : "No") << "\n";
    
    return 0;
}
} //end namespace Example

//insert Example::main() into main() of user's repo.




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
    Example::main();

    //add your code here: 

    
    std::cout << "good to go!" << std::endl;
}
