package Java.Parcial2.Actividad;

public class Paciente extends Persona { // Hereda de la clase Persona

    private double altura; // Atributos
    private double peso;

    public Paciente(String nombre, String apellido, String genero, int edad, double altura, double peso) {
        // Constructor con parametros
        super(nombre, apellido, genero, edad); // Invoca atributos de clase padre
        this.altura = altura;
        this.peso = peso;
    }

    public void printPaciente() { // Metodo print
        super.printPersona(); // Invoca al metodo print de la clase padre
        System.out.println("Altura: " + altura);
        System.out.println("Peso: " + peso);
        System.out.println("IMC: " + imc(altura, peso));
    }

    // Setters y getters para atributos privados
    public void setAltura(double altura) {
        this.altura = altura;
    }

    public double getAltura() {
        return altura;
    }

    public void setPeso(double peso) {
        this.peso = peso;
    }

    public double getPeso() {
        return peso;
    }

    // Metodo para calcular el IMC
    public double imc(double altura, double peso) {
        return peso / (altura * altura);
    }
}
