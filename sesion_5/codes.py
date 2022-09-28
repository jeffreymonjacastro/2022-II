# n = int(input("N: "))

viajes = []

for i in range(n):
    viajes.append(int(input("Año: ")))

p = []

for i in range(n):
    p.append(int(input("total_puntos: ")))

puntajes = []

# Agregar datos a una lista por teclado
for i in range(n):
    lista = []
    for j in range(p[i]):
        lista.append(int(input("Puntaje: ")))

    puntajes.append(lista)


print(puntajes)


# NO MODIFICAR NADA SOBRE ESTA LINEA
#=======PROTEGE LA SAGRADA LINEA DEL TIEMPO=======
N = int(input("N = "))

viajes = input("viajes = ")

P = input("P = ")

puntajes = input("puntajes = ")


# # tu solucion empieza aqui
new_viajes = viajes[1:len(viajes)-1]

lista_viajes = new_viajes.split(",")

new_P = P[1:len(P)-1]

lista_p = new_P.split(",")

new_puntajes = puntajes[1:len(puntajes)-1]

# Ojitoooooo, úsenlo con cuidado, no lo copien igual, 
#traten de modificar las variables y la lógica si es posible
new2_puntajes = []
for i in range(len(new_puntajes)):
    if new_puntajes[i] == "[":
        j = i+1
        str = ""
        while True:
            if new_puntajes[j] == "]":
                break

            str += new_puntajes[j]
            j += 1

        new2_puntajes.append(str)

total_viajes = []
for i in range(N):
     total_viajes.append(new2_puntajes[i].split(","))

# print("")
