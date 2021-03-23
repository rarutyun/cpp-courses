// Most vexing parse explanation
// Most vexing parse solution using the braced initialization

struct Form {};

struct Widget {
    Widget() = default;
    Widget( const Form& ) {}
    void draw() {}
};

int main() {
    Widget w(); // Default ctor
    Widget w1{};

    Widget w2(Form());
    w2.draw();
}
