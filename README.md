# json merupakan data yang dikirim/diterima oleh sistem kepada sistem lainnya. sedangkan Rest Api digunakan agar kita dapat terhubung dengan berbagai aplikasi. contohnya :
kita membeli tiket pesawat garuda lewat tiket.com. nah, sistem dari garuda ini merespon bahwa ada yang membeli tiket pesawat garuda lewat sistem tiket.com, sistem ini dinamakan Rest Api. mengapa garuda tidak memberikan akses database kepada tiket.com saja? hal ini disebabkan karena jika ada pihak luar yang memiliki akses database garuda maka akan mengancam data" yang ada pada garuda. maka dari itulah aplikasi tiket.com memiliki rest api sendiri (rata" menggunakan json) dan garuda juga memiliki rest apinya sendiri.

mudahnya :
- api ada penghubung antar 2 aplikasi atau lebih.
- json adalah data yang dikirim oleh aplikasi.

