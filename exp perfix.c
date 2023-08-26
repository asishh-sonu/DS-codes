
// C# program to evaluate
// a prefix expression.
using System;
using System.Collections.Generic;
 
class GFG {
 
    static Boolean isOperand(char c)
    {
        // If the character is a digit
        // then it must be an operand
        if (c >= 48 && c <= 57)
            return true;
        else
            return false;
    }
 
    static double evaluatePrefix(String exprsn)
    {
        Stack<Double> Stack = new Stack<Double>();
 
        for (int j = exprsn.Length - 1; j >= 0; j--) {
 
            // Push operand to Stack
            // To convert exprsn[j] to digit subtract
            // '0' from exprsn[j].
            if (isOperand(exprsn[j]))
                Stack.Push((double)(exprsn[j] - 48));
 
            else {
 
                // Operator encountered
                // Pop two elements from Stack
                double o1 = Stack.Peek();
                Stack.Pop();
                double o2 = Stack.Peek();
                Stack.Pop();
 
                // Use switch case to operate on o1
                // and o2 and perform o1 O o2.
                switch (exprsn[j]) {
                case '+':
                    Stack.Push(o1 + o2);
                    break;
                case '-':
                    Stack.Push(o1 - o2);
                    break;
                case '*':
                    Stack.Push(o1 * o2);
                    break;
                case '/':
                    Stack.Push(o1 / o2);
                    break;
                }
            }
        }
 
        return Stack.Peek();
    }
 
    /* Driver code */
    public static void Main(String[] args)
    {
        String exprsn = "+9*26";
        Console.WriteLine(evaluatePrefix(exprsn));
    }
}
 
