# 🎫 Proiect POO: Sistem de Tiketing (Bug Tracker)

Acest proiect implementează un sistem simplu de urmărire a bugurilor (Tiketing System), scris în C++ folosind Programare Orientată pe Obiecte.

Scopul proiectului este să gestioneze erori raportate într-un sistem software, să le asocieze cu programatori și să aplice soluții, toate respectând principiile POO.

---

## 📌 Cerințe acoperite

- Minim 3 clase: `Bug`, `Programmer`, `Solution`
- Constructori cu parametri, de copiere și destructori
- Supradefinire operator `<<` pentru afișare
- Atribute și metode `const` și `private`
- Minim 3 funcții membre complexe
- Folosirea funcțiilor prietene (`friend`)
- Citire date din fișiere text (nu de la tastatură)
- Salvarea datelor folosind clase `ifstream`
- Structurare în fișiere `.h` și `.cpp`
- Generarea automată a datelor la rulare

---

## 🛠️ Cum compilezi proiectul

```bash
g++ main.cpp Bug.cpp Programmer.cpp Solution.cpp Citire.cpp -o proiect_tiketing
./proiect_tiketing
```

---

## 🔍 Exemple de funcționalitate

- La pornire, programul încarcă buguri, programatori și soluții din fișiere text.
- Bugurile sunt asociate cu programatori (dacă sunt liberi).
- Fiecare soluție poate fi aplicată la un bug.
- În funcție de severitate (`low`, `medium`, `high`), timpul de rezolvare este generat aleator:
  - `high` → 2-4 ore
  - `medium` → 1-2 ore
  - `low` → 30-60 minute
- Se afișează automat:
  - Data primirii bugului
  - Data rezolvării (doar după aplicarea unei soluții)

