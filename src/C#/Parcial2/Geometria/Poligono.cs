using System;

public abstract class Poligono
{
    protected int numLados;

    public void setNumLados(int numLados)
    {
        this.numLados = numLados;
    }

    public int getNumLados()
    {
        return numLados;
    }

    public abstract double calcularArea();
    public abstract double calcularPerimetro();
}