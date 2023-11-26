#include <bits/stdc++.h>
int main() { std::ios::sync_with_stdio(false); std::cin.tie(0); int t; std::cin >> t; while(t--){ int n; std::cin >> n; std::cout << std::gcd(n-(n%2), (n-(n%2))/2) << std::endl; } return 0; }
