# 💻 ĐO THỜI GIAN THUẬT TOÁN 💻
## ⏰ 1. Tổng quan chương trình 

✍️ Cấu trúc file được chia làm 3 thư mục + 1 file dữ liệu: 
1. **algo**: Thư mục chứa các file chương trình: selection_sort.cpp, insertion_sort.cpp, qsort.cpp, merge_sort.cpp 
2. **gen**: Thư mục chứa các chương trình sinh test 
3. **output**: Thư mục chứa kết quả của từng file sinh test 
4. **input.inp**: File dữ lieuj - nơi ghi dữ liệu cho input sinh ra từ các file gen. 

## ⏰ 2. Cách thức hoạt động 
Các file **gen.cpp** được đánh số thứ tự từ 1 - 4. Tương ưng với đặc điểm của từng bộ test cases. Mỗi file **gen.cpp** sẽ tồn tại 1 file **output.out** tương ứng trong thư mục `output` 

-  👍`1`: Các phần tử test case được sắp xếp ngẫu nhiên (**Randomized data**) -> `output1.out`
-  👍 `2`: Các phần tử test case được sắp xếp tăng dần (**Sorted data**) -> `output2.out`
-  👍 `3`: Các phần tử test case được sắp xếp giảm dần (**Reverse Sorted data**) -> `output3.out`
-  👍 `4`: Các phần tử test case được sắp xếp tăng dần ở nửa đầu, ngẫu nhiên ở nửa sau (**Nearly sorted data**) -> `output4.out`

🗺️ **Sơ đồ hoạt động:**

1. Giả sử 1 file gen được khởi động. Sinh các `test case` tương ứng vào file `input.txt` 
2. File `gen` gọi các chương trình trong thư mục `algo` (gọi tăt là thuật toán)  
3. Các file `thuật toán` đoc dữ liệu từ file input và thực hiện sắp xếp testcase từ file `input` đó 
4. Chương trình `gen` sẽ đo thời gian chạy của từng `file thuật toán` và trả kết quả về file `output` tương ứng với file 
`gen` đó. 


```md
Ví dụ: 

File gen1.cpp đợc khởi động. Sẽ tiến hành sinh các test case là các mảng có thứ tự các phần tử ngẫu nhiên. 
Dữ liệu các mảng đó dược đẩy vào file input.txt. 

Sau đó, chương trình gen1.cpp sẽ tiến hành gọi 4 file thuật 
toán trong thư mục algo, đọc mảng từ file input.txt và sắp xếp mảng đó. Đồng thời, gen1.cpp cũng sẽ gọi hàm đo 
thời gian để đo thời gian chạy của từng thuật toán. 

Cuối cùng, kết quả được ghi ra file output1.out (file output tương ứng với gen1.cpp)
```

## ⏰ 3. Cách sử dụng project 
🧰 Chạy lệnh `./gen[number].cpp`. Kiểm tra dữ liệu in ra tại file `output[number].out` tương ứng. 

>Trong đó, number là số hiệu của file gen đã nêu trong phần 2 (number = 1,2,3 or 4)

```md
Ví dụ: 

Ta muốn sinh dữ liệu cho *randomized data* thì tiến hành chạy file gen1.cpp bằng lênh **./gen1.cpp** 

Muốn sinh dữ liệu cho *sorted data* thì chạy file gen2.cpp bằng lệnh **./gen2.cpp**
```

🧰 Trong trường hợp chạy không dược. Thử xóa tất cả các file chương trình (.exe nếu có cái đuôi này, k thì xóa mấy file k có duôi ấy). Rồi compile lại bằng tay
