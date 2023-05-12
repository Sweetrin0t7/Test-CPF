# Test-CPF
Para cada indivíduo, a sua inscrição no Cadastro de Pessoas Físicas (CPF) é composto por um
número de 9 algarismos e outro número de 2 algarismos, na forma d1 e d2, em que os dígitos d1
e d2 são denominados dígitos verificadores. Os dígitos verificadores são calculados, a partir da
esquerda, da seguinte maneira: os 9 primeiros algarismos são multiplicados pela sequência 10, 9,
8, 7, 6, 5, 4, 3, 2 (o primeiro por 10, o segundo por 9, e assim sucessivamente); em seguida,
calcula-se o resto r da divisão da soma dos resultados das multiplicações por 11, e se esse resto r
for 0 ou 1, d1 é zero, caso contrário d1 = (11 – r). O dígito d2 é calculado pela mesma regra, na
qual os números a serem multiplicados pela sequência dada são contados a partir do segundo
algarismo, sendo d1 o último algarismo, isto é, d2 é zero se o resto s da divisão por 11 das somas
das multiplicações for 0 ou 1, caso contrário, d2 = (11 – s)."
Com base nesse enunciado, crie um programa que, solicita as quatro partes que compõe um
CPF, verificando se as mesmas estão corretas, ou seja, os 3 primeiros valores devem ser
menores do que 1000 e o último (aquele que possui os dígitos verificadores), menor do que 100.
A partir dos valores repassados valide o CPF informado, calculando os dois dígitos verificadores e
comparando com os repassados pelo usuário, como forma de validar o CPF repassado.

Entrada: 4 números inteiros representando as quatro partes que formam um número de CPF.
Saída: uma mensagem informando Se o CPF foi digitado com a quantidade correta de dígitos, e
se ele está correto ou incorreto, de acordo com seus dígitos verificadores
