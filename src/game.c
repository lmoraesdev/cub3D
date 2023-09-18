#include "../inc/cub3D.h"

/**
 * The function "game" updates and renders data, and returns 1.
 *
 * @param data The parameter "data" is a pointer to a structure of type "t_data".
 *
 * @return 1.
 */
int	game(t_data *data)
{
	update(data);
	render(data);
	return (1);
}
