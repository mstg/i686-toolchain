# i686-toolchain
precompiled i686 stuff

# grub-mkrescue problem
For grub-mkrescue to work correctly you have to call it with the `--directory` argument.

Example: `grub-mkrescue --directory=/pathtotoolchain/lib/grub/i386-pc`
