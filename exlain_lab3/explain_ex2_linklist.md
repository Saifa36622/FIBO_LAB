### linklisted

linked list คืออะไร เราอ้างอิงจากเนื้อหาก่อนๆ ของ เราเรื่อง node โดย เราเปรียบเทียบให้ node เป็นเหมือนกล่องเก็บข้อมูล linked list ก็คือ การนำกล่องข้อมูลเหล่านั้นมา link หรือเชื่อมต่อกันนั้นเอง ดังรูป

![codeppp](https://media.discordapp.net/attachments/1029082389852475525/1080259060730974368/IMG_1773.png?width=870&height=437)

โดย linked list จะต้องมีตัวสุดท้ายที่ชี้ไปที่ NULL เสมอ เพื่อบอกคอมพิวเตอร์ว่า link นี้จบแล้ว

โดยจากที่พี่เขากำหนดมา เขาให้เรา สร้าง class ที่มีชื่อว่า linked list ขึ้นมา ที่ file.h ตัวหนึ่ง และ มีตัวแปรดังนี้ 

![codeefr](https://media.discordapp.net/attachments/1029082389852475525/1080260142567804948/image.png)

โดยจะ มี 3 ตัวแปรคือ head tail และ size  โดย 1. head คือ node ที่อยู่ด้านหน้าสุด ของ linked list นี้ และ tail คือ ตัวที่อยู่ปลายสุดนั้นเอง ส่วน size ก็คือจำนวนของตัวแปรใน linked list นี้ เช่น 

![codewee](https://media.discordapp.net/attachments/1029082389852475525/1080261001984868372/IMG_1774.png?width=879&height=437)

อย่างรูปนี้ ตัวแปรที่เป็น head คือ node 1 และ  tail คือ  node 3 และ linked list นี้มี size = 3 (เนื่องจากมี 3 กล่อง)

### constuct ของ linked list 

จากนั้น เราก็ต้องสร้าง constuct ของ linked list นี้ที่ file.cpp หน้าตาประมาณนี้ เพื่อให้คอมรู้ว่าเวลาเราจะสร้าง linked list ต้องทำอย่างไร 

![code](https://media.discordapp.net/attachments/1029082389852475525/1080262959420411995/image.png)

โดยเป็นการระบุว่าใน linked list ว่าให้เป็น link เปล่ายังไม่มีอะไร (head และ tail เป็น NUll หมายความว่าทั้ง list จะยังไม่มีอะไรเลย) และ ให้ size = 0

หน้าตาของ code main เวลาสร้าง linked list 

![code](https://media.discordapp.net/attachments/1029082389852475525/1080263809719091290/image.png)

(Node ด้านบนไม่เกี่ยว แค่สร้าง node เฉยๆ) อย่างในภาพนี้คือเราได้สร้าง limked list เปล่าๆ ขึ้นมา 1 ตัวชื่อว่า hi นั้นเอง


