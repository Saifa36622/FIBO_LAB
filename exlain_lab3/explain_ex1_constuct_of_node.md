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

(ทั้งสองรูปเหมือนกัน)

- กล่อง zaa หรือ node zaa

![code12](https://media.discordapp.net/attachments/784804366904590388/1080250399132504085/image.png)

เราได้สร้าง Node zaa ด้วยการเขียนดังภาพ สังเกตว่าเราได้มีการใส่ค่าเข้าไปในวงเล็บ หมายความว่า Node zaa จะถูกสร้างด้วย constucter นี้ 

![code123122](https://media.discordapp.net/attachments/784804366904590388/1080250800179253268/image.png)

โดยหลักการทำงานของ constucter ตัวนี้คือ รับค่า ตัวแปรเข้ามา 2 ตัวแปร คือ 1.ตัวแปรแรกตัวแปร int หรือ ตัวลข และ 2.ตัวแปรประเภท Node * เข้ามา ตามลำดับ จากนั้นนำค่าเหล่านั้นมาใส่ในค่าตัวแปร value และ next ของ กล่องนั้นๆ เช่น เราสังเกตว่า ตอนที่เราสร้าง node zaa เราได้เขียนว่า Node zaa = Node(5,NULL); หมายความว่าตอนที่เราสร้าง node zaa ได้ได้ให้ ค่า new value = 5 และ newnext = NULL จากนั้นเราก็ได้เอาค่าเหล่านั้นไปใส่ในค่า value และ next ของกล่องนั้นๆ ตรงนี้ 

![codepp](https://media.discordapp.net/attachments/784804366904590388/1080252981187985438/image.png)

คือการ เอาค่า new value มาใส่นค่า value และ นำเอาค่า newnext มาใส่ที่ next 

โดยกล่อง zaa จะหน้าตาประมาณนี้ 

![code123](https://media.discordapp.net/attachments/1029082389852475525/1080253718076866650/IMG_1771.png?width=906&height=437)

