package Java.autor;

public class libro {
    String titulo;
    int anioPublicacion;
    autor autor; // Atributo que es un objeto de la clase autor.

    public libro(String titulo, int anioPublicacion, autor autor) {
        this.titulo = titulo;
        this.anioPublicacion = anioPublicacion;
        this.autor = autor;
    }

    @Override
    public String toString() {
        return autor + "\nTitulo: " + this.titulo + "\nAnio Publicacion: " + this.anioPublicacion;
    }
}
