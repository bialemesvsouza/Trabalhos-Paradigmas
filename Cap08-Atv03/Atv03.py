def processar_lista(lista):
    for num in lista:
        if num == 0:
            print("Número 0 encontrado, interrompendo execução.")
            break  
        if num < 0:
            continue 
        if num % 2 == 0:
            return num * 2 
    return None

numeros = [3, -1, 5, 8, -2, 0, 4]
resultado = processar_lista(numeros)
print("Resultado:", resultado)
