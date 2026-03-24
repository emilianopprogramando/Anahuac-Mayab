using System;

class Juego
{
    private Jugador jugador1;
    private Jugador jugador2;

    public Juego()
    {
        jugador1 = new Jugador("jugador 1");
        jugador2 = new Jugador("jugador 2");
    }

    public void iniciarJuego()
    {
        Console.WriteLine("Bienvenido al juego de piedra papel o tijera");

        jugador1.elegir();
        jugador2.elegir();

        Console.WriteLine($"El {jugador1.getNombre()} ha usado: {jugador1.getEleccion()}");
        Console.WriteLine($"El {jugador2.getNombre()} ha usado: {jugador2.getEleccion()}");

        Console.WriteLine(determinarGanador());
    }

    public string determinarGanador()
    {
        if (jugador1.getEleccion() == jugador2.getEleccion())
        {
            return "Empate";
        }

        if (
            (jugador1.getEleccion() == "piedra" && jugador2.getEleccion() == "tijera") ||
            (jugador1.getEleccion() == "papel" && jugador2.getEleccion() == "piedra") ||
            (jugador1.getEleccion() == "tijera" && jugador2.getEleccion() == "papel")
        )
        {
            return "El ganador es: " + jugador1.getNombre();
        }

        return "El ganador es: " + jugador2.getNombre();
    }
}

class Jugador
{
    private string nombre;
    private string eleccion;
    private static Random rand = new Random();

    public Jugador(string n)
    {
        this.nombre = n;
    }

    public string getNombre()
    {
        return this.nombre;
    }

    public string getEleccion()
    {
        return this.eleccion;
    }

    public void elegir()
    {
        string[] opciones = { "piedra", "papel", "tijera" };
        eleccion = opciones[rand.Next(0, 3)];
    }
}