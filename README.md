# Thử nghiệm các thuật toán sắp xếp

Bài tập thử nghiệm QuickSort, HeapSort, MergeSort và hàm `sort` của C++ trên
10 dãy, mỗi dãy gồm 1.000.000 số thực.

**Sinh viên:** Nguyễn Bảo Tiến Phát  
**MSSV:** 25521363  
**Lớp:** IT003.R17

## Bộ dữ liệu

- Dãy 1 có thứ tự tăng dần.
- Dãy 2 có thứ tự giảm dần.
- Dãy 3 đến dãy 10 có thứ tự ngẫu nhiên.
- Các chương trình sử dụng cùng cách tạo dữ liệu và cùng seed.

## Mã nguồn

- [`quick_sort.cpp`](quick_sort.cpp): QuickSort.
- [`heap_sort.cpp`](heap_sort.cpp): HeapSort.
- [`merge_sort.cpp`](merge_sort.cpp): MergeSort.
- [`cpp_sort.cpp`](cpp_sort.cpp): hàm `sort` của C++.

Mỗi file là một chương trình độc lập. Thời gian sắp xếp của từng bộ dữ liệu
được đo trực tiếp trong `main` bằng hàm `clock()` và in ra terminal.

## Biên dịch và chạy

Ví dụ với QuickSort trong Developer Command Prompt của Visual Studio:

```bat
build_and_run.cmd quick_sort.cpp quick_sort
```

Các chương trình còn lại chạy bằng những lệnh sau:

```bat
build_and_run.cmd heap_sort.cpp heap_sort
build_and_run.cmd merge_sort.cpp merge_sort
build_and_run.cmd cpp_sort.cpp cpp_sort
```

Tệp `build_and_run.cmd` biên dịch chương trình bằng MSVC với tùy chọn `/O2` rồi
chạy file `.exe` trong thư mục `build`. Kết quả dùng trong báo cáo là trung bình
của 3 lần chạy cho từng thuật toán. Thời gian có thể dao động nhẹ tùy tải của máy.

## Kết quả và báo cáo

- [`results.csv`](results.csv): bảng kết quả thử nghiệm.
- [`charts/sorting_times.png`](charts/sorting_times.png): biểu đồ so sánh.
- [`Sorting_Report_Template.docx`](report/Sorting_Report_Template.docx): báo cáo Word.
- [`Sorting_Report_25521363_Final.pdf`](report/Sorting_Report_25521363_Final.pdf): báo cáo PDF dùng để nộp.

Khoảng thời gian được đo chỉ bao gồm thao tác sắp xếp, không bao gồm thời gian
tạo bộ dữ liệu.
