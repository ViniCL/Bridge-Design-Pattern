# Bridge-Design-Pattern

playerHead.h -> É a abstração, nesse caso, da cabeça de um jogador. Ela tem o atributo cabelo do tipo cabeloInterface, que é a interface que caracteriza o Bridge propriamente dito.
cabeloInterface -> É a interface que servirá de base para as classes específicas que nesse caso definirão cada tipo de cabelo.
 moicanoEstiloNeymar.h e blackPower.h -> Classes concretas, que definem as características do cabelo. 
main.cpp -> Cria objetos do tipo CabeloInterface e Cabeca, para representar a funcionalidade. 

