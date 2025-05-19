/**
 * Author: Nisiyama_Suzune
 * Date: 2025-05-16
 * License: CC0
 * Source: https://codeforces.com/blog/entry/53925
 * Description: When performing some operation $\sum_{i}^{n} f(\left\lfloor\frac{n}{i}\right\rfloor)$
 * the harmonic lemma allows us to call f only $O(\sqrt{n})$ times as $\left\lfloor\frac{n}{i}\right\rfloor$ 
 * is identical for all values between i and 
 * $\left\lfloor\frac{n}{\left\lfloor\frac{n}{i}\right\rfloor}\right\rfloor$ inclusive.
 */
#pragma once

for(int i = 1, la; i <= n; i = la + 1) {
	la = n / (n / i);
	//n / x yields the same value for i <= x <= la.
}
