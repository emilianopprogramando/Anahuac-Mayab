using System;

public class Circunferencia : Poligono
{
    protected double radio;

    public Circunferencia(int numLados, double radio)
    {
        this.numLados = numLados;
        this.radio = radio;
    }

    public override double calcularArea()
    {
        return Math.PI * radio * radio;
    }

    public override double calcularPerimetro()
    {
        return 2 * Math.PI * radio;
    }
}