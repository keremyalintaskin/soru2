# Node Toplama ve Toplam Kontrolü
Bu C programı, bir ağacın düğümlerinin anahtarlarını toplar ve kök düğümün sol ve sağ alt ağaçlarının anahtarlarının toplamıyla karşılaştırır. Eğer toplam eşitse, "node child'ların toplamı kök node'a eşittir" mesajını verir. Aksi takdirde, "node child'ların toplamı kök node'a eşit değildir" mesajını verir.

struct Node yapısı, anahtarın yanı sıra sol ve sağ alt düğümleri içerir. node_topla() fonksiyonu, NULL olmayan bir düğüm verildiğinde, düğümün anahtarını, sol alt düğümün anahtarını ve sağ alt düğümün anahtarını toplar. İşlev, bir düğümün alt ağacında gezinir ve alt düğüm NULL olduğunda 0 döndürür.

toplam_kontrol() fonksiyonu, kök düğüm verildiğinde, node_topla() fonksiyonunu sol ve sağ alt ağaçlar için çağırır ve sonra kök düğümün anahtarını sol ve sağ alt ağaç anahtarlarının toplamıyla karşılaştırır. Eşitse 1, aksi takdirde 0 döndürür.

main() fonksiyonu, kök düğüm oluşturur ve sol ve sağ alt düğümlere sahip olan bir ağaç oluşturur. Ardından, toplam_kontrol() fonksiyonunu çağırır ve sonucu ekrana yazdırır.

Bu programda, ağacın oluşturulması ve anahtarların belirlenmesi sabit olarak yapılmıştır. Gerçek bir senaryoda, ağaç genellikle verilerin yüklenmesiyle oluşturulur. Bu program, basit bir örnek olarak kullanılabilir.
