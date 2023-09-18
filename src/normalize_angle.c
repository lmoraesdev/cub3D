#include "../inc/cub3D.h"

/**
 * The normalize_angle function takes a pointer to a float representing an angle
 * and normalizes it to be within the range of 0 to 2π.
 *
 * @param angle A pointer to a float variable representing an angle in radians.
 */
void	normalize_angle(float *angle)
{
	*angle = remainder(*angle, TWO_PI);
	if (*angle < 0)
		*angle = TWO_PI + *angle;
}
