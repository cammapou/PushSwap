#ifndef SDL_PUSHSWAP_H

# define SDL_PUSHSWAP_H

# include <SDL.h>
# include "../libft/libft.h"
# include "../printf/srcs/ft_printf.h"

SDL_Window			*w_init(SDL_Window *window);
void				w_draw(SDL_Renderer *renderer, t_list *lst_a, \
		t_list *lst_b);
void				w_clear(SDL_Renderer *renderer);
void				w_destroy(SDL_Window *window);

#endif
