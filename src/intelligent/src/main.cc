#include "intelligent.h"

int main(int argc, char** argv) {
    // Inisialisasi node ROS dengan nama "Intelligent"
    ros::init(argc, argv, "Intelligent");

    // Membuat objek Intelligent menggunakan unique_ptr untuk manajemen memori otomatis
    std::unique_ptr<Intelligent> intelligent(new Intelligent());
    ros::Rate rate(10);  // Membuat objek rate dengan frekuensi 100 Hz

    /**
     * Loop utama yang berjalan selama ROS masih aktif
     */
    while (ros::ok()) {
        ros::spinOnce();      // Memproses callback yang tertunda
        intelligent->Loop();  // Memanggil fungsi Loop dari objek Intelligent
        rate.sleep();         // Menunggu hingga waktu yang diperlukan untuk mencapai frekuensi 100 Hz
    }
    return 0;
}