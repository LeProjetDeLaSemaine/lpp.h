#ifndef LPP_H
#define LPP_H
#include <iostream>
//debut des definitions
//instructions conditionelles
#define si(condition) if(condition)
#define aliter else
#define gnomon(variable) switch(variable)
#define casus case
//boucles
#define pro for
#define dum while
#define agere do
#define frangi break
#define permanere continue
//instructions test
#define et and
#define vel or
#define aut xor
#define non not
//instruction fonctions
#define reddire return
#if _MSC_VER
#define caput _tmain
#else
#define caput main
#endif
//instruction d'entrée/sortie
#define scribere std::cout
#define legere std::cin
#define lineaf std::endl
#define systema system
//types
#define integer int
#define vaccus void
#define catena string
#define littera char
#define duplex double
#define fluctuans float
#define longus long
#define brevis short
#define certus const
#define commemoratio enum
//portée
#define statua static
#define publicus public
#define privatus private
#define cliens protected
#define amicus friend
//exceptions
#define experiri try
#define comprehendere catch
//autres
#define ego this
#define novus new
#define delere delete
#define verax true
#define mendax false
#define nominumspatium namespace
#define classis class
#define suscriptum signed
#define nonsubscriptum unsigned
#define utendum using
#define iread goto
//aléatoires
#define fortuitus rand
//fin des definitions
#endif