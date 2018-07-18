# directory

How to run the code
gcc main.c
./a.out

Capability
a. Insert:insert one data，Type:i,studentID,name,phone,age
Example:i,400410026,henry,0912563563,20
Print the inserted data, failure that data exist already.

b. Delete:delete the student data，Type:d,studentID
Example:d,400410026
成功會印出刪除的資料，如果StudentID不存在則印出失敗訊息。
c. Update:更新某筆學生ID的資料，
Type:u,old studentID,new studentID,name,phone,age
Example:u,400410026,400410026,henry,0912022283,20
成功會印出更新的資料，如果StudentID不存在則印出失敗訊息。
d. Find:search the data，Type:f,string
 成功會印出找到的資料，及其他內容。
e. List:印出目前所有資料內容，Type:l
f. Sort:sort the data，格式:s,studentID/name/phone/age
 Example:s,studentID
 成功會依照studentID排序並印出結果，字串依照ACSII、數字則依照大小遞增排序。
g. Write:將資料寫入檔案，每筆資料需換行(\n)每個欄位以逗號區隔。
 Type:w,檔名
h. Quit:結束程式。
 Type:q
