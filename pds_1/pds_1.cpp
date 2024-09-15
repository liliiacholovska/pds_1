#include <iostream>
#include <string>

using namespace std;

// Функція для імплікації
bool implication(bool p, bool q) {
    return !p || q;
}

// Функція для еквівалентності
bool equivalence(bool p, bool q) {
    return implication(p, q) && implication(q, p);
}

int main() {
    bool p, q;

    // Введення значень істинності p і q
    cout << "Enter the truth value for p (0 or 1): ";
    cin >> p;
    cout << "Enter the truth value for q (0 or 1): ";
    cin >> q;

    // Кон'юнкція (AND)
    bool conjunction = p && q;
    cout << "Conjunction (p ^ q): " << conjunction << endl;

    // Диз'юнкція (OR)
    bool disjunction = p || q;
    cout << "Disjunction (p ⌄ q): " << disjunction << endl;

    // Альтернативне "або" (XOR)
    bool exclusiveOr = p != q;
    cout << "Alternative \"OR\" (p ⊕ q): " << exclusiveOr << endl;

    // Імплікація p → q
    bool impl_pq = implication(p, q);
    cout << "Implication (p -> q): " << impl_pq << endl;

    // Імплікація q → p
    bool impl_qp = implication(q, p);
    cout << "Implication (q -> p): " << impl_qp << endl;

    // Еквівалентність (p ~ q)
    bool equiv = equivalence(p, q);
    cout << "Equivalence (p ~ q): " << equiv << endl;

    // Задаємо два бітові рядки
    string a, b;
    cout << "\nEnter the first bit string: ";
    cin >> a;
    cout << "Enter the second bit string: ";
    cin >> b;

    // Перевірка чи рядки мають однакову довжину
    if (a.length() != b.length()) {
        cout << "Error: Strings must be the same length" << endl;
        return 1;
    }

    int n = a.length(); // Довжина рядків
    string x = "", y = "", z = ""; // Результати для OR, AND, XOR

    for (int i = 0; i < n; ++i) {
        // Операція OR
        if (a[i] == '1' || b[i] == '1') {
            x += '1';
        }
        else {
            x += '0';
        }

        // Операція AND
        if (a[i] == '1' && b[i] == '1') {
            y += '1';
        }
        else {
            y += '0';
        }

        // Операція XOR
        if (a[i] != b[i]) {
            z += '1';
        }
        else {
            z += '0';
        }
    }

    // Виведення результатів
    cout << "Result OR:  " << x << endl;
    cout << "Result AND: " << y << endl;
    cout << "Result XOR: " << z << endl;

    return 0;
}