Hướng tiếp cận Quy hoạch động
- Thuật toán sử dụng 1 vòng lặp for từ độ dài hiện tại của vector fibo tới số n.
- Trong mỗi lần lặp, ta thực hiện 1 phép push_back số fibo mới vào vector (xem như 1 đơn vị thời gian).
 -> Vậy thuật toán cần (n - len(fibo)) đơn vị thời gian để thực hiện xong.
- Trường hợp tốt nhất, len(fibo) > n thì vòng lặp sẽ dừng khi chưa thực hiện lần lặp nào.
- Trường hợp xấu nhất là len(fibo) = 0 và thuật toán cần chạy n lần để tính số fibo thứ n.
 => Thuật toán có $$O(n)$$ và $$\Omega(1)$$ => ta có thể xem thuật toán có $$\Theta(n)$$