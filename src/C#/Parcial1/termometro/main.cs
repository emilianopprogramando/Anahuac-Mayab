public class Test
{
    public static void Main()
    {
        // Temperatura 1 aleatoria
        Termometro temp1 = new Termometro();
        Console.WriteLine("Termómetro 1\n");
        temp1.MostrarTemperaturas();

        // Temperatura 2 usuario
        Console.Write("\nIngrese una temperatura en °C: ");
        float tempUsuario = float.Parse(Console.ReadLine());

        Termometro temp2 = new Termometro(tempUsuario);
        Console.WriteLine("Termómetro 2\n");
        temp2.MostrarTemperaturas();
    }
}
