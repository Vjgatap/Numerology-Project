#include <stdio.h>

// Function prototypes
void displayNumber1();
void displayNumber2();
void displayNumber3();
void displayNumber4();
void displayNumber5();
void displayNumber6();
void displayNumber7();
void displayNumber8();
void displayNumber9();
int calculateLifePathNumber(int day, int month, int year);
void showMenu();

// Function to calculate Life Path Number
int calculateLifePathNumber(int day, int month, int year) {
    int sum = day + month + year;

    // Reduce the sum to a single digit
    while (sum > 9) {
        int tempSum = 0;
        while (sum > 0) {
            tempSum += sum % 10;
            sum /= 10;
        }
        sum = tempSum;
    }

    return sum;
}

// Functions for each Life Path Number
void displayNumber1() {
    printf("\nLife Path Number 1 - The Leader\n");
    printf("Traits: Independent, innovative, ambitious, and confident.\n");
    printf("Strengths: Leadership skills, creativity, and determination.\n");
    printf("Challenges: Can be overly self-reliant, stubborn, or egotistical.\n");
    printf("Life Purpose: To inspire others through their leadership and vision.\n");
    printf("Best Careers: Entrepreneur, inventor, manager, or motivational speaker.\n");
    printf("Suitable Colors: Red, Orange, Yellow, Golden.\n");
    printf("Suitable Hindu God: Lord Surya (Sun God).\n");
    printf("Additional Info: Offer prayers to the Sun, chant the Gayatri Mantra, and practice morning Surya Namaskar for spiritual energy.\n");
}

void displayNumber2() {
    printf("\nLife Path Number 2 - The Diplomat\n");
    printf("Traits: Cooperative, empathetic, sensitive, patient, and peace-loving.\n");
    printf("Strengths: Skilled at mediation and creating harmony in relationships.\n");
    printf("Challenges: Can be overly dependent, indecisive, or avoid conflict at all costs.\n");
    printf("Life Purpose: To bring balance, understanding, and peace to their surroundings.\n");
    printf("Best Careers: Counselor, diplomat, teacher, or caregiver.\n");
    printf("Suitable Colors: White, Cream, Light Green, Light Blue.\n");
    printf("Suitable Hindu God: Lord Chandra (Moon God).\n");
    printf("Additional Info: Meditate during full moons, and practice mindfulness to enhance emotional balance.\n");
}

void displayNumber3() {
    printf("\nLife Path Number 3 - The Communicator\n");
    printf("Traits: Creative, optimistic, social, and expressive.\n");
    printf("Strengths: Charismatic, inspiring, and talented in the arts.\n");
    printf("Challenges: Can be unfocused, superficial, or overly self-indulgent.\n");
    printf("Life Purpose: To bring joy and positivity to others through self-expression.\n");
    printf("Best Careers: Artist, writer, entertainer, or public speaker.\n");
    printf("Suitable Colors: Purple, Violet, Blue.\n");
    printf("Suitable Hindu God: Lord Vishnu.\n");
    printf("Additional Info: Chant 'Om Namo Bhagavate Vasudevaya' for creativity and spiritual protection.\n");
}

void displayNumber4() {
    printf("\nLife Path Number 4 - The Builder\n");
    printf("Traits: Practical, disciplined, reliable, and hardworking.\n");
    printf("Strengths: Strong organizational skills and a methodical approach.\n");
    printf("Challenges: Can be rigid, overly cautious, or resistant to change.\n");
    printf("Life Purpose: To create stability and build a strong foundation for others.\n");
    printf("Best Careers: Architect, engineer, accountant, or project manager.\n");
    printf("Suitable Colors: Grey, Brown, Dark Blue.\n");
    printf("Suitable Hindu God: Lord Rahu (Shadow Planet).\n");
    printf("Additional Info: Perform rituals to mitigate Rahu's effects and enhance stability in life.\n");
}

void displayNumber5() {
    printf("\nLife Path Number 5 - The Adventurer\n");
    printf("Traits: Adaptable, energetic, curious, and freedom-loving.\n");
    printf("Strengths: Versatile, quick-witted, and thrives on change.\n");
    printf("Challenges: Can be impulsive, restless, or lack commitment.\n");
    printf("Life Purpose: To embrace freedom and inspire others to explore new possibilities.\n");
    printf("Best Careers: Travel writer, marketer, entrepreneur, or journalist.\n");
    printf("Suitable Colors: Green, Light Brown, Silver.\n");
    printf("Suitable Hindu God: Lord Buddha (Mercury).\n");
    printf("Additional Info: Meditate on Mercury’s energy and focus on mindfulness practices to channel creativity.\n");
}

void displayNumber6() {
    printf("\nLife Path Number 6 - The Nurturer\n");
    printf("Traits: Caring, responsible, nurturing, and family-oriented.\n");
    printf("Strengths: Compassionate, protective, and a natural caregiver.\n");
    printf("Challenges: Can be overprotective, controlling, or neglect self-care.\n");
    printf("Life Purpose: To create harmony and nurture others in a meaningful way.\n");
    printf("Best Careers: Teacher, nurse, therapist, or community worker.\n");
    printf("Suitable Colors: Pink, Light Blue, White.\n");
    printf("Suitable Hindu God: Goddess Lakshmi.\n");
    printf("Additional Info: Chant 'Om Shreem Mahalakshmiyei Namah' for prosperity and harmony.\n");
}

void displayNumber7() {
    printf("\nLife Path Number 7 - The Seeker\n");
    printf("Traits: Introspective, analytical, spiritual, and intellectual.\n");
    printf("Strengths: Deep thinker, insightful, and seeks knowledge.\n");
    printf("Challenges: Can be aloof, overly skeptical, or isolated.\n");
    printf("Life Purpose: To seek truth, spiritual growth, and deeper understanding.\n");
    printf("Best Careers: Scientist, philosopher, researcher, or spiritual leader.\n");
    printf("Suitable Colors: White, Grey, Light Yellow.\n");
    printf("Suitable Hindu God: Lord Shiva.\n");
    printf("Additional Info: Meditate on 'Om Namah Shivaya' for spiritual awakening.\n");
}

void displayNumber8() {
    printf("\nLife Path Number 8 - The Powerhouse\n");
    printf("Traits: Ambitious, authoritative, disciplined, and goal-oriented.\n");
    printf("Strengths: Strong leadership and a drive for success.\n");
    printf("Challenges: Can be materialistic, controlling, or overworked.\n");
    printf("Life Purpose: To achieve success and inspire others through determination.\n");
    printf("Best Careers: CEO, banker, lawyer, or business owner.\n");
    printf("Suitable Colors: Black, Dark Blue, Charcoal.\n");
    printf("Suitable Hindu God: Lord Shani (Saturn).\n");
    printf("Additional Info: Worship Shani Dev on Saturdays for protection and career success.\n");
}

void displayNumber9() {
    printf("\nLife Path Number 9 - The Humanitarian\n");
    printf("Traits: Compassionate, idealistic, generous, and empathetic.\n");
    printf("Strengths: Selfless, inspiring, and devoted to the greater good.\n");
    printf("Challenges: Can be overly idealistic or neglect personal needs.\n");
    printf("Life Purpose: To serve humanity and work for global well-being.\n");
    printf("Best Careers: Activist, doctor, teacher, or artist.\n");
    printf("Suitable Colors: Red, Maroon, Crimson.\n");
    printf("Suitable Hindu God: Lord Hanuman.\n");
    printf("Additional Info: Chant Hanuman Chalisa for courage and strength.\n");
}

// Function to display the menu and handle user choices
void showMenu() {
    int choice;
    do {
        printf("\n--- Numerology Program ---\n");
        printf("1. Enter a Date of Birth\n");
        printf("2. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: {
                int day, month, year;
                printf("\nEnter your Date of Birth (DD MM YYYY): ");
                scanf("%d %d %d", &day, &month, &year);

                // Calculate Life Path Number
                int lifePathNumber = calculateLifePathNumber(day, month, year);
                printf("\nYour Life Path Number is: %d\n", lifePathNumber);

                // Call the appropriate function based on the Life Path Number
                switch (lifePathNumber) {
                    case 1: displayNumber1(); break;
                    case 2: displayNumber2(); break;
                    case 3: displayNumber3(); break;
                    case 4: displayNumber4(); break;
                    case 5: displayNumber5(); break;
                    case 6: displayNumber6(); break;
                    case 7: displayNumber7(); break;
                    case 8: displayNumber8(); break;
                    case 9: displayNumber9(); break;
                    default: printf("Invalid Life Path Number.\n");
                }
                break;
            }
            case 2:
                printf("\nThank you for using the Numerology Program. Om Namah Shivay!\n");
                break;
            default:
                printf("\nInvalid choice. Please try again.\n");
        }
    } while (choice != 2);
}

// Main function
int main() {
    showMenu();
    return 0;
}
