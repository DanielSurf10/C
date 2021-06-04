import os

nome  = ''
agora = ''
base  = ''
prog  = ''

# arrumar
def arrumar():
    base = open(nome, 'r')
    prog = open('a.c', 'w')
    prog.write(base.read())
    base.close()
    prog.close()

# Função para compilar
def compilar():
    os.system(f"gcc a.c")

# Função para executar
def executar():
    os.system(f".\\a.exe")

# Limpar terminal
def limpar():
    os.system("cls")


while agora != 'a':
    # limpar terminal
    limpar()

    # Receber o nome
    nome = input("qual o nome: ")[2:].replace('\'', '')
    agora = ''

    while agora == '':
        # Arrumar para compilar
        arrumar()

        # Limpar terminal
        limpar()

        # Compilar
        compilar()

        # Executar
        executar()

        # Executar de novo ou receber nome de novo
        agora = input('\n -> ')
