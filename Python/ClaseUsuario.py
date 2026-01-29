class Usuario:

    # Declaración de los atributos es en el método __init__
    def __init__(self, nombre="", apellidos="", edad=0):
        self.nombre = nombre
        self.apellidos = apellidos
        self.edad = edad

    def iniciarSesion(self):
        print("El usuario ", self.nombre, " esta iniciando sesión.")

    def cerrarSesion(self):
        print("El usuario ", self.nombre, " ha cerrando la sesión.")

    def hacerReporte(self):
        print("Reporte de usuario")
        print("Nombre completo: ", self.nombre, " ", self.apellidos)
        print("Edad: ", self.edad)