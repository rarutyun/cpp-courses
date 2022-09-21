struct strong_ordering {
    static constexpr strong_ordering less{};
    static constexpr strong_ordering equal{};
    static constexpr strong_ordering greater{};
};
struct weak_ordering {
    static constexpr weak_ordering less{};
    static constexpr weak_ordering equivalent{};
    static constexpr weak_ordering greater{};
};
struct partial_ordering {
    static constexpr partial_ordering less{};
    static constexpr partial_ordering equivalent{};
    static constexpr partial_ordering greater{};
    static constexpr partial_ordering unordered{};
};