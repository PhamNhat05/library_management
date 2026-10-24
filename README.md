# Quản lý thư viện (C++ Console)

Chương trình console bằng C++ quản lý sách của một thư viện, dữ liệu lưu trong file CSV.
Đây là dự án năm nhất, menu điều khiển bằng phím mũi tên.

## Chức năng

1. **Thông tin sách**: hiển thị bảng toàn bộ sách (mã số, tên sách, tác giả, nhà xuất bản, giá, số lượng).
2. **Quản lý trạng thái**
   - Chỉnh sửa thông tin sách theo mã số sách.
   - Thêm sách từ một file CSV khác.
   - Xoá sách theo danh sách trong một file CSV khác.
3. **Chức năng tiện ích**
   - Tìm sách theo tên tác giả.
   - Tìm sách theo tên sách.
   - Lọc theo nhà xuất bản.
   - Kiểm tra tình trạng sách (còn hay hết).
4. **Thoát**

## Cấu trúc thư mục

```
library-management/
├── src/
│   ├── Main.cpp       # Hàm main, vòng lặp menu chính và điều hướng chức năng
│   ├── Design.cpp     # Giao diện menu và các hàm console (gotoxy, màu chữ, ẩn/hiện con trỏ)
│   ├── xuli.h         # Class BookParent, đọc/ghi CSV, tìm kiếm, thêm, xoá, sửa dữ liệu
│   └── setting.h      # Hằng số cấu hình giao diện
├── data/
│   └── BOOKDATA.csv   # Dữ liệu sách
├── .gitignore
└── README.md
```

Các cột trong `BOOKDATA.csv`: Mã sách, Tên sách, Tên tác giả, Nhà xuất bản, Lần tái bản, Số trang, Giá, Số lượng.

## Yêu cầu

- **Windows** (code dùng `windows.h` và `conio.h`).
- Trình biên dịch g++ (MinGW) hoặc Dev-C++.
- Nên phóng to cửa sổ console, vì bảng sách được căn giữa theo chiều rộng 156 cột.

## Biên dịch và chạy

`Main.cpp` và `Design.cpp` được biên dịch cùng nhau. Chương trình đọc `BOOKDATA.csv` theo đường dẫn tương đối nên cần chạy từ thư mục `data/`.

```bash
mkdir build
g++ src/Main.cpp src/Design.cpp -o build/QLTV.exe
cd data
../build/QLTV.exe
```

## Cách dùng

- Menu chính: mũi tên lên/xuống để di chuyển rồi nhấn **Enter** để chọn.
- Các menu con ("Quản lý trạng thái", "Chức năng tiện ích"): nhập số thứ tự chức năng rồi nhấn Enter.
- Sau mỗi chức năng, nhấn mũi tên trái để quay lại.
- Khi thêm hoặc xoá sách bằng file khác, file đó cần có cùng định dạng với `BOOKDATA.csv` (dòng đầu là tiêu đề).

## Hướng phát triển

- Kiểm tra dữ liệu đầu vào và xử lý lỗi khi đọc file.
- Tìm kiếm không phân biệt hoa thường và tìm theo từ khoá một phần.
- Thêm chức năng mượn/trả sách để số lượng hiện tại thay đổi theo thực tế.
