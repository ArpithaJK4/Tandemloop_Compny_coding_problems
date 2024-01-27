using System;

class Sample {
    public static void Main(string[] args) {
        string str = "abdef";

        string output3 = ShiftAndReverse(str);

        string output2 = Shift1(output3);
        Console.Write(output2);
    }

    public static string ShiftAndReverse(string str) {
        char[] result = new char[str.Length];

        for (int i = 0; i < str.Length; i++) {
            char ch = str[i];
            char shifted = (char)((ch - 'a' + 1) % 26 + 'a');
            result[i] = shifted;
        }

        return new string(result);
    }

    public static string Shift1(string str) {
        char[] rev = new char[str.Length];

        for (int i = str.Length - 1, j = 0; i >= 0; i--, j++) {
            char ch = str[i];
            rev[j] = ch;
        }

        return new string(rev);
    }
}
