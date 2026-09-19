	.file	"topic1.cpp"
	.text
#APP
	.globl _ZSt21ios_base_library_initv
	.section	.rodata
.LC0:
	.string	"Drawing a generic shape"
#NO_APP
	.section	.text._ZN5Shape4drawEv,"axG",@progbits,_ZN5Shape4drawEv,comdat
	.align 2
	.weak	_ZN5Shape4drawEv
	.type	_ZN5Shape4drawEv, @function
_ZN5Shape4drawEv:
.LFB1976:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	leaq	.LC0(%rip), %rdx
	leaq	_ZSt4cout(%rip), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT
	movq	_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@GOTPCREL(%rip), %rdx
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZNSolsEPFRSoS_E@PLT
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1976:
	.size	_ZN5Shape4drawEv, .-_ZN5Shape4drawEv
	.section	.rodata
.LC1:
	.string	"Drawing a : Circle"
	.section	.text._ZN6Circle4drawEv,"axG",@progbits,_ZN6Circle4drawEv,comdat
	.align 2
	.weak	_ZN6Circle4drawEv
	.type	_ZN6Circle4drawEv, @function
_ZN6Circle4drawEv:
.LFB1977:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	leaq	.LC1(%rip), %rdx
	leaq	_ZSt4cout(%rip), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT
	movq	_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@GOTPCREL(%rip), %rdx
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZNSolsEPFRSoS_E@PLT
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1977:
	.size	_ZN6Circle4drawEv, .-_ZN6Circle4drawEv
	.section	.rodata
.LC2:
	.string	"Drawing a : Square"
	.section	.text._ZN6Square4drawEv,"axG",@progbits,_ZN6Square4drawEv,comdat
	.align 2
	.weak	_ZN6Square4drawEv
	.type	_ZN6Square4drawEv, @function
_ZN6Square4drawEv:
.LFB1978:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	leaq	.LC2(%rip), %rdx
	leaq	_ZSt4cout(%rip), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT
	movq	_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@GOTPCREL(%rip), %rdx
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZNSolsEPFRSoS_E@PLT
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1978:
	.size	_ZN6Square4drawEv, .-_ZN6Square4drawEv
	.section	.text._ZN5ShapeC2Ev,"axG",@progbits,_ZN5ShapeC5Ev,comdat
	.align 2
	.weak	_ZN5ShapeC2Ev
	.type	_ZN5ShapeC2Ev, @function
_ZN5ShapeC2Ev:
.LFB1982:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	leaq	16+_ZTV5Shape(%rip), %rdx
	movq	-8(%rbp), %rax
	movq	%rdx, (%rax)
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1982:
	.size	_ZN5ShapeC2Ev, .-_ZN5ShapeC2Ev
	.weak	_ZN5ShapeC1Ev
	.set	_ZN5ShapeC1Ev,_ZN5ShapeC2Ev
	.section	.text._ZN5ShapeD2Ev,"axG",@progbits,_ZN5ShapeD5Ev,comdat
	.align 2
	.weak	_ZN5ShapeD2Ev
	.type	_ZN5ShapeD2Ev, @function
_ZN5ShapeD2Ev:
.LFB1985:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	leaq	16+_ZTV5Shape(%rip), %rdx
	movq	-8(%rbp), %rax
	movq	%rdx, (%rax)
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1985:
	.size	_ZN5ShapeD2Ev, .-_ZN5ShapeD2Ev
	.weak	_ZN5ShapeD1Ev
	.set	_ZN5ShapeD1Ev,_ZN5ShapeD2Ev
	.section	.text._ZN5ShapeD0Ev,"axG",@progbits,_ZN5ShapeD5Ev,comdat
	.align 2
	.weak	_ZN5ShapeD0Ev
	.type	_ZN5ShapeD0Ev, @function
_ZN5ShapeD0Ev:
.LFB1987:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN5ShapeD1Ev
	movq	-8(%rbp), %rax
	movl	$8, %esi
	movq	%rax, %rdi
	call	_ZdlPvm@PLT
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1987:
	.size	_ZN5ShapeD0Ev, .-_ZN5ShapeD0Ev
	.section	.text._ZN6CircleC2Ev,"axG",@progbits,_ZN6CircleC5Ev,comdat
	.align 2
	.weak	_ZN6CircleC2Ev
	.type	_ZN6CircleC2Ev, @function
_ZN6CircleC2Ev:
.LFB1988:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN5ShapeC2Ev
	leaq	16+_ZTV6Circle(%rip), %rdx
	movq	-8(%rbp), %rax
	movq	%rdx, (%rax)
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1988:
	.size	_ZN6CircleC2Ev, .-_ZN6CircleC2Ev
	.weak	_ZN6CircleC1Ev
	.set	_ZN6CircleC1Ev,_ZN6CircleC2Ev
	.section	.text._ZN6SquareC2Ev,"axG",@progbits,_ZN6SquareC5Ev,comdat
	.align 2
	.weak	_ZN6SquareC2Ev
	.type	_ZN6SquareC2Ev, @function
_ZN6SquareC2Ev:
.LFB1991:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN5ShapeC2Ev
	leaq	16+_ZTV6Square(%rip), %rdx
	movq	-8(%rbp), %rax
	movq	%rdx, (%rax)
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1991:
	.size	_ZN6SquareC2Ev, .-_ZN6SquareC2Ev
	.weak	_ZN6SquareC1Ev
	.set	_ZN6SquareC1Ev,_ZN6SquareC2Ev
	.text
	.globl	main
	.type	main, @function
main:
.LFB1979:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%rbx
	subq	$40, %rsp
	.cfi_offset 3, -24
	movl	$8, %edi
	call	_Znwm@PLT
	movq	%rax, %rbx
	movq	$0, (%rbx)
	movq	%rbx, %rdi
	call	_ZN6CircleC1Ev
	movl	$0, %eax
	movq	%rbx, -48(%rbp)
	testb	%al, %al
	je	.L17
	movl	$8, %esi
	movq	%rbx, %rdi
	call	_ZdlPvm@PLT
.L17:
	nop
	movl	$8, %edi
	call	_Znwm@PLT
	movq	%rax, %rbx
	movq	$0, (%rbx)
	movq	%rbx, %rdi
	call	_ZN6SquareC1Ev
	movl	$0, %eax
	movq	%rbx, -40(%rbp)
	testb	%al, %al
	je	.L18
	movl	$8, %esi
	movq	%rbx, %rdi
	call	_ZdlPvm@PLT
.L18:
	nop
	movl	$0, -20(%rbp)
	jmp	.L12
.L13:
	movl	-20(%rbp), %eax
	cltq
	movq	-48(%rbp,%rax,8), %rax
	movq	(%rax), %rax
	addq	$16, %rax
	movq	(%rax), %rdx
	movl	-20(%rbp), %eax
	cltq
	movq	-48(%rbp,%rax,8), %rax
	movq	%rax, %rdi
	call	*%rdx
	addl	$1, -20(%rbp)
.L12:
	cmpl	$1, -20(%rbp)
	jle	.L13
	movq	-48(%rbp), %rax
	testq	%rax, %rax
	je	.L14
	movq	(%rax), %rdx
	addq	$8, %rdx
	movq	(%rdx), %rdx
	movq	%rax, %rdi
	call	*%rdx
.L14:
	movq	-40(%rbp), %rax
	testq	%rax, %rax
	je	.L15
	movq	(%rax), %rdx
	addq	$8, %rdx
	movq	(%rdx), %rdx
	movq	%rax, %rdi
	call	*%rdx
.L15:
	movl	$0, %eax
	movq	-8(%rbp), %rbx
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1979:
	.size	main, .-main
	.weak	_ZTV6Square
	.section	.data.rel.ro.local._ZTV6Square,"awG",@progbits,_ZTV6Square,comdat
	.align 8
	.type	_ZTV6Square, @object
	.size	_ZTV6Square, 40
_ZTV6Square:
	.quad	0
	.quad	_ZTI6Square
	.quad	_ZN6SquareD1Ev
	.quad	_ZN6SquareD0Ev
	.quad	_ZN6Square4drawEv
	.section	.text._ZN6SquareD2Ev,"axG",@progbits,_ZN6SquareD5Ev,comdat
	.align 2
	.weak	_ZN6SquareD2Ev
	.type	_ZN6SquareD2Ev, @function
_ZN6SquareD2Ev:
.LFB2567:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	leaq	16+_ZTV6Square(%rip), %rdx
	movq	-8(%rbp), %rax
	movq	%rdx, (%rax)
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN5ShapeD2Ev
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2567:
	.size	_ZN6SquareD2Ev, .-_ZN6SquareD2Ev
	.weak	_ZN6SquareD1Ev
	.set	_ZN6SquareD1Ev,_ZN6SquareD2Ev
	.section	.text._ZN6SquareD0Ev,"axG",@progbits,_ZN6SquareD5Ev,comdat
	.align 2
	.weak	_ZN6SquareD0Ev
	.type	_ZN6SquareD0Ev, @function
_ZN6SquareD0Ev:
.LFB2569:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN6SquareD1Ev
	movq	-8(%rbp), %rax
	movl	$8, %esi
	movq	%rax, %rdi
	call	_ZdlPvm@PLT
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2569:
	.size	_ZN6SquareD0Ev, .-_ZN6SquareD0Ev
	.weak	_ZTV6Circle
	.section	.data.rel.ro.local._ZTV6Circle,"awG",@progbits,_ZTV6Circle,comdat
	.align 8
	.type	_ZTV6Circle, @object
	.size	_ZTV6Circle, 40
_ZTV6Circle:
	.quad	0
	.quad	_ZTI6Circle
	.quad	_ZN6CircleD1Ev
	.quad	_ZN6CircleD0Ev
	.quad	_ZN6Circle4drawEv
	.section	.text._ZN6CircleD2Ev,"axG",@progbits,_ZN6CircleD5Ev,comdat
	.align 2
	.weak	_ZN6CircleD2Ev
	.type	_ZN6CircleD2Ev, @function
_ZN6CircleD2Ev:
.LFB2571:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	leaq	16+_ZTV6Circle(%rip), %rdx
	movq	-8(%rbp), %rax
	movq	%rdx, (%rax)
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN5ShapeD2Ev
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2571:
	.size	_ZN6CircleD2Ev, .-_ZN6CircleD2Ev
	.weak	_ZN6CircleD1Ev
	.set	_ZN6CircleD1Ev,_ZN6CircleD2Ev
	.section	.text._ZN6CircleD0Ev,"axG",@progbits,_ZN6CircleD5Ev,comdat
	.align 2
	.weak	_ZN6CircleD0Ev
	.type	_ZN6CircleD0Ev, @function
_ZN6CircleD0Ev:
.LFB2573:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN6CircleD1Ev
	movq	-8(%rbp), %rax
	movl	$8, %esi
	movq	%rax, %rdi
	call	_ZdlPvm@PLT
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2573:
	.size	_ZN6CircleD0Ev, .-_ZN6CircleD0Ev
	.weak	_ZTV5Shape
	.section	.data.rel.ro.local._ZTV5Shape,"awG",@progbits,_ZTV5Shape,comdat
	.align 8
	.type	_ZTV5Shape, @object
	.size	_ZTV5Shape, 40
_ZTV5Shape:
	.quad	0
	.quad	_ZTI5Shape
	.quad	_ZN5ShapeD1Ev
	.quad	_ZN5ShapeD0Ev
	.quad	_ZN5Shape4drawEv
	.weak	_ZTI6Square
	.section	.data.rel.ro._ZTI6Square,"awG",@progbits,_ZTI6Square,comdat
	.align 8
	.type	_ZTI6Square, @object
	.size	_ZTI6Square, 24
_ZTI6Square:
	.quad	_ZTVN10__cxxabiv120__si_class_type_infoE+16
	.quad	_ZTS6Square
	.quad	_ZTI5Shape
	.weak	_ZTS6Square
	.section	.rodata._ZTS6Square,"aG",@progbits,_ZTS6Square,comdat
	.align 8
	.type	_ZTS6Square, @object
	.size	_ZTS6Square, 8
_ZTS6Square:
	.string	"6Square"
	.weak	_ZTI6Circle
	.section	.data.rel.ro._ZTI6Circle,"awG",@progbits,_ZTI6Circle,comdat
	.align 8
	.type	_ZTI6Circle, @object
	.size	_ZTI6Circle, 24
_ZTI6Circle:
	.quad	_ZTVN10__cxxabiv120__si_class_type_infoE+16
	.quad	_ZTS6Circle
	.quad	_ZTI5Shape
	.weak	_ZTS6Circle
	.section	.rodata._ZTS6Circle,"aG",@progbits,_ZTS6Circle,comdat
	.align 8
	.type	_ZTS6Circle, @object
	.size	_ZTS6Circle, 8
_ZTS6Circle:
	.string	"6Circle"
	.weak	_ZTI5Shape
	.section	.data.rel.ro._ZTI5Shape,"awG",@progbits,_ZTI5Shape,comdat
	.align 8
	.type	_ZTI5Shape, @object
	.size	_ZTI5Shape, 16
_ZTI5Shape:
	.quad	_ZTVN10__cxxabiv117__class_type_infoE+16
	.quad	_ZTS5Shape
	.weak	_ZTS5Shape
	.section	.rodata._ZTS5Shape,"aG",@progbits,_ZTS5Shape,comdat
	.type	_ZTS5Shape, @object
	.size	_ZTS5Shape, 7
_ZTS5Shape:
	.string	"5Shape"
	.ident	"GCC: (Debian 15.2.0-16) 15.2.0"
	.section	.note.GNU-stack,"",@progbits
