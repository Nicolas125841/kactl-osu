/**
 * Author: cp-algorithms
 * Date: 2025-05-16
 * License: CC0
 * Description: Linear sieve for generating the mobius function.
 */
#pragma once

int N;
vector<int> lp(N), mo(N), pr;

void linear_sieve(){
mo[1] = lp[1] = 1;
for (unsigned int i=2; i <= N; ++i) {
    if (lp[i] == 0) {
        lp[i] = i;
        mo[i] = -1;
        pr.push_back(i);
    }
    for (int j = 0; i * pr[j] <= N; ++j) {
        lp[i * pr[j]] = pr[j];
        mo[i * pr[j]] = -mo[i] * (lp[i] != pr[j]);
        if (pr[j] == lp[i]) {
            break;
        }
    }
}