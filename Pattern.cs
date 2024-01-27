using System;

class HelloCSharp {
    static void Main() {
        PrintPattern();
    }

    static void PrintPattern() {
        int rows = 5;

        for (int i = 0; i < rows; i++) {

            for (int j = 0; j < i; j++) {
                Console.Write("");
            }

            int num = (i % 2 == 0) ? 1 : i + 1;
            for (int k = 0; k <= i; k++) {
                if (i != 0 && k != 0) {
                    Console.Write($" # {num}");
                    num = (i % 2 == 0) ? num + 1 : num - 1;
                } else {
                    Console.Write($" {num}");
                    num = (i % 2 == 0) ? num + 1 : num - 1;
                }
            }
            Console.WriteLine();
        }
    }
}
