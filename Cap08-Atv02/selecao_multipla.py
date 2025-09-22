def fatorial(n):
    fat = 1
    for i in range(1, n + 1):
        fat *= i
    return fat

while True:
    print("\n--- MENU ---")
    print("1 - Calcular o quadrado de um número")
    print("2 - Calcular o fatorial de um número")
    print("3 - Sair")
    opcao = int(input("Escolha uma opção: "))

    if opcao == 1:
        numero = int(input("Digite um número: "))
        print(f"Quadrado de {numero} = {numero ** 2}")
    elif opcao == 2:
        numero = int(input("Digite um número: "))
        print(f"Fatorial de {numero} = {fatorial(numero)}")
    elif opcao == 3:
        print("Saindo do programa...")
        break
    else:
        print("Opção inválida!")
