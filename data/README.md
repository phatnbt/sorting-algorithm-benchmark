# Dữ liệu thử nghiệm

Chương trình tạo 10 dãy, mỗi dãy có 1.000.000 số thực bằng một vòng `for`.

- Dãy 1 dùng công thức `a[i] = i` nên tăng dần.
- Dãy 2 dùng công thức `a[i] = n - i` nên giảm dần.
- Dãy 3 đến dãy 10 dùng `rand()` để tạo giá trị ngẫu nhiên trong đoạn
  `[-1.000.000, 1.000.000]`.

Seed của các dãy ngẫu nhiên được ghi trong `datasets.csv`. Chạy chương trình sẽ
tạo lại dữ liệu trong bộ nhớ và in thời gian thực hiện ra terminal.
