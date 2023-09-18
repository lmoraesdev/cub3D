// colocar header

#ifndef QUEUE_H
# define QUEUE_H

# include <stdio.h>
# include <stdlib.h>

typedef struct s_queue_item
{
	char				*value;
	struct s_queue_item	*prev;
	struct s_queue_item	*next;
}	t_queue_item;

typedef struct s_queue
{
	t_queue_item	*first;
	t_queue_item	*last;
	size_t			len;
}	t_queue;

t_queue	*queue_create(void);
void	queue_destroy(t_queue *queue);
void	queue_push(t_queue *queue, char *value);
void	queue_pop(t_queue *queue);
void	queue_shift(t_queue *queue);

#endif
