// Overridden function must have the same or stricter effect of noexcept specifier.

// since C++11

class base {
    virtual void foo() noexcept {};
    virtual void bar();
};

class derived : public base {
    void foo() override {}; // compile-time error
    void bar() noexcept override {};
};
