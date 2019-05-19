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

## Deskripsi Tugas

### Ide Awal : 
Install dan konfigurasi kan OpenGL dengan IDE tertentu
### Pembakuan :
1. ~~Install Microsoft Visual Studio 10.0~~
> **PERHATIAN** : Visual Studio 10.0 Tidak tersedia untuk GNU/Linux Distribusi Ubuntu x86_64
> Maka tahap ini akan di skip, dan diganti dengan **Menyiapkan Project Folder** secara manual
2. Install OpenGL v3.7.4 / 3.7.5
3. Screenshot semua tata cara yang dilakukan **Full Desktop** lalu kirimkan dengan format `*.pdf`
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
2. Install library `GLEW` dan `GLFW`
    ```bash
    $ sudo apt-get install libglew-dev libglew2.0 libglfw3 libglfw3-dev
    ```

### Menyiapkan Project Folder
1. Buat Folder Baru. Misal : `~/Documents/Project/Kuliah/Grafkom-Tugas1`
    ```bash
    $ mkdir -p ~/Documents/Project/Kuliah/Grafkom-Tugas1
    $ cd ~/Documents/Project/Kuliah/Grafkom-Tugas1
    ```
2. Buat folder `src` untuk menyimpan source code
    ```bash
    $ mkdir src
    ```
3. Buat folder `bin` untuk menyimpan file _executable_ hasil kompilasi source code
    ```bash
    $ mkdir bin
    ```
4. Buat file source code dan edit file tersebut menggunakan `vim` editor
    ```bash
    $ touch src/main.cpp
    $ vim src/main.cpp
    ```
5. Isi program Dapat dilihat dalam repo ini didalam folder `src/main.cpp`, atau dapat dilihat pada seksi `Referensi` dibawah. copy isi file tersebut kedalam file source code anda
6. Save lalu exit `vim` editor dengan kombinasi `ESC` -> `:wq` -> `ENTER`
7. Buat script `Makefile`
    ```bash
    $ touch Makefile
    $ vim Makefile
    ```
8. Isi script dapat dilihat dalam repo ini di file `Makefile`,  atau dapat dilihat pada seksi `Referensi` dibawah. copy isi file tersebut kedalam file script `Makefile` anda
9. Save lalu exit `vim` editor dengan kombinasi `ESC` -> `:wq` -> `ENTER`

### _(Opsional)_ Script Auto-Compile
1. Buat file `autocompile.sh` lalu edit file tersebut
    ```bash
    $ touch autocompile.sh
    $ vim autocompile.sh
    ```
2. isi script dapat dilihat pada file `autocompile.sh` dalam repo ini, atau dapat dilihat pada seksi `Referensi` dibawah. copy file tersebut kedalam script `autocompile` anda
3. Save lalu Exit
4. Buat file tersebut agar dapat di eksekusi
    ```bash
    $ chmod +x autocompile.sh
    ```
### Programming dan _(Opsional)_ Run Script Auto-Compile
1. install `tmux` dan `entr`
    ```bash
    $ sudo apt-get install tmux entr
    ```
2. Buka tmux
    ```bash
    $ tmux
    ```
3. buat 2 buah terminal split-screen dengan kombinasi `CTRL` + `b` > `%`
4. jalankan perintah berikut
    ```bash
    $ ls src/* | entr ./autocompile.sh
    ```
5. Pindah ke screen sebelah kiri dengan kombinasi `CTRL` + `b` > `LEFT_ARROW`, lalu buka `main.cpp` dengan `vim` editor
    ```bash
    vim src/main.cpp
    ```
6. Aplikasi akan berjalan setiap anda membuat save pada setiap file didalam folder `src/`

### Hasil Program
