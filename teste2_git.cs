using System;

public class MyProgram
{
    public static void Main(string[] args)
    {
        double nota1, nota2, nota3, nota4, media;
        
        Console.WriteLine("nota1");
        nota1 = readValue();
        Console.WriteLine("nota2");
        nota2 = readValue();
        Console.WriteLine("nota3");
        nota3 = readValue();
        Console.WriteLine("nota4");
        nota4 = readValue();
        media = (nota1 + nota2 + nota3 + nota4) / 4;
        Console.WriteLine("a media é: " + media);
        if (media >= 7)
        {
            Console.WriteLine("aprovado");
        }
        else
        {
            Console.WriteLine("reprovado");
        }
    }
    
    // .NET can only read single characters or entire lines from the console.
    // The following function safely reads a double value.
    private static double readValue()
    {
        double result;
        while (!double.TryParse(Console.ReadLine(), out result));
        return result
    }
}
