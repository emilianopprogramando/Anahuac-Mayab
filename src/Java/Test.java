package Java;

public class Test {

    public static void main(String[] args) {
        // Crear una instancia de Usuario (Objeto)
        Usuario maestra = new Usuario();
        Usuario alumno = new Usuario("Tom", "Cruise", 64);

        // Asignar valores a los atributos
        maestra.setNombre("Lizbeth");
        maestra.setApellidos("Hernandez Olan");
        maestra.setEdad(42);

        // Llamar a los métodos para probarlos
        maestra.iniciarSesion();
        maestra.hacerReporte();
        maestra.cerrarSesion();

        System.out.println("");

        alumno.iniciarSesion();
        alumno.hacerReporte();
        alumno.cerrarSesion();
    }
}