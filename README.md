> Tugas Ini di rilis oleh 
> **Erlangga Ibrahim** secara terbuka (*Open Source*)
> Dibawah Lisensi **GNU GPLv2**
> untuk keterangan dan informasi lebih lanjut dapat dibuka di : https://www.gnu.org/licenses/old-licenses/gpl-2.0.en.html
> atau dengan membaca file `LICENSE`

> Semua sumber yang digunakan pada tugas ini, dapat dilihat pada :
> https://github.com/wowotek/Grafkom-Tugas1

> **PERINGATAN** : *Tugas ini dirilis setelah tenggat waktu pengumpulan tugas, dan tidak akan berlaku untuk kolega dengan tenggat waktu pengumpulan yang sama*

> **PERINGATAN** : *Tugas ini dirilis tanpa garansi, termasuk nilai yang di-nihilkan oleh sebab mencontek dan/atau menyalin dan/atau meniru yang bersumber dari tugas ini*
# Grafika Komputer - Tugas 1
## Penulis
* Nama : **Erlangga Ibrahim**
* NIM : **672017282**
## Deskripsi Tugas
### Ide Awal : 
Install dan konfigurasi kan OpenGL dengan IDE tertentu
### Pembakuan :
1. ~~Install Microsoft Visual Studio 10.0~~
> **PERHATIAN** : Visual Studio 10.0 Tidak tersedia untuk GNU/Linux Distribusi Ubuntu x86_64
> Maka tahap ini akan di skip, dan diganti dengan **Menyiapkan Project Folder** secara manual
2. Install OpenGL v3.7.4 / 3.7.5
3. Screenshot semua tata cara yang dilakukan **Full Desktop** lalu kirimkan dengan format `*.pdf`
> Screenshot Full desktop di berikan pada bagian Referensi, untuk tutorial, gambar yang telah dipotong akan dipakai, demi pembacaan yang lebih baik
4. Kirim Dengan
    1. Subject : `Tugas1_Grafkom_KodeKelas_NIM`
    2. Nama File : `Tugas1_Grafkom_KodeKelas_NIM.pdf`
5. Deadline Tugas Sebelum Kelas
6. Dikim Ke : *672016135@student.uksw.edu*
7. Ketentuan sesuai dengan kontrak

## Hasil Pengerjaan
> **PERINGATAN** : Tugas ini dibuat hanya untuk Sistem Operasi GNU/Linux Distribusi Ubuntu x86_64. Sistem Operasi/Distribusi lain perlu menyesuaikan.
### Installasi OpenGL
1. Install library `GLUT` dan `mesa-utils`
    ```bash
    $ sudo apt-get install freeglut3-dev mesa-utils
    ```
    ![c0]
2. Install library `GLEW` dan `GLFW`
    ```bash
    $ sudo apt-get install libglew-dev libglew2.0 libglfw3 libglfw3-dev
    ```
    ![c1]
### Menyiapkan Project Folder
1. Buat Folder Baru. Misal : `~/Documents/Project/Kuliah/Grafkom-Tugas1`
    ```bash
    $ mkdir -p ~/Documents/Project/Kuliah/Grafkom-Tugas1
    $ cd ~/Documents/Project/Kuliah/Grafkom-Tugas1
    ```
    ![c2]
2. Buat folder `src` untuk menyimpan source code
    ```bash
    $ mkdir src
    ```
3. Buat folder `bin` untuk menyimpan file _executable_ hasil kompilasi source code
    ```bash
    $ mkdir bin
    ```
    ![c3]
4. Buat file source code dan edit file tersebut menggunakan `vim` editor
    ```bash
    $ touch src/main.cpp
    $ vim src/main.cpp
    ```
    ![c4]
    ![c5]
5. Isi program Dapat dilihat dalam repo ini didalam folder `src/main.cpp`, atau dapat dilihat pada seksi `Referensi` dibawah. copy isi file tersebut kedalam file source code anda
6. Save lalu exit `vim` editor dengan kombinasi `ESC` -> `:wq` -> `ENTER`
7. Buat script `Makefile`
    ```bash
    $ touch Makefile
    $ vim Makefile
    ```
    ![c6]
    ![c7]
8. Isi script dapat dilihat dalam repo ini di file `Makefile`,  atau dapat dilihat pada seksi `Referensi` dibawah. copy isi file tersebut kedalam file script `Makefile` anda
9. Save lalu exit `vim` editor dengan kombinasi `ESC` -> `:wq` -> `ENTER`

### _(Opsional)_ Script Auto-Compile
1. Buat file `autocompile.sh` lalu edit file tersebut
    ```bash
    $ touch autocompile.sh
    $ vim autocompile.sh
    ```
    ![c8]
2. isi script dapat dilihat pada file `autocompile.sh` dalam repo ini, atau dapat dilihat pada seksi `Referensi` dibawah. copy file tersebut kedalam script `autocompile` anda
3. Save lalu Exit
4. Buat file tersebut agar dapat di eksekusi
    ```bash
    $ chmod +x autocompile.sh
    ```
    ![c9]
### Programming dan _(Opsional)_ Run Script Auto-Compile
1. install `tmux` dan `entr`
    ```bash
    $ sudo apt-get install tmux entr
    ```
    ![c10]
2. Buka tmux
    ```bash
    $ tmux
    ```
3. buat 2 buah terminal split-screen dengan kombinasi `CTRL` + `b` > `%`
    ![c11]
4. jalankan perintah berikut
    ```bash
    $ ls src/* | entr ./autocompile.sh
    ```
5. Pindah ke screen sebelah kiri dengan kombinasi `CTRL` + `b` > `LEFT_ARROW`, lalu buka `main.cpp` dengan `vim` editor
    ```bash
    vim src/main.cpp
    ```
    ![c12]
6. Aplikasi akan berjalan setiap anda membuat save pada setiap file didalam folder `src/`

### Hasil Program
![result]

### Referensi
#### Full Desktop Screenshot
![fd0]
![fd1]
![fd2]
![fd3]
![fd4]
![fd5]
![fd6]
![fd7]
![fd8]
![fd9]
![fd10]
![fd11]
![fd12]
![fd13]

[c0]: img/cropped/0.png
[c1]: img/cropped/1.png
[c2]: img/cropped/2.png
[c3]: img/cropped/3.png
[c4]: img/cropped/4.png
[c5]: img/cropped/5.png
[c6]: img/cropped/6.png
[c7]: img/cropped/7.png
[c8]: img/cropped/8.png
[c9]: img/cropped/9.png
[c10]: img/cropped/10.png
[c11]: img/cropped/11.png
[c12]: img/cropped/12.png
[c13]: img/cropped/13.png

[fd0]: img/fulldesktop/0.png
[fd1]: img/fulldesktop/1.png
[fd2]: img/fulldesktop/2.png
[fd3]: img/fulldesktop/3.png
[fd4]: img/fulldesktop/4.png
[fd5]: img/fulldesktop/5.png
[fd6]: img/fulldesktop/6.png
[fd7]: img/fulldesktop/7.png
[fd8]: img/fulldesktop/8.png
[fd9]: img/fulldesktop/9.png
[fd10]: img/fulldesktop/10.png
[fd11]: img/fulldesktop/11.png
[fd12]: img/fulldesktop/12.png
[fd13]: img/fulldesktop/13.png

[result]: img/result.gif