using System;

class Mamifero
{
    private string nombre;
    protected double peso;

    public Mamifero(string n, double p)
    {
        this.nombre = n;
        this.peso = p;
    }

    public string Nombre 
    {
        get { return this.nombre; }
        set { this.nombre = value; }
    }

    public override string ToString()
    {
        return "Mamifero\n [" + nombre + "," + peso + "kg]";
    }
}

class Gato : Mamifero // El ':' indica herencia
{
    private int nBigotes;

    // Invoca el constructor de la clase padre con ' : base()'
    public Gato(string n, double p, int b) : base(n, p)
    {
        this.nBigotes = b;
    }

    public override string ToString()
    {
        return base.ToString() + "[Bigotes:" + nBigotes + "]";
    }
}

class Vaca : Mamifero
{
    private double litrosLeche;

    public Vaca(string n, double p, double l) : base(n, p)
    {
        this.litrosLeche = l;
    }

    public void calcularCantidadComida()
    {
        Console.WriteLine(this.peso * 0.03 + " kg de alimento");
    }

    public override string ToString()
    {
        return base.ToString() + "[Litros de leche:" + litrosLeche + "]";
    }
}

class Ballena : Mamifero
{
    public Ballena(string n, double p) : base(n, p)
    {
    }

    public override string ToString()
    {
        return base.ToString();
    }
}