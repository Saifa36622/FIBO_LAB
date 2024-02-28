# Lab3
เนื้อหา ถูกแบ่งออกเป็น 3 หัวข้อหลักๆ คือ 

### -header flie (ง่ายที่สุด)
### -class
### -link list

## HEADER FILE

 คือ การสร้าง file ที่มีนาสกุล .h (ย่อมาจาก header) โดย file .h ตัว โดยต้องนำไปใช้คู่กับโค้ดที่เราต้องการ (เช่น file .cpp ที่เราต้องการ ) โดยหลักการคล้ายกับ การนำโค้ดที่อยู่ใน header file ไปแปะไว้ด้านบนของ file ที่เราต้องการ เช่น 

 ![code](https://cdn.discordapp.com/attachments/784804366904590388/1073928128910598154/image.png?ex=65ec4782&is=65d9d282&hm=05acc26f72138ca7e132adf42e4490f872b6d66cea37e08a0080b992399a76d1&)

 จากรูปนี่คือโค้ดปกติที่มีการ include iostream และ using namespace std เอาไว้ โดยเราสามารถสร้าง header file ทำให้ไม่ต้องพิมทั้ง 2 ประโยคนี้ได้ โดยการ

 ![code2](https://cdn.discordapp.com/attachments/784804366904590388/1073929895996051467/image.png?ex=65ec4927&is=65d9d427&hm=63d4689e3951d1b2fb8a8727b7f28b82e61ccb1539f89eaf58f9847e351ec7a1&)

 สร้าง file .h ขึ้นมา 1 file โดยต้องให้ file นี้อยู่ใน folder เดียวกับ file .cpp ที่เราต้องการ

 #### ส่วนประกอบของ file .h
 ประกอบไปด้วย 2 ส่วนหลักๆ เลยคือ โครงสร้าง และเนื้อหาข้างใน

 ##### -โครงสร้าง (สิ่งที่ต้องมี)

 3 ประโยคหลักๆ เลยคือ 

1. #ifndef ~~~~~
หมายความว่า if not define ตามด้วยชื่อ file เรา ก็ให้

2. #define ~~~~ หรือ ก็คือ define มันขึ้นมา

เช่น


![code3](https://cdn.discordapp.com/attachments/784804366904590388/1073933050783744100/image.png?ex=65ec4c18&is=65d9d718&hm=1121f74d9d49ec1650c42bff982baa1abe85bfb8c8260b9cf2bbb0c094191a16&)



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

![code20](https://cdn.discordapp.com/attachments/784804366904590388/1073933763664425060/image.png?ex=65ec4cc1&is=65d9d7c1&hm=27252b42c81dfdd72143e33274e132e537faac67246b805d455bb83c4ffa0854&)

โดย เมื่อเราสร้าง file .h เรียบร้อยแล้ว เราก็จะสามารถ include หรือ ทำให้ file ที่เราต้องการเขียนรู้จัก file .h ที่เราเขียนได้โดยการ เขียน include "ชื่อ file .h ของเรา" กำกับเอาไว้ ดังรูป

![code65](https://cdn.discordapp.com/attachments/784804366904590388/1073933990274273290/image.png?ex=65ec4cf8&is=65d9d7f8&hm=bb8386334ff1560970288b28306475a125442d2c5934245f57c695a8bb1e607c&)

โดยเราสามารถนำมาพลิกแพลงได้ เช่น สร้าง function ใน file .h และนำมาเรียกใช้งานที่ file ที่เราต้องการ ยกตัวอย่างเช่น 

![code200](https://cdn.discordapp.com/attachments/784804366904590388/1073934615154278431/image.png?ex=65ec4d8c&is=65d9d88c&hm=bf7017b870475ac7e79ac395888a66ff681a1b1b25d8666bacc5db84bad88520&)

จากรูปภาพ จะสังเกตได้ว่า code ทางซ้าย หรือ hi.h ได้มีการ สร้าง function ชื่อว่า yoloo และหากเรา include "hi.h"
เข้าไปที่ file .cpp ทางด้านขวา เราก็จะสามารถเรียกใช้ function ที่มีชื่อว่า yoloo ได้

## class 

class เปรียบเสมือนถ้าเราจะสร้าง template ตัวละคร โดยสามารถสร้าง class ไว้ที่ file .h หรือ .cpp ก็ได้ เช่น 

![codewowzaa](https://cdn.discordapp.com/attachments/784804366904590388/1073978280132231218/image.png?ex=65ec7637&is=65da0137&hm=bb6b5244fca25fffcfa1b4274ef731fbfe72474e14707a02e9b16dbb97ced9d5&)

จากในรูปนี้เราได้ทำการสร้าง class ที่ชื่อว่า person ขึ้นมา และ ประกาศให้ใน person มีค่าตัวเลข attack และ heatlh โดยประกาศไว้แบบ public (เรื่อง public private เดี่ยวค่อยอธิบาย) 

โดยเราสามารถ นำเอา class person นี้ไปสร้างตัวละครและตั้งชื่อให้กับตัวละครนั้นๆได้ เช่น 

![code4545](https://cdn.discordapp.com/attachments/784804366904590388/1073979528755564574/image.png?ex=65ec7761&is=65da0261&hm=709f991f34a8f055cefc64a8769ed0535d19656900ea42f873d7c745f3013125&)

จากรูปจะเสมือนว่าเราได้สร้างตัวละคร ชื่อว่า chokun โดยใน ตัวละคร chokun จะยังตัวแปร attack และ health อยู่ด้านใน โดยเราสามารถ assign หรือ ระบุ,ให้ค่าตัวแปรเหล่านั้นได้ผ่านวิธีนี้

![code656566](https://cdn.discordapp.com/attachments/784804366904590388/1073986771337089034/image.png?ex=65ec7e1f&is=65da091f&hm=c1a7710f14643e318e201f1f9fc1bf2e11f561723012d9ffff01bbf0393d40c0&)

จากรูปเรากำลังระบุว่า ให้ค่า attack ของ chokun = 10 และ ค่า heatlh = 100 และ ให้ค่า speak ของ chokun = hi โดยหลักการของการเพิ่ม เปรียบเสมือนกับเราพิม  chokun ตามด้วย . เพื่อเข้าถึงตัวแปรที่มีใน person chokun

โดยเรายังสามารถสร้างคนออกมาอีกคนกี่คนก็ได้ ด้วย class ของเรา เช่น 

![code455545](https://cdn.discordapp.com/attachments/784804366904590388/1073987885407146014/image.png?ex=65ec7f29&is=65da0a29&hm=ce428ec416619e2256c8951857891cd4f511ac6a989f48c82fb77e3b296612b5&)

เราได้สร้างคนอีกคนชื่อว่า jame และให้ค่า attack , heatlh และ speak กับ jame โดย ตัวแปรต่างๆ ของ chokun และ jame ไมเกี่ยวข้องใดๆกันเลย โดยเราจะสามารถดูค่าต่างๆ ของ แต่ละตัวแปรได้ดังนี้ 

![codepo](https://cdn.discordapp.com/attachments/784804366904590388/1073989311378243772/image.png?ex=65ec807d&is=65da0b7d&hm=127e36fd9d61ee7d907d4b72d877b640a1e9c2f6572dc0fd3db1b4395bd65cb1&)

จะได้ output ออกมา ดังนี้

![coded,g](https://cdn.discordapp.com/attachments/784804366904590388/1073989618292244500/image.png?ex=65ec80c6&is=65da0bc6&hm=d46dbec7023bb2142e05d23aba9b57a83c4cd4b61a7564f6181dec5ce41c0dc1&)


โดยเรายังสามารถสั้งให้ person หรือ คนของเรานั้นทำสิ่งต่างได้ได้ เช่น เดิน กิน หรือ นอน ผ่านการสร้าง function หรือ คำสั่ง ให้กับ class person ของเราได้อีกด้วย  

![code12122](https://cdn.discordapp.com/attachments/784804366904590388/1073992125911400498/image.png?ex=65ec831c&is=65da0e1c&hm=be576c22802c210790009269bffab4e5485867ae45c0d7ea6c45f70e6febe7c3&)

โดย output จะออกมาว่า 

![code466](https://cdn.discordapp.com/attachments/784804366904590388/1073992780432547900/image.png?ex=65ec83b8&is=65da0eb8&hm=90cc146c2a96b26a4ddd68b9f1ed00c5da6e314d08e920e8800e2f56606b1735&)


### การประกาศตัวแปรแบบ public กับ private

การประกาศตัวแปรกับ private ต่างกันอย่างไร (ความจริงยังมีการประกาศแบบ protect อีกแต่ ข้ามไปเถอะ)

#### หน้าตา

##### public

![code87787](https://cdn.discordapp.com/attachments/784804366904590388/1073993727917424640/image.png?ex=65ec849a&is=65da0f9a&hm=21617cc95866106efa0a96ca2a769d124036725e4248daf2a30a0cbfa6d26983&)

#### private

โดยการประกาศแบบ private สามารถประกาศได้ 2 รูปแบบคือ 
 
 1.
 ![codewv](https://cdn.discordapp.com/attachments/784804366904590388/1073994318664179812/image.png?ex=65ec8527&is=65da1027&hm=8c9f3a8c0607f880cfb2b5ec7b59d42fd5e8f1e66ccae00c7544f982348363d2&)

 2.
 ![codefsgbs](https://cdn.discordapp.com/attachments/784804366904590388/1073994542757462076/image.png?ex=65ec855c&is=65da105c&hm=f4e8c53d3e11b24e407a6f3c5c3905dce498c3b07b75119953b23cfb72141530&)

  โดยหน้าตาของการประกาศทั้งสองรูปแบบของ private คุณสมบัติไม่ต่างกัน 

  #### คุณสมบัติ

  - การประกาศแบบ public จะสามารถทำให้เราสามารถเข้าถึงตัวแปร ที่อยู่ใน class person จากที่ไหนก็ได้ เช่นรูปนี้

  ![codegrs]()

  แต่หากเราประกาศแบบ private จะได้หน้าตา เช่นนี้

  ![codedsv](https://cdn.discordapp.com/attachments/784804366904590388/1073995349263388784/image.png?ex=65ec861d&is=65da111d&hm=da5cd9d6439e77b32b55039a2b674328431e200e5c238afe2d10c6a00b8ef138&)


  ![codevsd](https://cdn.discordapp.com/attachments/784804366904590388/1073995436576211125/image.png?ex=65ec8631&is=65da1131&hm=81055ef38feb7c01a3efcd6b33a1f32716ae2cbc3c25f7449a8431ffd4a0b593&)

คือ เราไม่สามารถเข้าถึงตัวแปร private ได้จากที่ใดๆ เลย (inacessable) นอกจากใน class person เอง 
(เรามีการประกาศตัวแปรแบบ private เพื่อรักษาความปลอดภัยของข้อมมูล บลาๆๆๆๆๆๆๆๆๆ)

ดังนี้นหากต้องการ เข้าถึงข้อมูล เปลี่ยนข้อมูล ของตัวแปรที่มีการประกาศแบบ private ไว้ เราจึงต้องทำวิธีดังนี้

#### วิธีการเข้าถึงตัวแปรที่ประกาศแบบ private 

 เราต้องสร้าง function ที่เอาไว้เข้าถึงตัวแปรแบบ private ที่ใช้ในการรับค่า หรือ เปลี่ยนค่า ดังนี้

 ![code](https://cdn.discordapp.com/attachments/784804366904590388/1073997287149281400/image.png?ex=65ec87eb&is=65da12eb&hm=76a20e0c0e0edfb23c4a1e390afb5fc2410e657755e7fd98cd899956ce2d9389&)

 หมายความว่า เราได้สร้าง function ขึ้นมา 1 function ที่มีชื่อว่า set_attack โดย function นี้จะรับค่า newattack เข้ามา

 ![code](https://cdn.discordapp.com/attachments/784804366904590388/1073997802964783124/image.png?ex=65ec8866&is=65da1366&hm=8464f176815bdb8cd3627299598db3b56f764ecca27dc26cd01471be0e01b369&)

 และ นำค่านั้นเขามาใส่ในค่า attck ของ person นั้นๆ

 ![code](https://cdn.discordapp.com/attachments/784804366904590388/1073998069902880838/image.png?ex=65ec88a5&is=65da13a5&hm=8a3e68056bdedca1924999394d4b1f498ddbb50dbec3947e09a3276133c9ada3&)

 โดยเราสามารถเรียกใช้ได้ดังนี้ 

![code](https://cdn.discordapp.com/attachments/784804366904590388/1073998354645798932/image.png?ex=65ec88e9&is=65da13e9&hm=ec3f51fe95acd5c283c0689c9fe75f96d6ddac0a2828bf16b5e1224de096bfd1&)

เท่ากับว่าตอนนี้ ค่าattack ของ chokun มีค่าเท่ากับ 50 แต่ทว่าเราก็ไม่สามารถ ดึงหรือดูค่าเหล่านั้นได้ (ค่าเหล่านั้นเป็น private อยู่) 

ดังนั้นถ้าอยากดูเราจึงต้องสร้าง function ที่เอาไว้ดึงหรือดูค่าเหล่านั้นออกมา ดังนี้

![code](https://cdn.discordapp.com/attachments/784804366904590388/1073999099478675506/image.png?ex=65ec899b&is=65da149b&hm=fdbfbce78281f01cf6f77bce59149ea8a6446fcff7c6fdf9180ee7874b219ad9&)

(ความแตกต่างระหว่าง function ที่ขึ้นต้นว่า void กับ int คือ void function expect no return หรือ void function ไม่ต้องการให้ return ค่าใดๆ แต่ int function คือ ต้องการให้ return ค่ากลับไปเป็นค่า int)

โดยเราสามารถเรียกใช้ function เหล่านั้นอย่างนี้

![code](https://cdn.discordapp.com/attachments/784804366904590388/1074000083311411262/image.png?ex=65ec8a85&is=65da1585&hm=299c4d3509bc7c1be11fb6e322ef5222246c558fc35c757b22ca33b3a9869248&)

the output:

![code](https://cdn.discordapp.com/attachments/784804366904590388/1074000114672209981/image.png?ex=65ec8a8d&is=65da158d&hm=7ec985d597ebacf6d2e74ce921fc1779ac111b7c19e6fa603f347775f5846cb7&)

โดยตอนนี้เราได้ทำการสร้าง function ต่างๆ ใน class แล้ว แต่ทว่า ตามคำสั่งของ TA นั้นเขาต้องการให้ประกาศอีกแบบดังนี้

### ประกาศแบบที่ ta ต้องการ

คือ การที่เราเอา function เหล่านั้นมาประกาศว่าให้มันทำอะไรนอก class นั้นๆ แต่ยังต้องมีการประกาศเอาไว้ว่าใน class นั้นๆ มี function นั้นๆ อยู่ ดังนี้

 ![code](https://cdn.discordapp.com/attachments/784804366904590388/1074001843505598634/image.png?ex=65ec8c29&is=65da1729&hm=ebcffe535e9f2d9e9f2e14a7b1785056f86e8103112dade4c55aa03bab4aab34&)

 โดยเริ่มจากรูปทางด้านขวา

 ![code](https://cdn.discordapp.com/attachments/784804366904590388/1074001986430718062/image.png?ex=65ec8c4b&is=65da174b&hm=d0c19fd7b4da032856b934e7979b0d281e76cb45ea87e8d86803c5d19930b048&)

 โดยเรามี class person ที่เราบอกให้คอมพิวเตอร์รู้ว่า มี function ที่ชื่อว่า set_attack อยู่ใน class นี้แต่ยังไม่บอกว่า function นี้ทำอะไร

โดยเรามาบอกที่ file .cpp ทางด้านซ้ายตามรูปนี้

![code](https://cdn.discordapp.com/attachments/784804366904590388/1074002620957601802/image.png?ex=65ec8ce2&is=65da17e2&hm=5af869f1e49fc1994bcbc22f7d17f7cdc4fa67961c92a85b08e05ced38625be7&)

เราบอกคอมพิวเตอร์ว่าให้ไปหา function ที่ชื่อว่า set_attack ที่อยู่ใน class person และ บอกว่า ให้ function นั้นๆทำอะไร

![code](https://cdn.discordapp.com/attachments/784804366904590388/1074003445717147728/image.png?ex=65ec8da7&is=65da18a7&hm=43969d4605d0aeb89b077500248d0e9c1e69dd9b538bace5266b9e179a5dffb3&)

(ประโยคที่ เขียนว่า person::set_attack หมายความว่า ไปหา
function ที่ชื่อว่า set_attack ที่อยู่ใน class person ที่เราเขียนเอาไว้)

โดยเมื่อเสร็จแล้วจะหน้าตาประมาณนี้

![code](https://cdn.discordapp.com/attachments/784804366904590388/1074007195328467014/image.png?ex=65ec9125&is=65da1c25&hm=8f67dab16f6a260c3b3b5d12bf21c01d13ec503daef6e2fc5b0928b9a61d682c&)

ซึ้งทำงานได้ไม่ต่างกับ code นี้

![code](https://cdn.discordapp.com/attachments/784804366904590388/1074007533779423312/image.png?ex=65ec9176&is=65da1c76&hm=28685b1939442cf6e4a497e55f0e23ec2d0ad8855467d916c353e248d8702f42&)



