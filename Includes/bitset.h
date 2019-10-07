/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bitset.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 11:31:10 by akharrou          #+#    #+#             */
/*   Updated: 2019/10/07 12:45:35 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITSET_H
# define BITSET_H

/*
** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **
**  Header(s).
*/

# include <stdint.h>

/*
** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **
**  Macro(s).
*/

# define ON  (1)
# define OFF (0)

/*
** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **
*/

/*
**  Bitset of N bits, where where N = sizeof(uintmax_t) * 8;
**  whose bits are addressable by name.
*/

typedef union	u_bitset
{
	uintmax_t	set;
	struct {

		char	a : 1;
		char	b : 1;
		char	c : 1;
		char	d : 1;
		char	e : 1;
		char	f : 1;
		char	g : 1;
		char	h : 1;
		char	i : 1;
		char	j : 1;
		char	k : 1;
		char	l : 1;
		char	m : 1;
		char	n : 1;
		char	o : 1;
		char	p : 1;
		char	q : 1;
		char	r : 1;
		char	s : 1;
		char	t : 1;
		char	u : 1;
		char	v : 1;
		char	w : 1;
		char	x : 1;
		char	y : 1;
		char	z : 1;

		char	aa : 1;
		char	bb : 1;
		char	cc : 1;
		char	dd : 1;
		char	ee : 1;
		char	ff : 1;
		char	gg : 1;
		char	hh : 1;
		char	ii : 1;
		char	jj : 1;
		char	kk : 1;
		char	ll : 1;
		char	mm : 1;
		char	nn : 1;
		char	oo : 1;
		char	pp : 1;
		char	qq : 1;
		char	rr : 1;
		char	ss : 1;
		char	tt : 1;
		char	uu : 1;
		char	vv : 1;
		char	ww : 1;
		char	xx : 1;
		char	yy : 1;
		char	zz : 1;

		char	i1 : 1;
		char	i2 : 1;
		char	i3 : 1;
		char	i4 : 1;
		char	i5 : 1;
		char	i6 : 1;
		char	i7 : 1;
		char	i8 : 1;
		char	i9 : 1;

		char	reserved1 : 1;
		char	reserved2 : 1;
		char	reserved3 : 1;
	}			name;

}				t_bitset;

/*
**  Values identifying each bit, in a set of N bits,
**  where N = sizeof(uintmax_t) * 8.
**
**  Intended use for flags.
*/

enum			e_bitset_id
{
	a_FLAG = (1L << 0), b_FLAG = (1L << 1), c_FLAG = (1L << 2),
	d_FLAG = (1L << 3), e_FLAG = (1L << 4), f_FLAG = (1L << 5),
	g_FLAG = (1L << 6), h_FLAG = (1L << 7), i_FLAG = (1L << 8),
	j_FLAG = (1L << 9), k_FLAG = (1L << 10), l_FLAG = (1L << 11),
	m_FLAG = (1L << 12), n_FLAG = (1L << 13), o_FLAG = (1L << 14),
	p_FLAG = (1L << 15), q_FLAG = (1L << 16), r_FLAG = (1L << 17),
	s_FLAG = (1L << 18), t_FLAG = (1L << 19), u_FLAG = (1L << 20),
	v_FLAG = (1L << 21), w_FLAG = (1L << 22), x_FLAG = (1L << 23),
	y_FLAG = (1L << 24), z_FLAG = (1L << 25),

	A_FLAG = (1L << 26), B_FLAG = (1L << 27), C_FLAG = (1L << 28),
	D_FLAG = (1L << 29), E_FLAG = (1L << 30), F_FLAG = (1L << 31),
	G_FLAG = (1L << 32), H_FLAG = (1L << 33), I_FLAG = (1L << 34),
	J_FLAG = (1L << 35), K_FLAG = (1L << 36), L_FLAG = (1L << 37),
	M_FLAG = (1L << 38), N_FLAG = (1L << 39), O_FLAG = (1L << 40),
	P_FLAG = (1L << 41), Q_FLAG = (1L << 42), R_FLAG = (1L << 43),
	S_FLAG = (1L << 44), T_FLAG = (1L << 45), U_FLAG = (1L << 46),
	V_FLAG = (1L << 47), W_FLAG = (1L << 48), X_FLAG = (1L << 49),
	Y_FLAG = (1L << 50), Z_FLAG = (1L << 51),

	i1_FLAG = (1L << 52), i2_FLAG = (1L << 53), i3_FLAG = (1L << 54),
	i4_FLAG = (1L << 55), i5_FLAG = (1L << 56), i6_FLAG = (1L << 57),
	i7_FLAG = (1L << 58), i8_FLAG = (1L << 59), i9_FLAG = (1L << 60),

	reserved1_FLAG = (1L << 61),
	reserved2_FLAG = (1L << 62),
	reserved3_FLAG = (1L << 62)
};

/*
** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **
*/

#endif

/*
**  UN-NORMED VERSION.
**
** #ifndef BITSET_H
** # define BITSET_H
**
** *
** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **
** **  Header(s).
** *
**
** # include <stdint.h>
**
** *
** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **
** **  Macro(s).
** *
**
** # define ON  (1)
** # define OFF (0)
**
** *
** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **
** *
**
** *
** **  Bitset of N bits, where where N = sizeof(uintmax_t) * 8;
** **  whose bits are addressable by name.
** *
**
** typedef union bitset_u {
**
** 	uintmax_t set;
** 	struct
** 	{
** 		char a : 1;  char b : 1;  char c : 1;  char d : 1;  char e : 1;
** 		char f : 1;  char g : 1;  char h : 1;  char i : 1;  char j : 1;
** 		char k : 1;  char l : 1;  char m : 1;  char n : 1;  char o : 1;
** 		char p : 1;  char q : 1;  char r : 1;  char s : 1;  char t : 1;
** 		char u : 1;  char v : 1;  char w : 1;  char x : 1;  char y : 1;
** 		char z : 1;
**
** 		char A : 1;  char B : 1;  char C : 1;  char D : 1;  char E : 1;
** 		char F : 1;  char G : 1;  char H : 1;  char I : 1;  char J : 1;
** 		char K : 1;  char L : 1;  char M : 1;  char N : 1;  char O : 1;
** 		char P : 1;  char Q : 1;  char R : 1;  char S : 1;  char T : 1;
** 		char U : 1;  char V : 1;  char W : 1;  char X : 1;  char Y : 1;
** 		char Z : 1;
**
** 		char i1 : 1; char i2 : 1; char i3 : 1;
** 		char i4 : 1; char i5 : 1; char i6 : 1;
** 		char i7 : 1; char i8 : 1; char i9 : 1;
**
** 		char reserved1 : 1;
** 		char reserved2 : 1;
** 		char reserved3 : 1;
** 	};
**
** } bitset_t;
**
** *
** **  Values identifying each bit, in a set of N bits,
** **  where N = sizeof(uintmax_t) * 8.
** **
** **  Intended use for flags.
** *
**
** enum bitset_id_e {
**
** 	a_FLAG = (1L << 0),   b_FLAG = (1L << 1),   c_FLAG = (1L << 2),
** 	d_FLAG = (1L << 3),   e_FLAG = (1L << 4),   f_FLAG = (1L << 5),
** 	g_FLAG = (1L << 6),   h_FLAG = (1L << 7),   i_FLAG = (1L << 8),
** 	j_FLAG = (1L << 9),   k_FLAG = (1L << 10),  l_FLAG = (1L << 11),
** 	m_FLAG = (1L << 12),  n_FLAG = (1L << 13),  o_FLAG = (1L << 14),
** 	p_FLAG = (1L << 15),  q_FLAG = (1L << 16),  r_FLAG = (1L << 17),
** 	s_FLAG = (1L << 18),  t_FLAG = (1L << 19),  u_FLAG = (1L << 20),
** 	v_FLAG = (1L << 21),  w_FLAG = (1L << 22),  x_FLAG = (1L << 23),
** 	y_FLAG = (1L << 24),  z_FLAG = (1L << 25),
**
** 	A_FLAG = (1L << 26),  B_FLAG = (1L << 27),  C_FLAG = (1L << 28),
** 	D_FLAG = (1L << 29),  E_FLAG = (1L << 30),  F_FLAG = (1L << 31),
** 	G_FLAG = (1L << 32),  H_FLAG = (1L << 33),  I_FLAG = (1L << 34),
** 	J_FLAG = (1L << 35),  K_FLAG = (1L << 36),  L_FLAG = (1L << 37),
** 	M_FLAG = (1L << 38),  N_FLAG = (1L << 39),  O_FLAG = (1L << 40),
** 	P_FLAG = (1L << 41),  Q_FLAG = (1L << 42),  R_FLAG = (1L << 43),
** 	S_FLAG = (1L << 44),  T_FLAG = (1L << 45),  U_FLAG = (1L << 46),
** 	V_FLAG = (1L << 47),  W_FLAG = (1L << 48),  X_FLAG = (1L << 49),
** 	Y_FLAG = (1L << 50),  Z_FLAG = (1L << 51),
**
** 	i1_FLAG = (1L << 52), i2_FLAG = (1L << 53), i3_FLAG = (1L << 54),
** 	i4_FLAG = (1L << 55), i5_FLAG = (1L << 56), i6_FLAG = (1L << 57),
** 	i7_FLAG = (1L << 58), i8_FLAG = (1L << 59), i9_FLAG = (1L << 60),
**
** 	reserved1_FLAG = (1L << 61),
** 	reserved2_FLAG = (1L << 62),
** 	reserved3_FLAG = (1L << 62)
** };
**
** *
** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **
** *
**
** #endif
*/
