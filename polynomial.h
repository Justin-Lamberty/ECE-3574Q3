#include <vector>
struct Term{
    int coefficient;
    int exponent;
};
class Polynomial{
    private:
    std::vector<Term> p_terms;
    public:
    std::vector<Term> getTerms() const;
    std::vector<Term> addition() const;
    std::vector<Term> subtraction() const;
    void print() const;
}

