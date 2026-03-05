using System;

public class Termometro
{
    // Atributos
    private float temperatura;

    // Constructor
    public Termometro()
    {
        Random random = new Random();
        this.temperatura = random.Next(0,101);
    }

    // Constructor con parametros
    public Termometro(float t)
    {
        this.temperatura = t;
    }

    // Getter
    public float getTemperatura()
    {
        return this.temperatura;
    }

    // Setter
    public void setTemperatura(float t)
    {
        this.temperatura = t;
    }

    // Métodos
    public float temperaturaC()
    {
        return this.temperatura;
    }

    public float temperaturaF()
    {
        return (this.temperatura * (9f/5f)) + 32;
    }

    public float temperaturaK()
    {
        return this.temperatura + 273.15f;
    }

    public void MostrarTemperaturas()
    {
        Console.WriteLine("Celsius: " + temperaturaC());
        Console.WriteLine("Fahrenheit: " + temperaturaF());
        Console.WriteLine("Kelvin: " + temperaturaK());
    }

}
