#include "cub3d.h"

void	initing_parsing(char **argv, t_s *zz)
{
	zz->map_name = argv[1];
	zz->rx = 0;
	zz->ry = 0;
	zz->ground_color = -1;
	zz->sky_color = -1;
	zz->r = 0;
	zz->g = 0;
	zz->b = 0;
	zz->no = NULL;
	zz->so = NULL;
	zz->we = NULL;
	zz->ea = NULL;
	zz->ylines = 0;
	zz->xlines = 0;
	zz->map = NULL;
	zz->dx = 0;
	zz->dy = 0;
	zz->screenx = 0;
	zz->screeny = 0;
	zz->count = 0;
	zz->texture[0].img = NULL;
	zz->texture[1].img = NULL;
	zz->texture[2].img = NULL;
	zz->texture[3].img = NULL;
	zz->depart = 0;
	zz->data.img = NULL;
	zz->data.mlx_win = NULL;
}