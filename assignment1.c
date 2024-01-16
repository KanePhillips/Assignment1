//Author: Kane Phillips
#include <stdio.h>

void DistanceConversion();
void WeightConversion();
void LiquidConversion();
void TemperatureConversion();
void ChooseOption(char);
void PickConversion(char);

int main(){

    char userChoice = 'a';
    char continueCharacter = 'Y';

    printf("This program converts metric units to imperial units or vice versa.\n");

    PickConversion(userChoice);

    while(continueCharacter == 'Y'){
        printf("Would you like to do another conversion? Please enter 'Y' for Yes or 'N' for No.\n");
        scanf(" %c", &continueCharacter);

        if (continueCharacter=='N'){
            continue;
        }

        userChoice = 'a';
        PickConversion(userChoice);
    }

    return 0;
}

void DistanceConversion(){
    int userChoice = 0;
    double userInput = 0.0;
    double outputValue = 0.0;

    while(userChoice != 1 && userChoice != 2){
        printf("You selected the distance conversion. Would you like to convert km -> mi (1) or mi -> km (2)?\n");
        printf("Please enter '1' or '2' as indicated above.\n");
        scanf("%d", &userChoice);

        if (userChoice != 1 && userChoice != 2){
            printf("That is not a valid choice. Please try again.");
        }
    }

    switch(userChoice){
        case 1:
            printf("Please enter the value of kilometers you would like to convert to miles: \n");
            scanf("%lf", &userInput);
            outputValue = userInput / 1.6093445;
            printf("\nThe number of miles is %f\n", outputValue);
            break;
        case 2:
            printf("Please enter the value of miles you would like to convert to kilometers: \n");
            scanf("%lf", &userInput);
            outputValue = userInput / 0.62137;
            printf("\nThe number of kilometers is %f\n", outputValue);
            break;
        default:
            printf(" ");
    }
    
}

void WeightConversion(){
int userChoice = 0;
    double userInput = 0.0;
    double outputValue = 0.0;

    while(userChoice != 1 && userChoice != 2){
        printf("You selected the weight conversion. Would you like to convert kg -> lbs (1) or lbs -> kg (2)?\n");
        printf("Please enter '1' or '2' as indicated above.\n");
        scanf("%d", &userChoice);

        if (userChoice != 1 && userChoice != 2){
            printf("That is not a valid choice. Please try again.");
        }
    }

    switch(userChoice){
        case 1:
            printf("Please enter the value of kilograms you would like to convert to pounds: \n");
            scanf("%lf", &userInput);
            outputValue = userInput * 2.2046;
            printf("\nThe number of pounds is %f\n", outputValue);
            break;
        case 2:
            printf("Please enter the value of pounds you would like to convert to kilograms: \n");
            scanf("%lf", &userInput);
            outputValue = userInput / 2.2046;
            printf("\nThe number of kilograms is %f\n", outputValue);
            break;
        default:
            printf(" ");
    }
}

void LiquidConversion(){
    int userChoice = 0;
    double userInput = 0.0;
    double outputValue = 0.0;

    while(userChoice != 1 && userChoice != 2){
        printf("You selected the liquid conversion. Would you like to convert liters -> gallons (1) or gallons -> liters (2)?\n");
        printf("Please enter '1' or '2' as indicated above.\n");
        scanf("%d", &userChoice);

        if (userChoice != 1 && userChoice != 2){
            printf("That is not a valid choice. Please try again.");
        }
    }

    switch(userChoice){
        case 1:
            printf("Please enter the value of liters you would like to convert to gallons: \n");
            scanf("%lf", &userInput);
            outputValue = userInput / 3.78541;
            printf("\nThe number of gallons is %f\n", outputValue);
            break;
        case 2:
            printf("Please enter the value of gallons you would like to convert to liters: \n");
            scanf("%lf", &userInput);
            outputValue = userInput / 0.264172;
            printf("\nThe number of liters is %f\n", outputValue);
            break;
        default:
            printf(" ");
    }
}

void TemperatureConversion(){
    int userChoice = 0;
    double userInput = 0.0;
    double outputValue = 0.0;

    while(userChoice != 1 && userChoice != 2){
        printf("You selected the temperature conversion. Would you like to convert C -> F (1) or F -> C (2)?\n");
        printf("Please enter '1' or '2' as indicated above.\n");
        scanf("%d", &userChoice);

        if (userChoice != 1 && userChoice != 2){
            printf("That is not a valid choice. Please try again.");
        }
    }

    switch(userChoice){
        case 1:
            printf("Please enter the number of degrees Celsius you would like to convert to Fahrenheit: \n");
            scanf("%lf", &userInput);
            outputValue = (userInput * (9.0/5.0) + 32.0);
            printf("\nThe number of degrees Fahrenheit is %f\n", outputValue);
            break;
        case 2:
            printf("Please enter the number of degrees Fahrenheit you would like to convert to Celsius: \n");
            scanf("%lf", &userInput);
            outputValue = (userInput - 32.0) * (5.0/9.0);
            printf("\nThe number of degrees Celsius is %f\n", outputValue);
            break;
        default:
            printf(" ");
    }
}

void ChooseOption(char userChoice){
    switch(userChoice){
            case 'D':
                DistanceConversion();
                break;
            case 'L':
                LiquidConversion();
                break;
            case 'W':
                WeightConversion();
                break;
            case 'T':
                TemperatureConversion();
                break;
            case 'q':
                printf("Now quitting the program.\n");
                break;
            default:
                printf("That is not a valid choice. Please try again.\n");
    }
}

void PickConversion(char userChoice){
    printf("\nPlease enter the letter corresponding the the metric you would like to convert: \n\n");
    printf("'D' for distance (km/mi);\n");
    printf("'L' for liquid measurements (liters/gallons);\n");
    printf("'W' for weight (kg/lbs);\n");
    printf("'T' for temperature (C/F);\n");
    printf("Or enter 'q' to quit.\n");
    scanf(" %c", &userChoice);
    printf("\n");

    ChooseOption(userChoice);

}