/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmendez- <pmendez-@student42.madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 15:34:18 by pmendez-          #+#    #+#             */
/*   Updated: 2024/02/03 17:58:05 by pmendez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/**
 * Crea un nuevo nodo para una lista enlazada.
 * Asigna memoria dinámicamente para un nuevo nodo de la lista.
 * Asigna el puntero al contenido del nodo al contenido del nuevo nodo.
 * Asigna nulo al campo `next` del nuevo nodo.
 * Retorna el nuevo nodo.
 *
 * @param content: Puntero al contenido del nuevo nodo.
 * @return: El nuevo nodo.
 */
t_list	*ft_lstnew(void *content)
{
	t_list	*nodo;

	nodo = (t_list *)malloc(sizeof(*nodo));
	if (nodo == NULL)
		return (NULL);
	nodo->content = content;
	nodo->next = NULL;
	return (nodo);
}
