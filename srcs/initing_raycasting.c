#include "cub3d.h"

void	initing_moves(t_s *zz)
{
	zz->data.forward = 0;
	zz->data.back = 0;
	zz->data.left = 0;
	zz->data.right = 0;
	zz->data.rotate_right = 0;
	zz->data.rotate_left = 0;
	zz->ray.posx = (double)zz->dx + 0.5;
	zz->ray.posy = (double)zz->dy + 0.5;
	zz->ray.dirx = 0;
	zz->ray.diry = 0;
	zz->ray.planx = 0;
	zz->ray.plany = 0;
	initing_pov(zz);
}

void	initing_pov(t_s *zz)
{
	if (zz->depart == 'N')
		zz->ray.dirx = -1;
	if (zz->depart == 'S')
		zz->ray.dirx = 1;
	if (zz->depart == 'E')
		zz->ray.diry = 1;
	if (zz->depart == 'W')
		zz->ray.diry = -1;
	if (zz->depart == 'N')
		zz->ray.plany = 0.66;
	if (zz->depart == 'S')
		zz->ray.plany = -0.66;
	if (zz->depart == 'E')
		zz->ray.planx = 0.66;
	if (zz->depart == 'W')
		zz->ray.planx = -0.66;
}
