### Constuct 

constuct คืออะไร 

ใน file.cpp



![code55](https://media.discordapp.net/attachments/784804366904590388/1080246587898466365/image.png?width=681&height=437)


ใน file.h


![code55](https://media.discordapp.net/attachments/784804366904590388/1080246541048098847/image.png?width=527&height=437)

constuct คือโค้ดในรูปนี้ โดย constuct อธิบายง่ายๆ ว่า เวลาที่เราจะสร้าง กล่องเก็บข้อมูล หรือ node ขึ้นมา ตอนสร้างเราต้องระบุอย่างไรบ้าง โดยสำหรับ Node เราได้สร้าง constuct ไว้ 2 กรณี คือ ระบุข้อมุลเข้ามา และ ไม่ระบุข้อมูลเข้ามา โดยยกตัวอย่างเช่น ตัวอย่าง code main นี้ 

![code123](https://media.discordapp.net/attachments/784804366904590388/1080247788102750228/image.png)

เราได้ทำการสร้างกล่องขึ้นมา 3 กล่องด้วย constuct ของเรา โดยกล่องแรก 

- กล่อง wow หรือ Node wow จะถูกสร้างโดยที่เราไม่ได้บอกข้อมูลอะไรให้คอมเลย (สังเกตว่า เราเขียนแค่ว่า Node และ ลงท้ายด้วยวงเว็บว่างเปล่า หรือคือไม่ได้ระบุอะไรนั้นเอง) ดังนั้น Node ที่ชื่อว่า wow จะถูกสร้างขึ้นมาด้ย constuct ตัวนี้ 

![code123](https://media.discordapp.net/attachments/784804366904590388/1080248971517243543/image.png)

คือ การระบุว่ากล่อง wow นี้มีค่า value = 0 และ มีตัวแปร next ชี้ไปที่ Null ดังรูป

![code122](https://media.discordapp.net/attachments/1029082389852475525/1080249512972521612/IMG_1770.png?width=960&height=419)