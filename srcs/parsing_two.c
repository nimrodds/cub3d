#include "cub3d.h"

void	check_map_infos(t_s *zz)
{
	if (check_walls(zz) == 1)
		exiting(zz, "Map non entouree de 1\n");
	if (zz->depart == 'Z')
		exiting(zz, "Pas de joueur\n");
}
