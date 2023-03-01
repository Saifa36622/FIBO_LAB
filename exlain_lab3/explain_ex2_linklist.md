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

(Node ด้านบนไม่เกี่ยว แค่สร้าง node เฉยๆ) อย่างในภาพนี้คือเราได้สร้าง linked list เปล่าๆ ขึ้นมา 1 ตัวชื่อว่า hi นั้นเอง

โดยเมื่อสร้าง constuct ใน file .cpp ก็อย่าลืมไป เขียน refference มันที่ class linkedlist ที่ file.h ด้วย

![code](https://media.discordapp.net/attachments/1029082389852475525/1080268106280210482/image.png)


#### function ต่างๆ

จากคำสั่งของ ta ได้สั้งให้ linkedlist ตัวนี้มี 3 function หลักๆ ที่ต้องมี คือ

![hi](https://media.discordapp.net/attachments/1029082389852475525/1080268478084304986/image.png?width=698&height=437)

(ตรงนี้จะเป็นการเกริ่นคร่าวๆ เดี่ยวไปลงลึกในแต่ละ function อีกที)

1. void insert(Node *newnode,int pos);

fuction ที่ใช้ insert หรือ ใส่ ค่าเข้าไปที่ linked list โดยรับค่าเข้ามา 2 ตัว คือ node ที่ค้องการใส่และ ตำแหน่งที่ต้องการใส่

2. Node *remove(int pos); 

function ที่ ใช่ remove หรือ นำค่านั้นๆออกมาจาก linkedlist โดยรับค่าของตำแหน่งที่ต้องการ remove ออก และ เมื่อจบ program ก็ให้ return ค่าของตัวที่ถูกลบออก

3. void printList(); 

คือ function ที่ใข้ปริ้นค่าทั้งหมดที่อยู่ใน linked list ออกมา

### 1.void insert 

โดยการที่เราจะนำค่าเข้าไปใส่ใน linked list ได้นั้นเราจะมึหลายกรณีที่เราต้องทำมากๆ เช่น เติมหัวหรือเตืมในตำแหน่งที่ 0 , เติมหาง และ เติมระหว่าง node โดย 

#### เติมหัว หรือ เติมใน ตำแหน่งที่ 0 

ยกตัวอย่าง

![code](https://media.discordapp.net/attachments/1029082389852475525/1080272405471174656/IMG_1775.png?width=848&height=437)

่เช่น เรามี node 4 5 6 ต่อกันอยู่ หากเราเติม node ที่เราต้องการ (สมมุติค่า = 9) เข้าไปที่ตำแหน่ง 0 output ควรจะออกมาหน้าตาดังภาพ

![coded](https://media.discordapp.net/attachments/1029082389852475525/1080273114140770406/IMG_1776.png?width=960&height=407)

output = 9456 หรือ เติมเลข 9 เข้าไปที่ตำแหน่งที่ 0 นั้นเอง

โดยขั้นตอนการที่เราจะทำให้ได้ output หน้าตาเช่นนี้นั้น

1. เราต้องนำ node ตัวใหม่ของเรานั้นไปชี้ที่หัวของ linked list ตัวนี้ ดังภาพ 

![code](https://media.discordapp.net/attachments/1029082389852475525/1080272405471174656/IMG_1775.png?width=848&height=437)

ให้ node ที่มีค่า 9 หรือ node ตัวใหม่ของเราชี้ไปที่ head

![code](https://media.discordapp.net/attachments/1029082389852475525/1080274785784844358/IMG_1779.png?width=960&height=306)

จากนั้นสังเกตว่า หัวของ linked list นี้ หรือ head ของ linked listed นี้ได้เปลี่ยนไปเป็น node ใหม่ของเราแล้ว เราจึงต้องบอกให้คอมพิวเตอร์รู้ว่า node ตัวใหม่ของเราเป็น head แทน

![code](https://media.discordapp.net/attachments/1029082389852475525/1080274786007130212/IMG_1780.png?width=960&height=309)

โดยหากแปลงขั้นตอนทั้งหมดด้านบนเป็นโค้ดจะได้ว่า 

![code](https://media.discordapp.net/attachments/1029082389852475525/1080275728341422080/image.png)

โดย if (pos == 0 && head != NULL) หมายความว่า หากเติมที่ pos == 0 หรือ ตำแหน่งที่ 0 และ head ไม่ใช่ null(เดี่ยวอธิบายอีกทีว่า head != NULL คืออะไร) 


ให้ node ตัวใหม่ของเรา หรือ newnode ทำการ setnext หรือ ตั้งค่าตัวถัดไป ให้เป็น head และ จากนั้นจึงทำการบอกคอมพิวเตอร์ว่าตอนนี้ head ของเราคือ newnode หรือ node ตัวใหม่ที่พึ่งใส่เข้ามานั้นเอง

### link ว่างเปล่า 

โดยประโยคที่เขียนเอาไว้ว่า && head != NULL เราเอาไว้ใช้เพื่อดักกรณีที่ว่า หาก  else if (pos == 0 && head == NULL) หมายความว่า link listed ตัวนี้ ไม่มีข้อมูลใดๆอยู่เลย เป็น link ว่างเปล่า(head เป็น NULL หมายความว่า ไม่มีอะไรใน link เลย) และที่ต้องเป็น ที่ pos == 0 เท่านั้นเนื่องจากว่าเวลาเราเติม list ที่ว่างเปล่าเราต้องเติมเข้าไปที่ตัวที่ 0 เสมอ เสมือนเวลาเราเดินขึ้นบันไดเราต้องเริ่มจากขั้นที่ 1 ก่อนแลัวค่อยเดินต่อไป

![code](https://media.discordapp.net/attachments/1029082389852475525/1080280121275072652/IMG_1781.png?width=492&height=437)

โดยเนื่องจากทั้ง link ตอนนี้มันว่างเปล่า เราเลยเอา node ใหม่ของเรามาและ ตั้งให้มันเป็นทั้งหัวและหาง ในตัวเดียวกันไปเลย (เนื่องจากทั้ง list มี node ตัวเดียว)

![code](https://media.discordapp.net/attachments/1029082389852475525/1080280121522520155/IMG_1782.png?width=733&height=437) 

จากนั้นให้ node ตัวใหม่ของเรานั้นชี้ไปที่ NULL เพื่อบอกคอมพิวเตอร์ว่า link นี้จบแล้ว

