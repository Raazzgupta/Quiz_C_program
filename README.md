# Quiz_C_program README

This README file provides information about a quiz program written in C. The program allows users to take quizzes by answering multiple-choice questions and provides feedback on their performance. Below you will find important details on how to use the program, its features, and any additional instructions.

## Getting Started

### Prerequisites
To compile and run the quiz program, you need to have a C compiler installed on your system. You can use compilers like GCC (GNU Compiler Collection) or Clang.

### Compiling the Program
To compile the program, follow these steps:
1. Open a terminal or command prompt.
2. Navigate to the directory containing the program files.
3. Execute the following command:
   ```
   gcc quiz.c -o quiz
   ```
   This command compiles the `quiz.c` file and creates an executable file named `quiz`.

### Running the Program
Once the program is compiled, you can run it by executing the following command:
```
./quiz
```

## Program Features

### Quiz Questions
The program loads quiz questions from a file named `questions.txt`. Each question in the file should be formatted as follows:
```
Question: What is the full form of RA1M?
1.) Read Access Memory.
2.) Read only Memory
3.) Read And Memory.
4.) Reaccess admin Memory
Answer: 1
```
- Each question starts with the keyword "Question:" followed by the question itself.
- The possible answer choices are represented by number (1, 2, 3, 4).
- The correct answer is specified with the keyword "Answer:" followed by the corresponding letter.

You can modify the `questions.txt` file to include your own questions and answers. Just make sure to follow the format mentioned above.

### Taking the Quiz
When you run the program, it will display the quiz questions one by one and prompt you to enter your answer. After you answer all the questions, the program will provide feedback on your performance by displaying the number of correct answers and the overall percentage score.

### Adding More Questions
To add more questions to the quiz, follow these steps:
1. Open the `questions.txt` file in a text editor.
2. Add a new question using the format described above.
3. Save the file.

Make sure to separate each question with a blank line.

## License
This quiz program is released under the [MIT License](https://opensource.org/licenses/MIT).

## Acknowledgments
The quiz program was developed as a learning exercise and can be used as a starting point for building more complex quiz applications.

Feel free to explore the code and modify it according to your needs. If you encounter any issues or have suggestions for improvements, please don't hesitate to reach out or contribute to the project. Happy quizzing!
