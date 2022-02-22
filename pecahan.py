# Nama file : pecahan.py
# Pembuat : Vicoriza Ramadhani
# Tanggal : 29 September 2021
# Deskripsi : Membuat tipe bentukan pecahan beserta konstruktor dan selektornya

# Definisi dan Spesifikasi Type
# type pecahan : <n : integer , d : integer != 0>
#   {<n:integer >=0, d:integer >0> n adalah pembilang (numerator) dan d adalah penyebut
# (denumerator). Penyebut sebuah pecahan tidak boleh nol }

# Definisi dan Spesifikasi Konstruktor
# make_p : integer >=0, integer > 0 → pecahan
#   {make_p(x,y) membentuk sebuah pecahan dari pembilang x dan penyebut y, dengan x
# dan y integer}
#   pecahan : n/d n--> pembilang, d --> penyebut

# Realisasi dalam Python
class pecahan:
    def __init__(self, x, y):
        self.n = x
        self.d = y

# Definisi dan Spesifikasi Selektor
# pemb : pecahan --> integer >=0
#   {pemb(p) memberikan numerator pembilang n dari pecahan tsb}

# Realisasi dalam Python
def pemb(p):
    return p.n

# peny : pecahan --> integer >=0
#   {peny(p) memberikan denumerator penyebut d dari pecahan tsb}

# Realisasi dalam Python
def peny(p):
    return p.d

# Definisi dan Spesifikasi Predikat
# is_eq_p : 2 pecahan → boolean
#   {is_eq_p(p1,p2) true jika p1 = p2
# Membandingkan apakah dua buah pecahan samanilainya: n1/d1 = n2/d2 jika dan hanya jika n1d2=n2d1}

# Realiasi dalam Python
def is_eq_p(p1,p2):
    return (pemb(p1)/peny(p1)) == (pemb(p2)/peny(p2))

# is_lt_p : 2 pecahan → boolean
#   {is_lt_p(p1,p2) true jika p1 < p2
# Membandingkan dua buah pecahan, apakah p1 lebih kecil nilainya dari p2: n1/d1 < n2/d2 jika dan hanya jika n1d2 < n2d1}

# Realisasi dalam Python
def is_lt_p(p1,p2):
    return (pemb(p1)/peny(p1)) < (pemb(p2)/peny(p2))

# is_gt_p : 2 pecahan → boolean
#  {is_gt_p(p1,p2) true jika p1 > p2
# Membandingkan nilai dua buah pecahan,, apakah p1 lebih besar nilainya dari p2: n1/d1 > n2/d2 jika dan hanya jika n1d2 > n2d1 }

# Realisasi dalam Python
def is_gt_p(p1,p2):
    return (pemb(p1)/peny(p1)) > (pemb(p2)/peny(p2))

# Definisi dan Spesifikasi Operator/Fungsi Lain Terhadap Pecahan
# add_p : 2 pecahan → pecahan
#   {add_p(p1,p2) : Menambahkan dua buah pecahan p1 dan p2 :
# n1/d1 + n2/d2 = (n1*d2 + n2*d1)/d1*d2}

# Realisasi dalam Python
def add_p(p1,p2):
    return pecahan(pemb(p1)*peny(p2)+pemb(p2)*peny(p1), peny(p1)*peny(p2))

# sub_p : 2 pecahan → pecahan
#   {sub_p(p1,p2) : Mengurangkan dua buah pecahan p1 dan p2
# Mengurangkan dua pecahan : n1/d1 - n2/d2 = (n1*d2 - n2*d1)/d1*d2}

# Realisasi dalam Python
def sub_p(p1,p2):
    return pecahan(pemb(p1)*peny(p2)-pemb(p2)*peny(p1), peny(p1)*peny(p2))

# mul_p : 2 pecahan → pecahan
#   {mul_p(p1,p2) : Mengalikan dua buah pecahan p1 dan p2
# Mengalikan dua pecahan : n1/d1 * n2/d2 = n1*n2/d1*d2}

# Realisasi dalam Python
def mul_p(p1,p2):
    return pecahan(pemb(p1)*pemb(p2),peny(p1)*peny(p2))

# div_p : 2 pecahan → pecahan
#   {div_p(p1,p2) : Membagi dua buah pecahan p1 dan p2
# Membagi dua pecahan : (n1/d1)/(n2/d2) = n1*d2/d1*n2}

# Realisasi dalam Python
def div_p(p1,p2):
    return pecahan(pemb(p1)*peny(p2),peny(p1)*pemb(p2))

# real_p : pecahan → real
#   {real_p(p) Menuliskan bilangan pecahan dalam notasi desimal}

# Realisasi dalam Python
def real_p(p):
    return pemb(p)/peny(p)

#Aplikasi
R = pecahan(2,1)
S = pecahan(1,2)
print(pemb(R))
print(peny(R))
print(is_eq_p(R,pecahan(1,2)))
print(is_lt_p(R,S))
print(is_gt_p(R,S))
print("{}/{}".format(pemb(add_p(R,S)), peny(add_p(R,S))))
print("{}/{}".format(pemb(sub_p(R,S)), peny(sub_p(R,S))))
print("{}/{}".format(pemb(mul_p(R,S)),peny(mul_p(R,S))))
print("{}/{}".format(pemb(div_p(R,S)),peny(div_p(R,S))))
print(real_p(div_p(R,S)))
print(real_p(R))
print(pemb(R)*peny(S)+pemb(S)*peny(R), peny(R)*peny(S))