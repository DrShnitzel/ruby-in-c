# include <ruby.h>

int main() {
    // initialize VM
    ruby_init();

    rb_eval_string("puts 'Hello from Ruby!'");

    return ruby_cleanup(0);
}
