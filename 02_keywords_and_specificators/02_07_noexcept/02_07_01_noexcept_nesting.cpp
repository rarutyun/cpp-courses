// since C++11

class base {
    virtual void foo() noexcept {};
    virtual void bar();
    virtual void foo_bar() noexcept = delete;
};

class derived : public base {
    void foo() override {}; // compile-time error
    void bar() noexcept override {};
    void foo_bar() = delete;
};
