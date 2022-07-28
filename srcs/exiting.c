#include "cub3d.h"

int	exiting(t_s *zz, char *str)
{
	int i;

	(void)str;
	i = 0;
	if (zz->no)
		free(zz->no);
	if (zz->so)
		free(zz->so);
	if (zz->we)
		free(zz->we);
	if (zz->ea)
		free(zz->ea);
	if (zz->map)
	{
		while (i < zz->ylines)
		{
			free(zz->map[i]);
			i++;
		}
	}
	if (zz->map)
		free(zz->map);
	if (zz->data.img)
		mlx_destroy_image(zz->data.mlx_ptr, zz->data.img);
	if (zz->texture[0].img)
		mlx_destroy_image(zz->data.mlx_ptr, zz->texture[0].img);
	if (zz->texture[1].img)
		mlx_destroy_image(zz->data.mlx_ptr, zz->texture[1].img);
	if (zz->texture[2].img)
		mlx_destroy_image(zz->data.mlx_ptr, zz->texture[2].img);
	if (zz->texture[3].img)
		mlx_destroy_image(zz->data.mlx_ptr, zz->texture[3].img);
	if (zz->data.mlx_win)
		mlx_destroy_window(zz->data.mlx_ptr, zz->data.mlx_win);
	exit(0);
}
