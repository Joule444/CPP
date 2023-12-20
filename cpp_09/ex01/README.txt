-Program name RPN	[x]

-Prends Inverted Polish mathematical expression en argument

-Que des nombres en dessous de 10 dans les arguments

-Process l'expression et output le result sur la sortie standard

-Si une erreur apparait -> message d'erreur

-Token to handle : "+ - / *"

-Utiliser au moins un conteneur (stack?)

-Bracket et nombres decimaux pas a gerer -> erreur

Ex:
	./RPN "8 9 * 9 - 9 - 9 - 4 - 1 +"
	=> 42

	./RPN "7 7 * 7 -"
	=> 42

	./RPN "1 2 * 2 / 2 * 2 4 - +"
	=> 0

	./RPN "(1 + 1)"
	=> Error

============================================================================

./RPN "3 4 +"

on commence par ajouter 3 a la stack (add_back())

=>	[ ]
	[3]

puis 4

=>	[4]
	[3]

puis on applique le signe sur la stack

=>	[4]	=> 3 + 4 = 7 =>	[ ]
	[3]+				[7]

./RPN "3 4 + 1 2 3 + - *"

=> [4][3]+	=> [3][2][1][7]+ => [3][2][8]- => [3][6]* => [18]

=> Constructor string -> set _expression

=> void parseExpr( void ) => parsing throw exception si error

=> int	doRPN( void ) => fonction principale return le result