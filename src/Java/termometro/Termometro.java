package Java.termometro;

import java.util.Random;

public class Termometro {

    // Atributos
    private float temperatura;

    // Constructor
    public Termometro() {
        Random random = new Random();
        this.temperatura = random.nextInt(101);
    }

    // Constructor con parametros
    public Termometro(float t) {
        this.temperatura = t;
    }

    // Getter
    public float getTemperatura() {
        return this.temperatura;
    }

    // Setter
    public void setTemperatura(float t) {
        this.temperatura = t;
    }

    // Métodos
    public float temperaturaC() {
        return this.temperatura;
    }

    public float temperaturaF() {
        return (this.temperatura * (9f / 5f)) + 32f;
    }

    public float temperaturaK() {
        return this.temperatura + 273.15f;
    }

    public void MostrarTemperaturas() {
        System.out.println("Celsius: " + temperaturaC());
        System.out.println("Kelvin: " + temperaturaK());
        System.out.println("Fahrenheit: " + temperaturaF());
    }

}
