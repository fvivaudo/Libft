/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sin.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvivaudo <fvivaudo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/05 14:49:06 by fvivaudo          #+#    #+#             */
/*   Updated: 2015/06/05 14:49:07 by fvivaudo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <math.h>

double	ft_sin(double x)
{
	double	cos_result;

	cos_result = ft_cos(x - (M_PI / 2));
	return (cos_result);
}
avec les options r et c, je vais pas vous indiquer ce que ça fait vous irez chercher vous même dans le man. Et ensuite vous lui passez en premier argument après r et c, le nom de votre librairie, par exemple libstr.a, pourquoi libstr.a? Déjà une libraire ça commence toujours par lib. je vous redirais pourquoi tout a l'heure, ensuite le nom de votre libraire par exemple str et .a parce que c'est l'extension des librairies statiques, il existe aussi des librairies dynamiques mais encore une fois ce n'est pas l'objet de ce cours.Donc libstr.a pour le nom de ma librairie puis les fichiers qui contiennent les fonctions que je veux mettre dans cette librairie, donc, mes deux .o que je viens de créer, a partir de ce moment la, ar il a fait son boulot, il affiche libstr.a qui contient mes deux fichiers, mes deux fonctions, comment on s'en sert maintenant, tout simplement, tout comme je le faisais tout a l'heure, je peux prendre mon main.c et lui dire en revanche que la librairie que je veux utiliser, et bien, elle se trouve dans le répertoire courant, donc avec l'option -L je peux lui indiquer par le point que c'est dans ce répertoire la qu'il cherche ma librairie et que le nom de la librairie qu'il doit chercher c'est libstr, et pourquoi n'ai je indique que str, c'est parce que c'est comme ça que ça fonctionne, c'est pour ça que tout a l'heure je vous disais qu'il faut que ça commence par lib, -l str va donc indiquer a gcc que c'est libstr.a dont j'ai besoin, et ça, cela fonctionne de la même manière que tout a l'heure quand je compilais avec mes .c, l'avantage c'est que maintenant, mon libstr.a, ben je peux le trimbaler ou je veux, je peux très bien le mettre dans mon répertoire de la répertoire et le linker a partir de la, ça vous permet de ne pas refaire a chaque fois des fonctions que vous connaissais depuis le début et ainsi, pas avoir a réinventer la roue tous les jours et repartir toujours avec votre propre librairie sans avoir a refaire encore une fois les mêmes fonctions, donc ça, c'est déjà une première chose, la vous avez vu ar rc ça a suffit pour créer ma librairie, vous vous apercevrez qu'au bout d'un moment, il y a un certain nombre de fonctions que vous allez créer qui vont peut être être a mettre dans votre lib pardon, et euuuh c'est vous remarquerez, je vous le dis déjà maintenant, parce que c'est quelque chose que je dois vous montrer, gcc il a réussi a très bien compiler comme cela, y'a pas de soucis, ça fonctionne il vous gueule pas dessus pour lui tout va bien, sauf que a partir du moment ou vous allez avoir plus de 3000 fonctions, et encore bien avant, quand vous allez avoir besoin dans votre main.c de votre ft_putstr et qu'il se trouve a la moitié de votre lib, il a falloir qu'il parcourt toute votre librairie pour trouver ft_putstr pour pouvoir créer votre binaire, il va pas utiliser toute votre librairie pour pouvoir au final ne se servir que de ft_putstr, et donc ça c'est une opération qui est longue, et quand vous arrivez a faire des programmes qui commencent a être complexe et que vous devez utiliser des librairies et qu'il va falloir aller chercher dans toutes vos lib ou est ce que se trouve la fameuse fonction que vous utilisez, ben gcc il va mettre du temps, parce qu'il va falloir tout parcourir, et donc pour ça, il y a quelque chose qui s'appelle un bin.. un programme qui s'appelle ranlib, qui prend simplement en paramètre votre librairie, et ranlib va créer, ce qu'on appelle un index dans votre librairie qui va permettre a gcc de savoir ou aller c'est simplement un.. ça dit la fonction ft_putchar elle est en numéro un, la fonction ft_putstr c'est a la position numéro deux, la fonction.. et ainsi de suite pour toutes les librair.. les fonctions que vous pourrez ajouter dans votre librairie, et c'est très pratique et ça optimise pardon le temps de compilation, et je vous dit c'est surtout très efficace a partir du moment ou vous allez avoir un très grande quantité de fonctions. Des a présent prenez ce réflexe, ça vous évitera beaucoup de surprises, et la ça fonctionne toujours de la même manière. Donc voici pour les librairies.