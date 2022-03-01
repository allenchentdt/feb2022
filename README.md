Đề bài
Cho một mảng các số nguyên A. 
Với hai phần tử A[i] và A[j] của mảng, bạn có thể đổi chỗ hai phần tử cho nhau nếu ước chung lớn nhất ƯCLN(A[i], A[j]) > 1.
Xác định xem có thể sắp xếp lại mảng A theo thứ tự tăng dần sử dụng cách đổi chỗ như trên.


Đầu vào
Dòng đầu tiên T là số test case
T dòng tiếp theo, mỗi dòng chứa mảng các số nguyên A
Đầu ra
True/ False cho mỗi test case

Ràng buộc
1 <= size(A) <= 3 * 10^4
2 <= A[i] <= 10^5

Yêu cầu:
Mã nguồn phải có phần đọc input từ file: input.txt
Output được ghi vào file output.txt

Ví dụ:
Input:
2
32 4 16
7 3 9 12
Output: 
True
False
Giải thích: 
Test case 1:
ƯCLN(32, 4) = 4 > 1 -> đổi chổ 32 và 4 ta có mảng [4, 32, 16]
ƯCLN(32, 16) = 16 > 1 đổi chỗ 32 và 16 ta có mảng [4, 16, 32]
Output: True
Test case 2:
Output: False vì 7 không thể đổi cho bất cứ số nào khác trong mảng
