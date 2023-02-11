# Lab3
เนื้อหา ถูกแบ่งออกเป็น 3 หัวข้อหลักๆ คือ 

### -header flie (ง่ายที่สุด)
### -class
### -link list

## HEADER FILE

 คือ การสร้าง file ที่มีนาสกุล .h (ย่อมาจาก header) โดย file .h ตัว โดยต้องนำไปใช้คู่กับโค้ดที่เราต้องการ (เช่น file .cpp ที่เราต้องการ ) โดยหลักการคล้ายกับ การนำโค้ดที่อยู่ใน header file ไปแปะไว้ด้านบนของ file ที่เราต้องการ เช่น 

 ![code](https://media.discordapp.net/attachments/784804366904590388/1073928128910598154/image.png)

 จากรูปนี่คือโค้ดปกติที่มีการ include iostream และ using namespace std เอาไว้ โดยเราสามารถสร้าง header file ทำให้ไม่ต้องพิมทั้ง 2 ประโยคนี้ได้ โดยการ

 ![code2](https://media.discordapp.net/attachments/784804366904590388/1073929895996051467/image.png)

 สร้าง file .h ขึ้นมา 1 file โดยต้องให้ file นี้อยู่ใน folder เดียวกับ file .cpp ที่เราต้องการ

 #### ส่วนประกอบของ file .h
 ประกอบไปด้วย 2 ส่วนหลักๆ เลยคือ โครงสร้าง และเนื้อหาข้างใน

 ##### -โครงสร้าง (สิ่งที่ต้องมี)

 3 ประโยคหลักๆ เลยคือ 

1. #ifndef ~~~~~
หลายความว่า if not define ตามด้วยชื่อ file เรา ก็ให้

2. #define ~~~~ หรือ ก็คือ define มันขึ้นมา

เช่น


![code3](https://media.discordapp.net/attachments/784804366904590388/1073933763664425060/image.png)



 โดยทั่วไปจะ define ตามชื่อ file เพื่อป้องกันการสับสน

 3. #endif หมายความว่า end if 
 เสมือนกับการที่เรา ประกาศ 

 if (x < 10)

 {


 }

 และ เรามี {} 

 
 แต่หากเราไม่มี #endif ก็เหมือนเราพิมโค้ดว่า 

 if (x < 10)

 {

โดยเมื่อเขียนเรียบร้อยหน้าตาจะประมาณนี้

![code20](https://media.discordapp.net/attachments/784804366904590388/1073933990274273290/image.png)

โดย เมื่อเราสร้าง file .h เรียบร้อยแล้ว เราก็จะสามารถ include หรือ ทำให้ file ที่เราต้องการเขียนรู้จัก file .h ที่เราเขียนได้โดยการ เขียน include "ชื่อ file .h ของเรา" กำกับเอาไว้ ดังรูป

![code65](https://media.discordapp.net/attachments/784804366904590388/1073935347844661248/image.png)

โดยเราสามารถนำมาพลิกแพลงได้ เช่น สร้าง function ใน file .h และนำมาเรียกใช้งานที่ file ที่เราต้องการ ยกตัวอย่างเช่น 

![code200](https://media.discordapp.net/attachments/784804366904590388/1073934615154278431/image.png)

จากรูปภาพ จะสังเกตได้ว่า code ทางซ้าย หรือ hi.h ได้มีการ สร้าง function ชื่อว่า yoloo และหากเรา include "hi.h"
เข้าไปที่ file .cpp ทางด้านขวา เราก็จะสามารถเรียกใช้ function ที่มีชื่อว่า yoloo ได้

## class 

class เปรียบเสมือนถ้าเราจะสร้าง template ตัวละคร โดยสามารถสร้าง class ไว้ที่ file .h หรือ .cpp ก็ได้ เช่น 

![codewowzaa](https://media.discordapp.net/attachments/784804366904590388/1073978746664656936/image.png)

จากในรูปนี้เราได้ทำการสร้าง class ที่ชื่อว่า person ขึ้นมา และ ประกาศให้ใน person มีค่าตัวเลข attack และ heatlh โดยประกาศไว้แบบ public (เรื่อง public private เดี่ยวค่อยอธิบาย) 

โดยเราสามารถ นำเอา class person นี้ไปสร้างตัวละครและตั้งชื่อให้กับตัวละครนั้นๆได้ เช่น 

![code4545](https://media.discordapp.net/attachments/784804366904590388/1073979528755564574/image.png)

จากรูปจะเสมือนว่าเราได้สร้างตัวละคร ชื่อว่า chokun โดยใน ตัวละคร chokun จะยังตัวแปร attack และ health อยู่ด้านใน โดยเราสามารถ assign หรือ ระบุ,ให้ค่าตัวแปรเหล่านั้นได้ผ่านวิธีนี้

![code656566](https://media.discordapp.net/attachments/784804366904590388/1073986771337089034/image.png)

จากรูปเรากำลังระบุว่า ให้ค่า attack ของ chokun = 10 และ ค่า heatlh = 100 และ ให้ค่า speak ของ chokun = hi โดยหลักการของการเพิ่ม เปรียบเสมือนกับเราพิม  chokun ตามด้วย . เพื่อเข้าถึงตัวแปรที่มีใน person chokun

โดยเรายังสามารถสร้างคนออกมาอีกคนกี่คนก็ได้ ด้วย class ของเรา เช่น 

![code455545](https://media.discordapp.net/attachments/784804366904590388/1073987885407146014/image.png)

เราได้สร้างคนอีกคนชื่อว่า jame และให้ค่า attack , heatlh และ speak กับ jame โดย ตัวแปรต่างๆ ของ chokun และ jame ไมเกี่ยวข้องใดๆกันเลย โดยเราจะสามารถดูค่าต่างๆ ของ แต่ละตัวแปรได้ดังนี้ 

![codepo](https://media.discordapp.net/attachments/784804366904590388/1073989311378243772/image.png)

จะได้ output ออกมา ดังนี้

![coded,g](https://media.discordapp.net/attachments/784804366904590388/1073989618292244500/image.png)


โดยเรายังสามารถสั้งให้ person หรือ คนของเรานั้นทำสิ่งต่างได้ได้ เช่น เดิน กิน หรือ นอน ผ่านการสร้าง function หรือ คำสั่ง ให้กับ class person ของเราได้อีกด้วย  

![code12122](https://media.discordapp.net/attachments/784804366904590388/1073992125911400498/image.png)

โดย output จะออกมาว่า 

![code466](https://media.discordapp.net/attachments/784804366904590388/1073992780432547900/image.png)

### การประกาศตัวแปรแบบ public กับ private

การประกาศตัวแปรกับ private ต่างกันอย่างไร (ความจริงยังมีการประกาศแบบ protect อีกแต่ ข้ามไปเถอะ)

#### หน้าตา

##### public

![code87787](https://media.discordapp.net/attachments/784804366904590388/1073993821026787338/image.png)

#### private

โดยการประกาศแบบ private สามารถประกาศได้ 2 รูปแบบคือ 
 
 1.
 ![codewv](https://media.discordapp.net/attachments/784804366904590388/1073994318664179812/image.png)

 2.
 ![codefsgbs](https://media.discordapp.net/attachments/784804366904590388/1073994542757462076/image.png)

  โดยหน้าตาของการประกาศทั้งสองรูปแบบของ private คุณสมบัติไม่ต่างกัน 

  #### คุณสมบัติ

  - การประกาศแบบ public จะสามารถทำให้เราสามารถเข้าถึงตัวแปร ที่อยู่ใน class person จากที่ไหนก็ได้ เช่นรูปนี้

  ![codegrs](https://media.discordapp.net/attachments/784804366904590388/1073986771337089034/image.png)

  แต่หากเราประกาศแบบ private จะได้หน้าตา เช่นนี้

  ![codedsv](https://media.discordapp.net/attachments/784804366904590388/1073995349263388784/image.png)


  ![codevsd](https://media.discordapp.net/attachments/784804366904590388/1073995436576211125/image.png)

คือ เราไม่สามารถเข้าถึงตัวแปร private ได้จากที่ใดๆ เลย (inacessable) นอกจากใน class person เอง 
(เรามีการประกาศตัวแปรแบบ private เพื่อลักษาความปลอดภัยของข้อมมูล บลาๆๆๆๆๆๆๆๆๆ)

ดังนี้นหากต้องการ เข้าถึงข้อมูล เปลี่ยนข้อมูล ของตัวแปรที่มีการประกาศแบบ private ไว้ เราจึงต้องทำวิธีดังนี้

#### วิธีการเข้าถึงตัวแปรที่ประกาศแบบ private 

 เราต้องสร้าง function ที่เอาไว้เข้าถึงตัวแปรแบบ private ที่ใช้ในการรับค่า หรือ เปลี่ยนค่า ดังนี้

 ![code](https://media.discordapp.net/attachments/784804366904590388/1073997287149281400/image.png)

 หมายความว่า เราได้สร้าง function ขึ้นมา 1 function ที่มีชื่อว่า set_attack โดย function นี้จะรับค่า newattack เข้ามา

 ![code](https://media.discordapp.net/attachments/784804366904590388/1073997802964783124/image.png)

 และ นำค่านั้นเขามาใส่ในค่า attck ของ person นั้นๆ

 ![code](https://media.discordapp.net/attachments/784804366904590388/1073998069902880838/image.png)

 โดยเราสามารถเรียกใช้ได้ดังนี้ 

![code](https://media.discordapp.net/attachments/784804366904590388/1073998354645798932/image.png?width=443&height=437)

เท่ากับว่าตอนนี้ ค่าattack ของ chokun มีค่าเท่ากับ 50 แต่ทว่าเราก็ไม่สามารถ ดึงหรือดูค่าเหล่านั้นได้ (ค่าเหล่านั้นเป็น private อยู่) 

ดังนั้นถ้าอยากดูเราจึงต้องสร้าง function ที่เอาไว้ดึงหรือดูค่าเหล่านั้นออกมา ดังนี้

![code](https://media.discordapp.net/attachments/784804366904590388/1073999099478675506/image.png?width=397&height=437)

(ความแตกต่างระหว่าง function ที่ขึ้นต้นว่า void กับ int คือ void function expect no return หรือ void function ไม่ต้องการให้ return ค่าใดๆ แต่ int function คือ ต้องการให้ return ค่ากลับไปเป็นค่า int)

โดยเราสามารถเรียกใช้ function เหล่านั้นอย่างนี้

![code](https://media.discordapp.net/attachments/784804366904590388/1074000083311411262/image.png)

the output:

![code](https://media.discordapp.net/attachments/784804366904590388/1074000114672209981/image.png)






