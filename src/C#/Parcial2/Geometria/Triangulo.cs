using System;

public class Triangulo : Poligono
{
    protected double @base;
    protected double altura;

    public Triangulo(int numLados, double b, double altura)
    {
        this.numLados = numLados;
        this.@base = b;
        this.altura = altura;
    }

    public override double calcularArea()
    {
        return (@base * altura) / 2;
    }

    public override double calcularPerimetro()
    {
        return @base * 3; // suponiendo triángulo equilátero
    }
}