## Node and linklisted

linklisted และ node คืออะไร 

![code12](https://cdn.discordapp.com/attachments/784804366904590388/1074030131280097291/image.png?ex=65eca681&is=65da3181&hm=130220ec6df64de42d28f1da763cdd4df2bbf4ad0aa2677e5e92c87cea61968a&)

ทั้งก้อนที่เชื่อมกันอยู่คือ linkisted ส่วนแต่ละบล็อค คือแต่ละ node พูดง่ายๆ คือ linklisted คือก้อนหรือเบล็อคข้อมูลที่เขื่อต่อกันอยู่ โดยมีก้อนหรือบล็อคสุดท้ายที่ชี้ไปที่ null เสมอ

### Node หรือเบล็อคข้อมูล หรือ class น้ันเอง

 ตามปกติแล้วเราสามารถกำหนดให้ node ละ node มีข้อมูลอะไรก็ได้ แต่โดยทั่วไปจะมีอยู่ 2 ข้อมูลด้านใน คือ ข้อมูลในกล่อง และ สิ่งที่ node นั้นๆจะชี้ไป

 ![code](https://cdn.discordapp.com/attachments/784804366904590388/1074036745311633539/image.png?ex=65ecacaa&is=65da37aa&hm=7614e39127d6d8df5fac26a5d4cf58daa9eceea4584bba696da53c5fb803200c&)

 โดยจากรูป 
 data = ข้อมูลที่อยู่ด้านใน และ next คือที่ที่ node นั้นๆจะชี้ไป โดย node สามารถชี้ไปที่ node อื่นๆ หรือ ชี้ไปที่ null ก็ได้ 

 ![code123](https://cdn.discordapp.com/attachments/784804366904590388/1074037908832526410/image.png?ex=65ecadc0&is=65da38c0&hm=64466bb28c4e1f564a10bd34516bf363351d67c8fccff461f357b30eec709f01&)

โดยหากเราอยากเขียน code เพื่อสร้าง node ขึ้นมา 1 กล่อง ก็คือการสร้าง class ขึ้นมานั้นเอง โดยจะให้ class ตัวนี้ชื่ออะไรก็ได้

![code](https://cdn.discordapp.com/attachments/784804366904590388/1074038486585323530/image.png?ex=65ecae49&is=65da3949&hm=8572c0496958384154915ca8b126d0e29888d0620ad445962d7ba8d9c85478dc&)

ดังรูป เรามี class หรือ กล่องข้อมูลสำหรับใส่ข้อมูล โดยด้านในให้เก็บข้อมูลไว้ 2 อย่างคือ 1. value หรือ ข้อมูลภายในกล่อง โดยจาก code นี้ได้เก็บข้อมูลในรูปแบบตัวเลขจำนวนเต็ม หรือ int และ 2.next หรือ ที่ที่ต้องการให้กล่องนี้ชี้ไป (รูปด้านบนเป็นการสร้าง class ที่ file .h)

#### construct หรือ โครงสร้างของ node หรือ class ตัวนี้

หมายถึงขณะที่เราสร้าง node ตัวนี้เราอยากให้ node หรือ กล่องตัวนี้มีข้อมูลเป็นอย่างไรบ้าง โดยเราต้องเพิ่ม constuct เข้าไปที่ class ของเราก่อน ดังรูป (โดย ta สั้งไว้ว่า ให้ประกาศเป็นแบบ private และ เหตุผลที่เราต้องมานั้งลำบากสร้าง function กันก็เพราะเป็น private นี่แหละ)

![code](https://cdn.discordapp.com/attachments/784804366904590388/1074040315129901226/image.png?ex=65ecaffd&is=65da3afd&hm=062199e8fc5eac8a5779fd3b990311a8c54cd58368205d1a15d12e2b69b04437&)

(code ต่อไปนี้อยู่ที่ file .cpp อีกอัน) จากนั้นเราก็จะมาระบุว่าขณะที่เราสร้าง node ตัวนี้เราต้องการค่าอะไรบ้าง

![code](https://cdn.discordapp.com/attachments/784804366904590388/1074039967002673183/image.png?ex=65ecafaa&is=65da3aaa&hm=2662093b7396414b529867dbd692e2e758d5ee30780c9b9be4d0162f2549242b&)

(เดี่ยวแนบรูปตอนสร้างไว้ให้ด้านล่าง)

รูปด้านบนสังเกตว่า จะมีการสร้าง constuct 2 ตัว คือ hi ที่อยู่ด้านบนและด้านล่าง โดยตัว hi ด้านบน หมายถึงหากตอนเราสั้งให้สร้าง node ขึ้นมาแล้วไม่ได้กรอกอะไร hi ด้านบนจะเป็นข้อมูล default ให้กล่องใบนั้นคือ มีค่า = 0 และ ชี้ไปที่null แต่หากระบุค่าเข้ามาตอนสร้าง ก็จะนำค่าพวกนั้นเขามาใส่ไว้ใน ข้อมูล value และ next ที่ถูกประกาศเป็น private เอาไว้

![code](https://cdn.discordapp.com/attachments/784804366904590388/1074041979924652152/image.png?ex=65ecb18a&is=65da3c8a&hm=6f6b70ccb2e1b773091a0a688de850c9235e28d056c94d8a447c0610ef26a920&)

โดยหลักการของการสร้าง node ก็เหมือนกับหลักการการสร้างตัวแปรทั่วไป เช่น 

![code](https://cdn.discordapp.com/attachments/784804366904590388/1074043164022812712/image.png?ex=65ecb2a5&is=65da3da5&hm=11d25e47824cdfd6288841cfc5568ecd0425671ee4db9e03a6c8b63b6dac888e&)

หน้าตาของ code จริงๆ 

![code](https://cdn.discordapp.com/attachments/784804366904590388/1074041979924652152/image.png?ex=65ecb18a&is=65da3c8a&hm=6f6b70ccb2e1b773091a0a688de850c9235e28d056c94d8a447c0610ef26a920&)

โดยสังเกตว่าในบรรทัดแรกได้มีการประกาศให้กล่องใบแรกมีชื่อว่ากล่อง wow แต่เราไม่ได้ระบุอะไรเข้าไปทำให้ในตอนนี้กล่องที่มีชื่อว่า wow นั้น เป็นกล่องเปล่าที่มีค่า 0 และ ชี้ไปที่ NULL ตามที่ใส่ไว้ที่ constuct อันแรก
แต่กล่องที่ 2 ที่ชื่อว่า zaa นั้นเราได้ระบุค่าเอาไว้ โดยให้ค่าในกล่อง = 5 และ ชื้ไปที่ NULL ดังรูป

![code](https://cdn.discordapp.com/attachments/784804366904590388/1074044392257618050/image.png?ex=65ecb3c9&is=65da3ec9&hm=0f2251363a10eac185e3f7277c7ffc9b60023733ad9ba1bed9f4484ba7e20ab0&)

### การสร้าง function get และ set 

 เพื่อเข้าไปปรับหรือแก้ไขข้อมูลที่เป็นข้อมูลแบบ private ใน class หรือ node นั้นๆ (อ้างอิงจาก basic_header_and_class)

![code](https://cdn.discordapp.com/attachments/784804366904590388/1074045833055580360/image.png?ex=65ecb521&is=65da4021&hm=02787bd06e382bd59df2c9228cf6127c82c7b32784a37f3b6421f3e3f456882c&)
 
 โดยเราก็สร้าง function ที่สามารถเข้าไปปรับเปลี่ยนหรือดึงค่าจากใน class เหมือนเดิม
 โดยสิ่งที่ต้องเพิ่มเติมคือ เนื่องจาก ในnode หรือ ใน class ของเราไม่ได้มีตัวแปรแแค่ 1 ตัว แต่ยังมรตัวแปร next(ตัวแปรที่ใช้บอกว่า กล่องนี้ชี้ไปที่ไหน) อีก เราจึงต้องสร้าง function สำหรับ เปลี่ยนค่าหรือรับค่า ตัวแปร next โดยอ้างอิงหลักการเดียวกับการ เปลี่ยนหรือรับค่า value เพียงแต่เปลี่ยนเป็นตัวแปร next  

 ![code](https://cdn.discordapp.com/attachments/784804366904590388/1074046951475126373/image.png?ex=65ecb62c&is=65da412c&hm=655f3627569ceec5fa77a9052053493e9ca1b06c3c7c345168db2f64866f9a21&)

 โดยที่ function get_next เราจะ return ค่าเป็น node เราจึงประกาศว่า hi hi::get_next 

 โดยต่อมาจะเป็นหน้าตาของ code โดยรวม

 wowzaa.h

![code](https://cdn.discordapp.com/attachments/784804366904590388/1074047612191260783/image.png?ex=65ecb6c9&is=65da41c9&hm=a4c8a38f2f1d46ff42da6036a98377fe1cefd5556219db41fb05d6d61f6ebd43&)

hi.cpp

![code](https://cdn.discordapp.com/attachments/784804366904590388/1074047836552970290/image.png?ex=65ecb6ff&is=65da41ff&hm=5c4981b5a8b3b51a83a788ca4ba7eeca29cc1080dbe88980abf2d5ffe546c9e4&)

![code](https://cdn.discordapp.com/attachments/784804366904590388/1074047882061152376/image.png?ex=65ecb709&is=65da4209&hm=9678254dea162ebc867d9b65c2a515a77d94ef8cdbfb7fe7e1ee0a2ed3c1b1bf&)

โดยในส่วนต่อไปจะเป็นการสั่งใช้งาน หรือ main

หน้าตาของ code main โดยรวม

![code](https://cdn.discordapp.com/attachments/784804366904590388/1074048361553997895/image.png?ex=65ecb77c&is=65da427c&hm=898977cecbc8638f950a29aeb5dbc13e34fdc55979c301ff12262b2c5822a58f&)

โดย 2 บรรทัดแรกเป็นเสมือนการสร้างกล่องขึ้นมา 2 ใบ ชื่อว่า wow และ zaa ตามที่เคยได้อธิบายไปดังรูป

![code](https://cdn.discordapp.com/attachments/784804366904590388/1074048768195960977/image.png?ex=65ecb7dd&is=65da42dd&hm=4df8fb89d74db1ee9a524b77fe3a4f7fc8bedc43e4eddcefc847479ff5d8632d&)

จากนั้น อีก 2 บรรทัดต่อมา คือ 

![code](https://cdn.discordapp.com/attachments/784804366904590388/1074049208547561572/image.png?ex=65ecb846&is=65da4346&hm=8fd3cdcf1608b0028544648020ef5d323cc76d9743be6f5dc6ca6a1684105611&)

หมายความว่าเราได้ set ค่ากล่อง wow และ กล่อง zaa ใหม่ ดังรูป

![code](https://cdn.discordapp.com/attachments/784804366904590388/1074049208547561572/image.png?ex=65ecb846&is=65da4346&hm=8fd3cdcf1608b0028544648020ef5d323cc76d9743be6f5dc6ca6a1684105611&)

จากนั้นเราก็ได้ทำการ getvalue หรือ ดีงค่าของ wowมาเก็บที่ตัวแปร x และ ค่าของ zaa มาเก็บไว้ที่ตัวแแปร y

![code](https://cdn.discordapp.com/attachments/784804366904590388/1074049580620070912/image.png?ex=65ecb89e&is=65da439e&hm=8c6e9b3ed8db95d58e03de2cff4cb3726f8aa85a7a3d630c8e7cbd46d04c1a67&)

และ บรรทัดนี้คือ การ print ค่า x และ y ออกมา ดังภาพ

![code](https://cdn.discordapp.com/attachments/784804366904590388/1074049897159991306/image.png?ex=65ecb8ea&is=65da43ea&hm=c1c1c0fa372baaae05b635e510d58ec7fc7581707e1108b1b0e823b297779ee1&)

the output:

![code](https://cdn.discordapp.com/attachments/784804366904590388/1074049937223995544/image.png?ex=65ecb8f3&is=65da43f3&hm=a3a9299fcdc801d22513b19b551b754bcdb34d1f6b226e95dc993c8757a3431c&)

โดยต่อมา บรรทัดนี้

![code](https://media.discordapp.net/attachments/784804366904590388/1074050591627681812/image.png)

เป็นการบ่งบอกว่า ให้กล่อง wow นั้นชี้ไปที่ที่อยู่ของกล่อง zaa หรือ ชี้ไปที่กล่อง zaa นั้นเอง

![code](https://media.discordapp.net/attachments/784804366904590388/1074050977319096411/image.png?width=571&height=437)

และจากนั้นคือ การพิสูจน์ว่า function ของเรานั้นใช้ได้ไหมโดยการสร้างกล่องอีกใบมาเก็บข้อมูล ของกล่องที่อยู่ต่อจาก กล่อง wowเอาไว้ 

![code](https://media.discordapp.net/attachments/784804366904590388/1074051450981843144/image.png)

![code](https://media.discordapp.net/attachments/784804366904590388/1074051760739581972/image.png?width=677&height=437)

จากนั้น(ลืมอธิบาย function print)

function print 

![code](https://media.discordapp.net/attachments/784804366904590388/1074052031817453680/image.png)

คือ การprint เอาค่า value ใน node นั้นๆ ออกมา

จากนั้น เราจึงสั่ง print temp ออกมา 

![code](https://media.discordapp.net/attachments/784804366904590388/1074052420033859725/image.png)

![code](https://media.discordapp.net/attachments/784804366904590388/1074052553723088896/image.png)






