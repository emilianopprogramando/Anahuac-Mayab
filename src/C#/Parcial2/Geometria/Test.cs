using System;

class Test
{
    static void Main(string[] args)
    {
        Triangulo t = new Triangulo(3, 5, 4);
        Circunferencia c = new Circunferencia(0, 3);

        Console.WriteLine("Triangulo");
        Console.WriteLine("Lados: " + t.getNumLados());
        Console.WriteLine("Area: " + t.calcularArea());
        Console.WriteLine("Perimetro: " + t.calcularPerimetro());

        Console.WriteLine("\nCircunferencia");
        Console.WriteLine("Area: " + c.calcularArea());
        Console.WriteLine("Perimetro: " + c.calcularPerimetro());
    }
}