HANDLE_GCC_WARNING(abi)
#if CHECK_GCC_VERSION(4,8)
HANDLE_GCC_WARNING(abi-tag)
#endif // 4.8
HANDLE_GCC_WARNING(address)
HANDLE_GCC_WARNING(aggregate-return)
#if CHECK_GCC_VERSION(7,1)
HANDLE_GCC_WARNING(alloc-zero)
#endif // 7.1
#if CHECK_GCC_VERSION(7,1)
HANDLE_GCC_WARNING(alloca)
#endif // 7.1
#if CHECK_GCC_VERSION(10,1)
HANDLE_GCC_WARNING(arith-conversion)
#endif // 10.1
HANDLE_GCC_WARNING(array-bounds)
#if CHECK_GCC_VERSION(12,1)
HANDLE_GCC_WARNING(array-compare)
#endif // 12.1
HANDLE_GCC_WARNING(builtin-macro-redefined)
HANDLE_GCC_WARNING(cast-align)
#if CHECK_GCC_VERSION(8,1)
HANDLE_GCC_WARNING(cast-align=strict)
#endif // 8.1
HANDLE_GCC_WARNING(cast-qual)
HANDLE_GCC_WARNING(char-subscripts)
#if CHECK_GCC_VERSION(9,1)
HANDLE_GCC_WARNING(chkp)
#endif // 9.1
#if CHECK_GCC_VERSION(8,1)
HANDLE_GCC_WARNING(class-memaccess)
#endif // 8.1
HANDLE_GCC_WARNING(clobbered)
#if CHECK_GCC_VERSION(10,1)
HANDLE_GCC_WARNING(comma-subscript)
#endif // 10.1
HANDLE_GCC_WARNING(comment)
#if CHECK_GCC_VERSION(4,9)
HANDLE_GCC_WARNING(conditionally-supported)
#endif // 4.9
HANDLE_GCC_WARNING(conversion)
#if CHECK_GCC_VERSION(11,1)
HANDLE_GCC_WARNING(ctad-maybe-unsupported)
#endif // 11.1
HANDLE_GCC_WARNING(ctor-dtor-privacy)
#if CHECK_GCC_VERSION(4,9)
HANDLE_GCC_WARNING(date-time)
#endif // 4.9
#if CHECK_GCC_VERSION(4,7)
HANDLE_GCC_WARNING(delete-non-virtual-dtor)
#endif // 4.7
#if CHECK_GCC_VERSION(9,1)
HANDLE_GCC_WARNING(deprecated-copy)
#endif // 9.1
#if CHECK_GCC_VERSION(9,1)
HANDLE_GCC_WARNING(deprecated-copy-dtor)
#endif // 9.1
#if CHECK_GCC_VERSION(11,1)
HANDLE_GCC_WARNING(deprecated-enum-enum-conversion)
#endif // 11.1
#if CHECK_GCC_VERSION(11,1)
HANDLE_GCC_WARNING(deprecated-enum-float-conversion)
#endif // 11.1
HANDLE_GCC_WARNING(disabled-optimization)
HANDLE_GCC_WARNING(double-promotion)
#if CHECK_GCC_VERSION(7,1)
HANDLE_GCC_WARNING(duplicated-branches)
#endif // 7.1
#if CHECK_GCC_VERSION(6,1)
HANDLE_GCC_WARNING(duplicated-cond)
#endif // 6.1
HANDLE_GCC_WARNING(empty-body)
HANDLE_GCC_WARNING(endif-labels)
HANDLE_GCC_WARNING(enum-compare)
#if CHECK_GCC_VERSION(8,1)
HANDLE_GCC_WARNING(extra-semi)
#endif // 8.1
HANDLE_GCC_WARNING(float-equal)
HANDLE_GCC_WARNING(format)
HANDLE_GCC_WARNING(format-contains-nul)
HANDLE_GCC_WARNING(format-extra-args)
HANDLE_GCC_WARNING(format-nonliteral)
HANDLE_GCC_WARNING(format-security)
#if CHECK_GCC_VERSION(5,1)
HANDLE_GCC_WARNING(format-signedness)
#endif // 5.1
#if CHECK_GCC_VERSION(4,7)
HANDLE_GCC_WARNING(format-zero-length)
#endif // 4.7
#if CHECK_GCC_VERSION(11,1)
HANDLE_GCC_WARNING(hsa)
#endif // 11.1
HANDLE_GCC_WARNING(ignored-qualifiers)
#if CHECK_GCC_VERSION(12,1)
HANDLE_GCC_WARNING(infinite-recursion)
#endif // 12.1
HANDLE_GCC_WARNING(init-self)
HANDLE_GCC_WARNING(inline)
#if CHECK_GCC_VERSION(11,1)
HANDLE_GCC_WARNING(invalid-imported-macros)
#endif // 11.1
HANDLE_GCC_WARNING(invalid-pch)
#if CHECK_GCC_VERSION(4,8)
HANDLE_GCC_WARNING(literal-suffix)
#endif // 4.8
#if CHECK_GCC_VERSION(6,1)
HANDLE_GCC_WARNING(logical-op)
#endif // 6.1
HANDLE_GCC_WARNING(long-long)
HANDLE_GCC_WARNING(main)
#if CHECK_GCC_VERSION(4,7)
HANDLE_GCC_WARNING(maybe-uninitialized)
#endif // 4.7
#if CHECK_GCC_VERSION(10,1)
HANDLE_GCC_WARNING(mismatched-tags)
#endif // 10.1
HANDLE_GCC_WARNING(missing-braces)
HANDLE_GCC_WARNING(missing-declarations)
HANDLE_GCC_WARNING(missing-field-initializers)
HANDLE_GCC_WARNING(missing-format-attribute)
HANDLE_GCC_WARNING(missing-include-dirs)
HANDLE_GCC_WARNING(missing-noreturn)
HANDLE_GCC_WARNING(multichar)
#if CHECK_GCC_VERSION(6,1)
HANDLE_GCC_WARNING(multiple-inheritance)
#endif // 6.1
#if CHECK_GCC_VERSION(6,1)
HANDLE_GCC_WARNING(namespaces)
#endif // 6.1
#if CHECK_GCC_VERSION(4,7)
HANDLE_GCC_WARNING(narrowing)
#endif // 4.7
HANDLE_GCC_WARNING(noexcept)
#if CHECK_GCC_VERSION(7,1)
HANDLE_GCC_WARNING(noexcept-type)
#endif // 7.1
HANDLE_GCC_WARNING(non-virtual-dtor)
#if CHECK_GCC_VERSION(4,7)
HANDLE_GCC_WARNING(nonnull)
#endif // 4.7
#if CHECK_GCC_VERSION(6,1)
HANDLE_GCC_WARNING(null-dereference)
#endif // 6.1
HANDLE_GCC_WARNING(old-style-cast)
#if CHECK_GCC_VERSION(12,1)
HANDLE_GCC_WARNING(openacc-parallelism)
#endif // 12.1
HANDLE_GCC_WARNING(overlength-strings)
HANDLE_GCC_WARNING(overloaded-virtual)
HANDLE_GCC_WARNING(packed)
HANDLE_GCC_WARNING(packed-bitfield-compat)
HANDLE_GCC_WARNING(padded)
HANDLE_GCC_WARNING(parentheses)
#if CHECK_GCC_VERSION(9,1)
HANDLE_GCC_WARNING(pessimizing-move)
#endif // 9.1
HANDLE_GCC_WARNING(pointer-arith)
HANDLE_GCC_WARNING(redundant-decls)
#if CHECK_GCC_VERSION(10,1)
HANDLE_GCC_WARNING(redundant-tags)
#endif // 10.1
#if CHECK_GCC_VERSION(7,1)
HANDLE_GCC_WARNING(register)
#endif // 7.1
HANDLE_GCC_WARNING(reorder)
#if CHECK_GCC_VERSION(7,1)
HANDLE_GCC_WARNING(restrict)
#endif // 7.1
HANDLE_GCC_WARNING(return-type)
HANDLE_GCC_WARNING(sequence-point)
HANDLE_GCC_WARNING(shadow)
#if CHECK_GCC_VERSION(6,1)
HANDLE_GCC_WARNING(shift-negative-value)
#endif // 6.1
HANDLE_GCC_WARNING(sign-compare)
HANDLE_GCC_WARNING(sign-conversion)
HANDLE_GCC_WARNING(sign-promo)
HANDLE_GCC_WARNING(stack-protector)
HANDLE_GCC_WARNING(strict-aliasing)
HANDLE_GCC_WARNING(strict-null-sentinel)
HANDLE_GCC_WARNING(strict-overflow)
#if CHECK_GCC_VERSION(10,1)
HANDLE_GCC_WARNING(string-compare)
#endif // 10.1
#if CHECK_GCC_VERSION(8,1)
HANDLE_GCC_WARNING(stringop-truncation)
#endif // 8.1
#if CHECK_GCC_VERSION(8,1)
HANDLE_GCC_WARNING(suggest-attribute=cold)
#endif // 8.1
HANDLE_GCC_WARNING(suggest-attribute=const)
#if CHECK_GCC_VERSION(4,8)
HANDLE_GCC_WARNING(suggest-attribute=format)
#endif // 4.8
#if CHECK_GCC_VERSION(8,1)
HANDLE_GCC_WARNING(suggest-attribute=malloc)
#endif // 8.1
HANDLE_GCC_WARNING(suggest-attribute=noreturn)
HANDLE_GCC_WARNING(suggest-attribute=pure)
#if CHECK_GCC_VERSION(5,1)
HANDLE_GCC_WARNING(suggest-final-methods)
#endif // 5.1
#if CHECK_GCC_VERSION(5,1)
HANDLE_GCC_WARNING(suggest-final-types)
#endif // 5.1
#if CHECK_GCC_VERSION(5,1)
HANDLE_GCC_WARNING(suggest-override)
#endif // 5.1
HANDLE_GCC_WARNING(switch)
HANDLE_GCC_WARNING(switch-default)
HANDLE_GCC_WARNING(switch-enum)
HANDLE_GCC_WARNING(synth)
HANDLE_GCC_WARNING(system-headers)
#if CHECK_GCC_VERSION(6,1)
HANDLE_GCC_WARNING(templates)
#endif // 6.1
HANDLE_GCC_WARNING(trampolines)
HANDLE_GCC_WARNING(trigraphs)
#if CHECK_GCC_VERSION(12,1)
HANDLE_GCC_WARNING(trivial-auto-var-init)
#endif // 12.1
HANDLE_GCC_WARNING(type-limits)
HANDLE_GCC_WARNING(undef)
HANDLE_GCC_WARNING(uninitialized)
HANDLE_GCC_WARNING(unknown-pragmas)
HANDLE_GCC_WARNING(unreachable-code)
HANDLE_GCC_WARNING(unsafe-loop-optimizations)
HANDLE_GCC_WARNING(unused)
HANDLE_GCC_WARNING(unused-but-set-parameter)
HANDLE_GCC_WARNING(unused-but-set-variable)
HANDLE_GCC_WARNING(unused-function)
HANDLE_GCC_WARNING(unused-label)
#if CHECK_GCC_VERSION(4,7)
HANDLE_GCC_WARNING(unused-local-typedefs)
#endif // 4.7
HANDLE_GCC_WARNING(unused-macros)
HANDLE_GCC_WARNING(unused-parameter)
HANDLE_GCC_WARNING(unused-value)
HANDLE_GCC_WARNING(unused-variable)
#if CHECK_GCC_VERSION(12,1)
HANDLE_GCC_WARNING(use-after-free)
#endif // 12.1
#if CHECK_GCC_VERSION(4,8)
HANDLE_GCC_WARNING(useless-cast)
#endif // 4.8
HANDLE_GCC_WARNING(variadic-macros)
#if CHECK_GCC_VERSION(4,7)
HANDLE_GCC_WARNING(vector-operation-performance)
#endif // 4.7
#if CHECK_GCC_VERSION(6,1)
HANDLE_GCC_WARNING(virtual-inheritance)
#endif // 6.1
HANDLE_GCC_WARNING(vla)
#if CHECK_GCC_VERSION(10,1)
HANDLE_GCC_WARNING(volatile)
#endif // 10.1
HANDLE_GCC_WARNING(volatile-register-var)
HANDLE_GCC_WARNING(write-strings)
#if CHECK_GCC_VERSION(4,7)
HANDLE_GCC_WARNING(zero-as-null-pointer-constant)
#endif // 4.7
