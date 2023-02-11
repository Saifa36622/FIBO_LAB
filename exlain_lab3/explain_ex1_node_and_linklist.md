## Node and linklisted

linklisted และ node คืออะไร 

![code12](https://media.discordapp.net/attachments/784804366904590388/1074030131280097291/image.png?width=757&height=437)

ทั้งก้อนที่เชื่อมกันอยู่คือ linkisted ส่วนแต่ละบล็อค คือแต่ละ node พูดง่ายๆ คือ linklisted คือก้อนหรือเบล็อคข้อมูลที่เขื่อต่อกันอยู่ โดยมีก้อนหรือบล็อคสุดท้ายที่ชี้ไปที่ null เสมอ

### Node หรือเบล็อคข้อมูล หรือ class น้ันเอง

 ตามปกติแล้วเราสามารถกำหนดให้ node ละ node มีข้อมูลอะไรก็ได้ แต่โดยทั่วไปจะมีอยู่ 2 ข้อมูลด้านใน คือ ข้อมูลในกล่อง และ สิ่งที่ node นั้นๆจะชี้ไป

 ![code](https://media.discordapp.net/attachments/784804366904590388/1074036745311633539/image.png?width=732&height=437)

 โดยจากรูป 
 data = ข้อมูลที่อยู่ด้านใน และ next คือที่ที่ node นั้นๆจะชี้ไป โดย node สามารถชี้ไปที่ node อื่นๆ หรือ ชี้ไปที่ null ก็ได้ 

 ![code123](https://media.discordapp.net/attachments/784804366904590388/1074037908832526410/image.png?width=680&height=437)

โดยหากเราอยากเขียน code เพื่อสร้าง node ขึ้นมา 1 กล่อง ก็คือการสร้าง class ขึ้นมานั้นเอง โดยจะให้ class ตัวนี้ชื่ออะไรก็ได้

![code](https://media.discordapp.net/attachments/784804366904590388/1074038486585323530/image.png)

ดังรูป เรามี class หรือ กล่องข้อมูลสำหรับใส่ข้อมูล โดยด้านในให้เก็บข้อมูลไว้ 2 อย่างคือ 1. value หรือ ข้อมูลภายในกล่อง โดยจาก code นี้ได้เก็บข้อมูลในรูปแบบตัวเลขจำนวนเต็ม หรือ int และ 2.next หรือ ที่ที่ต้องการให้กล่องนี้ชี้ไป (รูปด้านบนเป็นการสร้าง class ที่ file .h)

#### construct หรือ โครงสร้างของ node หรือ class ตัวนี้

หมายถึงขณะที่เราสร้าง node ตัวนี้เราอยากให้ node หรือ กล่องตัวนี้มีข้อมูลเป็นอย่างไรบ้าง โดยเราต้องเพิ่ม constuct เข้าไปที่ class ของเราก่อน ดังรูป (โดย ta สั้งไว้ว่า ให้ประกาศเป็นแบบ private และ เหตุผลที่เราต้องมานั้งลำบากสร้าง function กันก็เพราะเป็น private นี่แหละ)

![code](https://media.discordapp.net/attachments/784804366904590388/1074040315129901226/image.png)

(code ต่อไปนี้อยู่ที่ file .cpp อีกอัน) จากนั้นเราก็จะมาระบุว่าขณะที่เราสร้าง node ตัวนี้เราต้องการค่าอะไรบ้าง

![code](https://media.discordapp.net/attachments/784804366904590388/1074039967002673183/image.png)

(เดี่ยวแนบรูปตอนสร้างไว้ให้ด้านล่าง)

รูปด้านบนสังเกตว่า จะมีการสร้าง constuct 2 ตัว คือ hi ที่อยู่ด้านบนและด้านล่าง โดยตัว hi ด้านบน หมายถึงหากตอนเราสั้งให้สร้าง node ขึ้นมาแล้วไม่ได้กรอกอะไร hi ด้านบนจะเป็นข้อมูล default ให้กล่องใบนั้นคือ มีค่า = 0 และ ชี้ไปที่null แต่หากระบุค่าเข้ามาตอนสร้าง ก็จะนำค่าพวกนั้นเขามาใส่ไว้ใน ข้อมูล value และ next ที่ถูกประกาศเป็น private เอาไว้

![code](https://media.discordapp.net/attachments/784804366904590388/1074041979924652152/image.png)

โดยหลักการของการสร้าง node ก็เหมือนกับหลักการการสร้างตัวแปรทั่วไป เช่น 

![code](https://media.discordapp.net/attachments/784804366904590388/1074043164022812712/image.png?width=454&height=437)

หน้าตาของ code จริงๆ 

![code](https://media.discordapp.net/attachments/784804366904590388/1074041979924652152/image.png)

โดยสังเกตว่าในบรรทัดแรกได้มีการประกาศให้กล่องใบแรกมีชื่อว่ากล่อง wow แต่เราไม่ได้ระบุอะไรเข้าไปทำให้ในตอนนี้กล่องที่มีชื่อว่า wow นั้น เป็นกล่องเปล่าที่มีค่า 0 และ ชี้ไปที่ NULL ตามที่ใส่ไว้ที่ constuct อันแรก
แต่กล่องที่ 2 ที่ชื่อว่า zaa นั้นเราได้ระบุค่าเอาไว้ โดยให้ค่าในกล่อง = 5 และ ชื้ไปที่ NULL ดังรูป

![code](https://media.discordapp.net/attachments/784804366904590388/1074044392257618050/image.png?width=626&height=437)

### การสร้าง function get และ set 

 เพื่อเข้าไปปรับหรือแก้ไขข้อมูลที่เป็นข้อมูลแบบ private ใน class หรือ node นั้นๆ (อ้างอิงจาก basic_header_and_class)

![code](https://media.discordapp.net/attachments/784804366904590388/1074045833055580360/image.png)
 
 โดยเราก็สร้าง function ที่สามารถเข้าไปปรับเปลี่ยนหรือดึงค่าจากใน class เหมือนเดิม
 โดยสิ่งที่ต้องเพิ่มเติมคือ เนื่องจาก ในnode หรือ ใน class ของเราไม่ได้มีตัวแปรแแค่ 1 ตัว แต่ยังมรตัวแปร next(ตัวแปรที่ใช้บอกว่า กล่องนี้ชี้ไปที่ไหน) อีก เราจึงต้องสร้าง funxtion สำหรับ เปลี่ยนค่าหรือรับค่า ตัวแปร next โดยอ้างอิงหลักการเดียวกับการ เปลี่ยนหรือรับค่า value เพียงแต่เปลี่ยนเป็นตัวแปร next  

 ![code](https://media.discordapp.net/attachments/784804366904590388/1074046951475126373/image.png)

 โดยที่ function get_next เราจะรับค่า เป็น node เราจึงประกาศว่า hi hi::get_next 

 โดยต่อมาจะเป็นหน้าตาของ code โดยรวม

 wowzaa.h

![code](https://media.discordapp.net/attachments/784804366904590388/1074047612191260783/image.png?width=344&height=437)

hi.cpp

![code](https://media.discordapp.net/attachments/784804366904590388/1074047836552970290/image.png?width=348&height=437)

![code](https://media.discordapp.net/attachments/784804366904590388/1074047882061152376/image.png)

โดยในส่วนต่อไปจะเป็นการสั่งใช้งาน หรือ main

หน้าตาของ code main โดยรวม

![code](https://media.discordapp.net/attachments/784804366904590388/1074048361553997895/image.png?width=712&height=437)

โดย 2 บรรทัดแรกเป็นเสมือนการสร้างกล่องขึ้นมา 2 ใบ ชื่อว่า wow และ zaa ตามที่เคยได้อธิบายไปดังรูป

![code](https://media.discordapp.net/attachments/784804366904590388/1074044392257618050/image.png?width=626&height=437)

จากนั้น อีก 2 บรรทัดต่อมา คือ 

![code](https://media.discordapp.net/attachments/784804366904590388/1074048768195960977/image.png)

หมายความว่าเราได้ set ค่ากล่อง wow และ กล่อง zaa ใหม่ ดังรูป

![code](https://media.discordapp.net/attachments/784804366904590388/1074049208547561572/image.png?width=618&height=437)

จากนั้นเราก็ได้ทำการ getvalue หรือ ดีงค่าของ wowมาเก็บที่ตัวแปร x และ ค่าของ zaa มาเก็บไว้ที่ตัวแแปร y

![code](https://media.discordapp.net/attachments/784804366904590388/1074049580620070912/image.png)

และ บรรทัดนี้คือ การ print ค่า x และ y ออกมา ดังภาพ

![code](https://media.discordapp.net/attachments/784804366904590388/1074049897159991306/image.png)

the output:

![code](https://media.discordapp.net/attachments/784804366904590388/1074049937223995544/image.png)

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