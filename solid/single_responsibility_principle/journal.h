#ifndef WINGMANN_DESIGN_PATTERNS_SOLID_SINGLE_RESPONSIBILITY_PRINCIPLE_JOURNAL_H
#define WINGMANN_DESIGN_PATTERNS_SOLID_SINGLE_RESPONSIBILITY_PRINCIPLE_JOURNAL_H

#include <string>
#include <utility>
#include <vector>

class Journal {
    std::string title_{};
    std::vector<std::string> entries_{};

public:
    Journal() = delete;
    explicit Journal(std::string title) : title_{std::move(title)} { }
    virtual ~Journal() = default;

public:
    void add_entry(const std::string& entry)
    {
        static std::size_t count{};
        entries_.emplace_back(std::to_string(++count) + ": " + entry);
    }

    std::vector<std::string> get_entries()
    {
        return entries_;
    }
};

#endif // WINGMANN_DESIGN_PATTERNS_SOLID_SINGLE_RESPONSIBILITY_PRINCIPLE_JOURNAL_H
