//
// Created by KuJyo on 2022/9/10.
//

#ifndef COMPUTATIONALGRAPH_FORMULA_H
#define COMPUTATIONALGRAPH_FORMULA_H

#include "string"

using namespace std;
class Formula {
private:
    string str_formula;

    void str_to_graph(string formula);

public:
    Formula(string formula);
    void print_formula();

    double calc(double input);
};


#endif //COMPUTATIONALGRAPH_FORMULA_H
