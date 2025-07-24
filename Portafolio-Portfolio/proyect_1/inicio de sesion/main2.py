import json

nombre = input("Nombre: ")
correo = input("Correo: ")
contraseña = input("Contraseña: ")
#pedimos los datos necesarios para luego saber si es el usuario
"""with open("user.json","a",encoding="utf-8") as g:
    g.write("
            [
    {
        "nombre":"felipe","correo":"felipegrandon@gmail.com","contraseña":"discord234"
    }
]
            
            
            ")"""#aveces no funciona el json, y esto crea un archivo json que si lo abre correctamente
    
with open("user.json", "r", encoding="utf-8") as f:
    # carga el archivo que está dentro del JSON y lo guarda dentro de data
    data = json.load(f)
for i in data:
    i = i#guardo la libreria dentro de i, y así poder manipularla
while True:
    if i["nombre"] == nombre:
        print("nombre correcto")
        break
    else:
        print("nombre incorrecto")
        nombre = input("Nombre: ")
while True:
    if i["correo"] == correo:
        print("correo correcto")
        break
    else:
        print("correo incorrecto")
        correo = input("Correo: ")
c = 0
while True:
    if i["contraseña"] == contraseña:
        print(f"Contraseña correcta, iniciando sesión {nombre}")
        break
    else:
        print("contraseña incorrecta")
        c += 1
        contraseña = input("Contraseña: ")
        if c >= 3:
            print("limite de equivocaciones")
            break
