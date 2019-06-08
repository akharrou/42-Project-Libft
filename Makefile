# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/02/17 16:23:01 by akharrou          #+#    #+#              #
#    Updated: 2019/06/08 15:59:12 by akharrou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC          =   gcc
CFLAGS      =   -Wall -Wextra -Werror $(DEBUG_FLAGS)

# — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — —

OPTIM_FLAGS =   -O3 -march=native                                             \

# — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — —

DEBUG_FLAGS =   -O0 -g                                                      \
                                                                            \
                # -fsanitize=address                                          \
                # -fsanitize=undefined                                        \
                # -fsanitize=bounds                                           \
                # -fsanitize=nullability-arg                                  \
                # -fsanitize=nullability-return                               \
                # -fsanitize=nullability-assign                               \
                # -fsanitize-address-use-after-scope                          \
                # -fsanitize=integer                                          \
                # -fsanitize=object-size                                      \

# — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — —

NAME        =   libft.a

# — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — —

OBJECTS     =   $(SOURCES:.c=.o)

# — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — —

HEADERS     =   Includes/libft.h                                              \
                                                                              \
                Includes/stdio_42.h                                           \
                Includes/stdlib_42.h                                          \
                Includes/string_42.h                                          \
                Includes/stdint_42.h                                          \
                Includes/unistd_42.h                                          \
                Includes/macros_42.h                                          \
                Includes/ctype_42.h                                           \
                Includes/math_42.h                                            \
                                                                              \
                Includes/bigint.h                                             \
                Includes/vector.h                                             \
                Includes/uvector.h                                            \
                Includes/list.h                                               \
                Includes/btree.h                                              \
                Includes/trie.h                                               \
                Includes/hashtable.h                                          \
                Includes/dict.h                                               \
                                                                              \
                Includes/crypt.h                                              \
                                                                              \
                Includes/ft_readline.h                                        \
                Includes/ft_printf.h                                          \

# — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — —

SOURCES     =   $(STDIO)                                                      \
                $(STDLIB)                                                     \
                $(STRING)                                                     \
                $(UNISTD)                                                     \
                $(CTYPE)                                                      \
                $(MATH)                                                       \
                                                                              \
                $(BIGINT)                                                     \
                $(VECTOR)                                                     \
                $(UVECTOR)                                                    \
                $(LIST)                                                       \
                $(BTREE)                                                      \
                $(TRIE)                                                       \
                $(HASHTABLE)                                                  \
                $(DICT)                                                       \
                                                                              \
                $(CRYPT)                                                      \

# — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — —

STDIO       =   Stdio/ft_readline.c                                           \
                Stdio/ft_readfile.c                                           \
                Stdio/ft_readfiledes.c                                        \
                                                                              \
                Stdio/ft_printf.c                                             \
                Stdio/ft_dprintf.c                                            \
                Stdio/ft_sprintf.c                                            \
                Stdio/ft_asprintf.c                                           \
                Stdio/ft_vprintf.c                                            \
                Stdio/ft_vdprintf.c                                           \
                Stdio/ft_vsprintf.c                                           \
                Stdio/ft_vasprintf.c                                          \
                                                                              \
                Stdio/PrintfUtils/parser.c                                    \
                Stdio/PrintfUtils/formatter.c                                 \
                Stdio/PrintfUtils/Handlers/c_handler.c                        \
                Stdio/PrintfUtils/Handlers/s_handler.c                        \
                Stdio/PrintfUtils/Handlers/r_handler.c                        \
                Stdio/PrintfUtils/Handlers/p_handler.c                        \
                Stdio/PrintfUtils/Handlers/i_handler.c                        \
                Stdio/PrintfUtils/Handlers/u_handler.c                        \
                Stdio/PrintfUtils/Handlers/f_handler.c                        \
                Stdio/PrintfUtils/Handlers/b_handler.c                        \
                Stdio/PrintfUtils/Handlers/o_handler.c                        \
                Stdio/PrintfUtils/Handlers/d_handler.c                        \
                Stdio/PrintfUtils/Handlers/x_handler.c                        \
                Stdio/PrintfUtils/Handlers/xx_handler.c                       \
                Stdio/PrintfUtils/Handlers/mod_handler.c                      \
                Stdio/PrintfUtils/Handlers/style_handler.c                    \
                                                                              \
                Stdio/ft_putbits.c                                            \
                Stdio/ft_putbyte.c                                            \
                Stdio/ft_putbyte_fd.c                                         \
                Stdio/ft_putbytes.c                                           \
                Stdio/ft_putbytes_fd.c                                        \
                Stdio/ft_putchar.c                                            \
                Stdio/ft_putchar_fd.c                                         \
                Stdio/ft_putstr.c                                             \
                Stdio/ft_putstr_fd.c                                          \
                Stdio/ft_putendl.c                                            \
                Stdio/ft_putendl_fd.c                                         \
                Stdio/ft_putstrtab.c                                          \
                Stdio/ft_putstrtab_fd.c                                       \
                Stdio/ft_putnbr.c                                             \
                Stdio/ft_putnbr_fd.c                                          \
                Stdio/ft_putnbr_base.c                                        \
                Stdio/ft_putnbr_base_fd.c                                     \
                                                                              \
                Stdio/ft_open.c                                               \

# — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — —

STDLIB      =   Stdlib/ft_bubble_sort.c                                       \
                Stdlib/ft_insertion_sort.c                                    \
                Stdlib/ft_selection_sort.c                                    \
                Stdlib/ft_mergesort.c                                         \
                Stdlib/ft_quicksort.c                                         \
                                                                              \
                Stdlib/ft_bzero.c                                             \
                Stdlib/ft_bnull.c                                             \
                Stdlib/ft_memset.c                                            \
                Stdlib/ft_memset_addr.c                                       \
                Stdlib/ft_memcpy.c                                            \
                Stdlib/ft_memccpy.c                                           \
                Stdlib/ft_memdup.c                                            \
                Stdlib/ft_memswap.c                                           \
                Stdlib/ft_memmove.c                                           \
                Stdlib/ft_memchr.c                                            \
                Stdlib/ft_memcmp.c                                            \
                Stdlib/ft_memdel.c                                            \
                Stdlib/ft_memalloc.c                                          \
                Stdlib/ft_malloc.c                                            \
                Stdlib/ft_realloc.c                                           \
                Stdlib/ft_matrix_new.c                                        \
                                                                              \
                Stdlib/valid_base.c                                           \
                Stdlib/ft_padding.c                                           \
                Stdlib/ft_intlen.c                                            \
                Stdlib/ft_intlen_base.c                                       \
                Stdlib/ft_intmaxlen_base.c                                    \
                Stdlib/ft_uintmaxlen_base.c                                   \
                Stdlib/ft_atoi.c                                              \
                Stdlib/ft_itoa.c                                              \
                Stdlib/ft_atoi_base.c                                         \
                Stdlib/ft_itoa.c                                              \
                Stdlib/ft_itoa_base.c                                         \
                Stdlib/ft_ltoa_base.c                                         \
                Stdlib/ft_lltoa_base.c                                        \
                Stdlib/ft_utoa_base.c                                         \
                Stdlib/ft_uitoa_base.c                                        \
                Stdlib/ft_ultoa_base.c                                        \
                Stdlib/ft_ulltoa_base.c                                       \
                Stdlib/ft_ftoa.c                                              \
                Stdlib/ft_ftoa_base.c                                         \
                Stdlib/ft_dtoa_base.c                                         \
                Stdlib/ft_ldtoa_base.c                                        \
                Stdlib/ft_convert_base.c                                      \
                                                                              \
                Stdlib/ft_swap_int.c                                          \
                Stdlib/ft_swap_char.c                                         \
                Stdlib/ft_swap_str.c                                          \
                Stdlib/ft_swap_ptr.c                                          \
                                                                              \
                Stdlib/ft_find_next_prime.c                                   \
                Stdlib/ft_wcount.c                                            \
                Stdlib/ft_chrcount.c                                          \
                Stdlib/ft_reverse_bytes.c                                     \
                Stdlib/ft_hash.c                                              \
                                                                              \

# — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — —

STRING      =   String/ft_strlen.c                                            \
                String/ft_strnlen.c                                           \
                String/ft_strcmp.c                                            \
                String/ft_strncmp.c                                           \
                String/ft_strequ.c                                            \
                String/ft_strnequ.c                                           \
                String/ft_strrev.c                                            \
                String/ft_strcpy.c                                            \
                String/ft_strncpy.c                                           \
                String/ft_vstrcpy.c                                           \
                String/ft_vstrncpy.c                                          \
                String/ft_strlcpy.c                                           \
                String/ft_strcpy_until.c                                      \
                String/ft_astrcpy.c                                           \
                String/ft_astrncpy.c                                          \
                String/ft_strcat.c                                            \
                String/ft_strncat.c                                           \
                String/ft_strlcat.c                                           \
                String/ft_strchr.c                                            \
                String/ft_strrchr.c                                           \
                String/ft_strchrs.c                                           \
                String/ft_strstr.c                                            \
                String/ft_strnstr.c                                           \
                String/ft_strdup.c                                            \
                String/ft_strndup.c                                           \
                String/ft_strdup_range.c                                      \
                String/ft_strnew.c                                            \
                String/ft_strdel.c                                            \
                String/ft_strclr.c                                            \
                String/ft_striter.c                                           \
                String/ft_striteri.c                                          \
                String/ft_strmap.c                                            \
                String/ft_strmapi.c                                           \
                String/ft_strjoin.c                                           \
                String/ft_vstrjoin.c                                          \
                String/ft_strappend.c                                         \
                String/ft_strprepend.c                                        \
                String/ft_strnjoin.c                                          \
                String/ft_strnappend.c                                        \
                String/ft_strnprepend.c                                       \
                String/ft_strsub.c                                            \
                String/ft_strsplit.c                                          \
                String/ft_strtrim.c                                           \
                String/ft_strstrip.c                                          \
                String/ft_strlstrip.c                                         \
                String/ft_strnlstrip.c                                        \
                String/ft_strrstrip.c                                         \
                String/ft_strnrstrip.c                                        \
                String/ft_strhex.c                                            \
                                                                              \
                String/ft_strtab.c                                            \
                String/ft_strtabnew.c                                         \
                String/ft_strtablen.c                                         \
                String/ft_strtabnlen.c                                        \
                String/ft_strtabdup.c                                         \
                String/ft_strtabndup.c                                        \
                String/ft_strtabcat.c                                         \
                String/ft_strtabncat.c                                        \
                String/ft_strtab_appendstr.c                                  \

# — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — —

UNISTD      =   Unistd/ft_getdirentries.c                                     \
                Unistd/ft_getdirents.c                                        \
                Unistd/ft_basename.c                                          \

# — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — —

CTYPE       =   Ctype/ft_isupper.c                                            \
                Ctype/ft_islower.c                                            \
                Ctype/ft_isblank.c                                            \
                Ctype/ft_isspace.c                                            \
                Ctype/ft_isalpha.c                                            \
                Ctype/ft_isdigit.c                                            \
                Ctype/ft_isalnum.c                                            \
                Ctype/ft_isascii.c                                            \
                Ctype/ft_isgraph.c                                            \
                Ctype/ft_ispunct.c                                            \
                Ctype/ft_iscntrl.c                                            \
                Ctype/ft_isprint.c                                            \
                Ctype/ft_isprime.c                                            \
                Ctype/ft_ischarset.c                                          \
                Ctype/ft_int_isany.c                                          \
                Ctype/ft_str_isany.c                                          \
                Ctype/ft_isstrset.c                                           \
                Ctype/ft_isstrsets.c                                          \
                                                                              \
                Ctype/ft_toupper.c                                            \
                Ctype/ft_tolower.c                                            \
                Ctype/ft_strtoupper.c                                         \
                Ctype/ft_strtolower.c                                         \
                Ctype/ft_to_big_endian.c                                      \
                Ctype/ft_to_little_endian.c                                   \
                                                                              \
                Ctype/ft_cmpstr.c                                             \

# — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — —

MATH        =   Math/ft_sqrt.c                                                \
                Math/ft_pow.c                                                 \
                Math/ft_powl.c                                                \
                Math/ft_powll.c                                               \
                Math/ft_max.c                                                 \
                Math/ft_max_d.c                                               \
                Math/ft_max_l.c                                               \
                Math/ft_min.c                                                 \
                Math/ft_min_d.c                                               \
                Math/ft_min_l.c                                               \
                Math/ft_sum.c                                                 \
                Math/ft_sum_d.c                                               \
                Math/ft_sum_l.c                                               \
                Math/ft_sum_ld.c                                              \
                Math/ft_sum_generic.c                                         \
                Math/ft_round.c                                               \
                Math/ft_round_with_prior.c                                    \

# — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — —

BIGINT      =   BigInt/bigint_add.c                                           \
                BigInt/bigint_sub.c                                           \
                BigInt/bigint_mul.c                                           \
                BigInt/bigint_div.c                                           \
                                                                              \
                BigInt/bigint_round.c                                         \
                BigInt/bigint_max.c                                           \
                BigInt/bigint_min.c                                           \
                BigInt/bigint_compare.c                                       \
                                                                              \
                BigInt/bigint_cleaner.c                                       \
                BigInt/bigint_normalizer.c                                    \
                                                                              \
                BigInt/arithmetic_dispatcher.c                                \

# — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — —

VECTOR      =   Vector/vector_constructor.c                                   \
                Vector/vector_destructor.c                                    \
                                                                              \
                Vector/vector_init.c                                          \
                Vector/vector_empty.c                                         \
                Vector/vector_instance.c                                      \
                Vector/vector_map.c                                           \
                Vector/vector_from.c                                          \
                Vector/vector_filter.c                                        \
                                                                              \
                Vector/vector_copy.c                                          \
                Vector/vector_reverse.c                                       \
                Vector/vector_resize.c                                        \
                Vector/vector_rightshift.c                                    \
                Vector/vector_leftshift.c                                     \
                                                                              \
                Vector/vector_push.c                                          \
                Vector/vector_enque.c                                         \
                Vector/vector_append.c                                        \
                Vector/vector_appendleft.c                                    \
                Vector/vector_insert.c                                        \
                Vector/vector_extend.c                                        \
                Vector/vector_extendleft.c                                    \
                Vector/vector_find.c                                          \
                Vector/vector_search.c                                        \
                Vector/vector_get.c                                           \
                Vector/vector_getby_ref.c                                     \
                Vector/vector_iter.c                                          \
                Vector/vector_viter.c                                         \
                Vector/vector_pop.c                                           \
                Vector/vector_popleft.c                                       \
                Vector/vector_deque.c                                         \
                Vector/vector_clear.c                                         \
                Vector/vector_remove.c                                        \
                Vector/vector_free.c                                          \
                Vector/vector_count.c                                         \
                Vector/vector_isfull.c                                        \
                Vector/vector_isempty.c                                       \
                Vector/vector_isvoid.c                                        \

# — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — —

UVECTOR      =  UVector/uvector_constructor.c                                 \
                UVector/uvector_destructor.c                                  \
                                                                              \
                UVector/uvector_resize.c                                      \
                UVector/uvector_copy.c                                        \
                UVector/uvector_reverse.c                                     \
                UVector/uvector_leftshift.c                                   \
                UVector/uvector_rightshift.c                                  \
                                                                              \
                UVector/uvector_push.c                                        \
                UVector/uvector_enque.c                                       \
                UVector/uvector_append.c                                      \
                UVector/uvector_appendleft.c                                  \
                UVector/uvector_extend.c                                      \
                UVector/uvector_extendleft.c                                  \
                UVector/uvector_insert.c                                      \
                UVector/uvector_get.c                                         \
                UVector/uvector_pop.c                                         \
                UVector/uvector_popleft.c                                     \
                UVector/uvector_deque.c                                       \
                UVector/uvector_setall.c                                      \
                UVector/uvector_isempty.c                                     \
                UVector/uvector_isfull.c                                      \

# — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — —

LIST        =   Lists-Stacks-Queues/list_newelem.c                            \
                Lists-Stacks-Queues/list_prepend.c                            \
                Lists-Stacks-Queues/list_append.c                             \
                Lists-Stacks-Queues/list_append_tail.c                        \
                Lists-Stacks-Queues/list_append_both.c                        \
                Lists-Stacks-Queues/list_extend.c                             \
                Lists-Stacks-Queues/list_extend_tail.c                        \
                Lists-Stacks-Queues/list_extendleft.c                         \
                Lists-Stacks-Queues/list_insert.c                             \
                Lists-Stacks-Queues/list_insert_at.c                          \
                Lists-Stacks-Queues/list_item_at.c                            \
                Lists-Stacks-Queues/list_last_item.c                          \
                Lists-Stacks-Queues/list_elem_at.c                            \
                Lists-Stacks-Queues/list_last_elem.c                          \
                Lists-Stacks-Queues/list_getitem.c                            \
                Lists-Stacks-Queues/list_getelem.c                            \
                Lists-Stacks-Queues/list_pop.c                                \
                Lists-Stacks-Queues/list_pop_tail.c                           \
                Lists-Stacks-Queues/list_popleft.c                            \
                Lists-Stacks-Queues/list_pop_item_at.c                        \
                Lists-Stacks-Queues/list_pop_item.c                           \
                Lists-Stacks-Queues/list_remove_item.c                        \
                Lists-Stacks-Queues/list_remove_item_at.c                     \
                Lists-Stacks-Queues/list_remove_elem.c                        \
                Lists-Stacks-Queues/list_remove_elem_at.c                     \
                Lists-Stacks-Queues/list_clear.c                              \
                Lists-Stacks-Queues/list_iter.c                               \
                Lists-Stacks-Queues/list_iteri.c                              \
                Lists-Stacks-Queues/list_count.c                              \
                Lists-Stacks-Queues/list_sort.c                               \
                Lists-Stacks-Queues/list_reverse.c                            \
                Lists-Stacks-Queues/list_map.c                                \
                Lists-Stacks-Queues/list_merge.c                              \

# — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — —

BTREE       =   Binary-Trees/btree_newnode.c                                  \
                Binary-Trees/btree_apply_prefix.c                             \
                Binary-Trees/btree_apply_infix.c                              \
                Binary-Trees/btree_apply_suffix.c                             \
                Binary-Trees/btree_insert.c                                   \
                Binary-Trees/btree_getitem.c                                  \
                Binary-Trees/btree_level_count.c                              \

# — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — —

TRIE        =   Tries/trie_newnode.c                                          \
                Tries/trie_insert.c                                           \
                Tries/trie_remove.c                                           \
                Tries/trie_clear.c                                            \
                Tries/trie_getitem.c                                          \
                Tries/trie_count.c                                            \

# — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — —

HASHTABLE   =   Hashtables/hashtab_init.c                                     \
                Hashtables/hashtab_new.c                                      \
                Hashtables/hashtab_insert.c                                   \
                Hashtables/hashtab_getentry.c                                 \
                Hashtables/hashtab_getitem.c                                  \
                Hashtables/hashtab_remove.c                                   \
                Hashtables/hashtab_popitem.c                                  \
                Hashtables/hashtab_clear.c                                    \
                Hashtables/hashtab_destroy.c                                  \
                Hashtables/hashtab_grow.c                                     \
                Hashtables/hashtab_shrink.c                                   \
                Hashtables/hashtab_count.c                                    \

# — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — —

DICT        =   Dicts/dict_new.c                                              \
                Dicts/dict_insert.c                                           \
                Dicts/dict_extend.c                                           \
                Dicts/dict_getindex.c                                         \
                Dicts/dict_getitem.c                                          \
                Dicts/dict_getentry.c                                         \
                Dicts/dict_getitem_fast.c                                     \
                Dicts/dict_getentry_fast.c                                    \
                Dicts/dict_remove.c                                           \
                Dicts/dict_clear.c                                            \

# — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — —

CRYPT       =                                                                 \
                                                                              \
                Crypt/MD5/ft_md5.c                                            \
                Crypt/MD5/md5_process.c                                       \
                Crypt/MD5/md5_utils.c                                         \
                                                                              \
                Crypt/SHA2-224/ft_sha224.c                                    \
                Crypt/SHA2-224/sha224_process.c                               \
                Crypt/SHA2-224/sha224_utils.c                                 \
                                                                              \
                Crypt/SHA2-256/ft_sha256.c                                    \
                Crypt/SHA2-256/sha256_process.c                               \
                Crypt/SHA2-256/sha256_utils.c                                 \
                                                                              \
                Crypt/SHA2-384/ft_sha384.c                                    \
                Crypt/SHA2-384/sha384_process.c                               \
                Crypt/SHA2-384/sha384_utils.c                                 \
                                                                              \
                Crypt/SHA2-512/ft_sha512.c                                    \
                Crypt/SHA2-512/sha512_process.c                               \
                Crypt/SHA2-512/sha512_utils.c                                 \

# Main — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — —

all: $(NAME)

$(NAME): $(OBJECTS)
	@ar -rcs $(NAME) $(OBJECTS)
	@echo && echo $(GREEN) "[√]     [Library Successfully Compiled!]"
	@echo $(WHITE)

%.o: %.c $(HEADERS)
	@$(CC) $(CFLAGS) -pipe -c $< -o $@
	@echo "Compiling => " $<

# House Keeping — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — —

DEL = /bin/rm -rf

clean:
	@$(DEL) $(shell find . -name '*.o')

fclean: clean
	@$(DEL) $(NAME)

re: fclean all

# Text Colorization — — — — — — — — — — — — — — — — — — — — — — — — — — — — — —

GREEN = "\033[1;32m"
WHITE = "\033[1;37m"

# Norminette Check — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — —

nc:
	@echo && echo $(GREEN) "Checking Norme -- Source Files:" && echo $(WHITE);
	@norminette $(shell find . -name '*.c')

nh:
	@echo && echo $(GREEN) "Checking Norme -- Header Files:" && echo $(WHITE);
	@norminette $(shell find . -name '*.h')

na: nh nc

# — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — —

.PHONY: all clean fclean re nc nh na

# — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — —
