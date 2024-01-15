#include <stdio.h>
#include <stdlib.h>

int score = 0;

// Function to ask a question
void askQuestion(char question[], char options[][50], int correctOption)
 {
    printf("%s\n", question);

    // Print options
    for (int i = 0; i < 4; ++i)
    {
        printf("%d. %s\n", i + 1, options[i]);
    }

    // Get user's answer
    int userAnswer;
    printf("Your answer (option): ");
    scanf("%d", &userAnswer);

    // Check the answer
    if (userAnswer == correctOption)

    {
        printf("Correct!\n");
        score++;
    }
    else
    {
        printf("Incorrect. The correct answer is %d. \n", correctOption);
    }

    printf("\n");

}

int main()
 {
    printf("Welcome to the Quiz!\n\n");

    //questions
    char question1[] = "What is the capital of France?";
    char options1[][50] = {"Berlin", "London", "Paris", "Madrid"};
    askQuestion(question1, options1, 3);

    char question2[] = "Which planet is known as the Red Planet?";
    char options2[][50] = {"Venus", "Mars", "Jupiter", "Saturn"};
    askQuestion(question2, options2, 2);

    char question3[] = "Which element has the chemical symbol 'O'?";
    char options3[][50] = {"Oxygen","Gold","Silver","Iron"};
    askQuestion(question3, options3, 1);

    char question4[] = "What is the largest ocean on Earth?";
    char options4[][50] = {"Atlantic","Indian","Southern","Pacific"};
    askQuestion(question4, options4, 4);

    char question5[] = "In which year did the first manned moon landing occur?";
    char options5[][50] = {"1969","1959","1970","1965"};
    askQuestion(question5, options5, 1);

    char question6[] = "What is the currency of Japan?";
    char options6[][50] = {"Paisa","Rupee","Yen","Dollar"};
    askQuestion(question6, options6, 3);

    char question7[] = "What is the capital city of Australia?";
    char options7[][50] = {"Melbourne","Sydney","Canberra","Brisbane"};
    askQuestion(question7, options7, 2);

    char question8[] = " What is the largest planet in our solar system";
    char options8[][50] = {"Saturn","Mars","Jupiter","Pluto"};
    askQuestion(question8, options8, 3);

    char question9[] = "Who painted the Mona Lisa?";
    char options9[][50] = {"Vincent van Gogh","Pablo Picasso","Leonardo da Vinci","Michelangelo"};
    askQuestion(question9, options9, 3);

    char question10[] = " What is the chemical symbol for gold?";
    char options10[][50] = {"Au","Ag","Fe","Cu"};
    askQuestion(question10, options10, 1);


    // Display the final score
    printf("Your final score: %d out of 10\n", score);

    return 0;
}
