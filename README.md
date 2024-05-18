# Ruby in C

This is an example of C program that lunches Ruby VM and executes Ruby code.

## Build

We need to tell compiler where ruby and ruby/config headers are located

```bash
gcc hello.c -I$(ruby -rrbconfig -e 'puts RbConfig::CONFIG["rubyhdrdir"]') -I$(ruby -rrbconfig -e 'puts RbConfig::CONFIG["rubyarchhdrdir"]') -L$(ruby -rrbconfig -e 'puts RbConfig::CONFIG["libdir"]') -lruby -o hello
```
