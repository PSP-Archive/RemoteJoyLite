# -*- mode: perl -*-
#################################################################################
# 																				#
#################################################################################
	.set noreorder
	.set noat

#################################################################################
# psplinkSetK1																	#
#################################################################################
	.global	psplinkSetK1
	.ent	psplinkSetK1
psplinkSetK1:
	move	$v0, $k1
	jr		$ra
	move	$k1, $a0
	.end	psplinkSetK1

#################################################################################
# Copy32bpp																		#
#################################################################################
	.global	Copy32bpp
	.ent	Copy32bpp
Copy32bpp:
	sll		$a2, $a2, 2				# $a2 = $a2*4
	addu	$a0, $a0, $a2			# $a0 = $a0 + $a2
	cache	0x1e, 0($a0)			# fill cache line
	sll		$a3, $a3, 2				# $a3 = $a3*4
	sll		$t8, $t8, 2				# $t8 = $t8*4
	sll		$t9, $t9, 2				# $t9 = $t9*4
	addu	$a3, $a3, $a0			# $a3 = $a3 + $a0
	subu	$a3, $a3, $t8			# $a3 = $a3 - $t8
	move	$at, $a1				# $at = $a1
1:	addu	$a2, $a0, $t9			# $a2 = $a0 + $t9
2:	lv.q	C000,  0($a0)			# C000 =  0($a0)
	lv.q	C010, 16($a0)			# C010 = 16($a0)
	lv.q	C020, 32($a0)			# C020 = 32($a0)
	lv.q	C030, 48($a0)			# C030 = 48($a0)
	cache	0x1e, 64($a0)			# fill cache line
	sv.q	C000,  0($a1), wb		#  0($a1) = C000
	sv.q	C010, 16($a1), wb		# 16($a1) = C010
	sv.q	C020, 32($a1), wb		# 32($a1) = C020
	sv.q	C030, 48($a1), wb		# 48($a1) = C030
	addiu	$a0, $a0, 64			# $a0 = $a0 + 64
	addiu	$a1, $a1, 64			# $a1 = $a1 + 64
	bne		$a0, $a2, 2b			# if ( $a0 != $a2 ){ goto 2 }
	vnop							# VFPU BUG Patch
	bne		$a0, $a3, 1b			# if ( $a0 != $a3 ){ goto 1 }
	addu	$a0, $a0, $t8			# $a0 = $a0 + $t8
	jr		$ra						# return
	subu	$v0, $a1, $at			# $v0 = $a1 - $at
	.end	Copy32bpp

#################################################################################
# Copy16bpp																		#
#################################################################################
	.global	Copy16bpp
	.ent	Copy16bpp
Copy16bpp:
	sll		$a2, $a2, 1				# $a2 = $a2*2
	addu	$a0, $a0, $a2			# $a0 = $a0 + $a2
	cache	0x1e, 0($a0)			# fill cache line
	sll		$a3, $a3, 1				# $a3 = $a3*2
	sll		$t8, $t8, 1				# $t8 = $t8*2
	sll		$t9, $t9, 1				# $t9 = $t9*2
	addu	$a3, $a3, $a0			# $a3 = $a3 + $a0
	subu	$a3, $a3, $t8			# $a3 = $a3 - $t8
	move	$at, $a1				# $at = $a1
1:	addu	$a2, $a0, $t9			# $a2 = $a0 + $t9
2:	lv.q	C000,  0($a0)			# C000 =  0($a0)
	lv.q	C010, 16($a0)			# C010 = 16($a0)
	lv.q	C020, 32($a0)			# C020 = 32($a0)
	lv.q	C030, 48($a0)			# C030 = 48($a0)
	cache	0x1e, 64($a0)			# fill cache line
	sv.q	C000,  0($a1), wb		#  0($a1) = C000
	sv.q	C010, 16($a1), wb		# 16($a1) = C010
	sv.q	C020, 32($a1), wb		# 32($a1) = C020
	sv.q	C030, 48($a1), wb		# 48($a1) = C030
	addiu	$a0, $a0, 64			# $a0 = $a0 + 64
	addiu	$a1, $a1, 64			# $a1 = $a1 + 64
	bne		$a0, $a2, 2b			# if ( $a0 != $a2 ){ goto 2 }
	vnop							# VFPU BUG Patch
	bne		$a0, $a3, 1b			# if ( $a0 != $a3 ){ goto 1 }
	addu	$a0, $a0, $t8			# $a0 = $a0 + $t8
	jr		$ra						# return
	subu	$v0, $a1, $at			# $v0 = $a1 - $at
	.end	Copy16bpp

#################################################################################
# Cmp888565																		#
#################################################################################
	.global	Cmp888565
	.ent	Cmp888565
Cmp888565:
	sll		$a2, $a2, 2				# $a2 = $a2*4
	addu	$a0, $a0, $a2			# $a0 = $a0 + $a2
	cache	0x1e, 0($a0)			# fill cache line
	sll		$a3, $a3, 2				# $a3 = $a3*4
	sll		$t8, $t8, 2				# $t8 = $t8*4
	sll		$t9, $t9, 2				# $t9 = $t9*4
	addu	$a3, $a3, $a0			# $a3 = $a3 + $a0
	subu	$a3, $a3, $t8			# $a3 = $a3 - $t8
	move	$at, $a1				# $at = $a1
1:	addu	$a2, $a0, $t9			# $a2 = $a0 + $t9
2:	lv.q	C000,  0($a0)			# C000 =  0($a0)
	lv.q	C010, 16($a0)			# C010 = 16($a0)
	lv.q	C020, 32($a0)			# C020 = 32($a0)
	lv.q	C030, 48($a0)			# C030 = 48($a0)
	cache	0x1e, 64($a0)			# fill cache line
	vt5650.q C100, C000
	vt5650.q C102, C010
	vt5650.q C110, C020
	vt5650.q C112, C030
	sv.q	C100,  0($a1), wb		#  0($a1) = C000
	sv.q	C110, 16($a1), wb		# 16($a1) = C010
	addiu	$a0, $a0, 64			# $a0 = $a0 + 64
	addiu	$a1, $a1, 32			# $a1 = $a1 + 32
	bne		$a0, $a2, 2b			# if ( $a0 != $a2 ){ goto 2 }
	vnop							# VFPU BUG Patch
	bne		$a0, $a3, 1b			# if ( $a0 != $a3 ){ goto 1 }
	addu	$a0, $a0, $t8			# $a0 = $a0 + $t8
	jr		$ra						# return
	subu	$v0, $a1, $at			# $v0 = $a1 - $at
	.end	Cmp888565
