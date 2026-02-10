package Java.autor;

public class autor {
    String nombre;
    String nacionalidad;

    public autor(String nombre, String nacionalidad) {
        this.nombre = nombre;
        this.nacionalidad = nacionalidad;
    }

    @Override
    public String toString() {
        return "Nombre: " + this.nombre + "\nNacionalidad: " + this.nacionalidad;
    }
}
