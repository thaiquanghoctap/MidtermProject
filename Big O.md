Hướng tiếp cận Quy hoạch động
- Thuật toán sử dụng 1 vòng lặp for từ độ dài hiện tại của vector fibo tới số n.
- Trong mỗi lần lặp, ta thực hiện 1 phép push_back số fibo mới vào vector (xem như 1 đơn vị thời gian).
 -> Vậy thuật toán cần (n - len(fibo)) đơn vị thời gian để thực hiện xong.
- Trường hợp tốt nhất, len(fibo) > n thì vòng lặp sẽ dừng khi chưa thực hiện lần lặp nào.
- Trường hợp xấu nhất là len(fibo) = 0 và thuật toán cần chạy n lần để tính số fibo thứ n.
 => Thuật toán có $$O(n)$$ và $$\Omega(1)$$ => ta có thể xem thuật toán có $$\Theta(n)$$

Đệ quy
- Trường hợp tốt nhất xảy ra khi n là 0 hoặc 1, hàm chỉ trả về giá trị n mà không cần thực hiện bất kỳ lời gọi đệ quy nào.
 -> Độ phức tạp là O(1)
- Trường hợp xấu nhất xảy ra khi n lớn và mỗi lời gọi đệ quy tạo ra hai lời gọi đệ quy khác nhau. Hàm này tạo ra một cây đệ quy với số lượng nút là 2^n, với mỗi nút đại diện cho một lời gọi đệ quy.
 -> Độ phức tạp trong trường hợp xấu nhất là O(2^n).

 Hướng tiếp cận công thức vàng + lũy thừa nhanh:
 - Lũy thừa nhanh: 
    + Là một phương pháp tính lũy thừa dựa trên nguyên lý: mọi số tự nhiên đều có thể biểu diễn dưới dạng tổng các lũy thừa của 2.
    + Ví dụ: ta cần tính a^n, ta có:
    n = 2^x1 + 2^x2 + ... + 2^xk
    a^n = a^(2^x1 + 2^x2 + ... + 2^xk) = a^(2^x1) x a^(2^x2) x ... x a^(2^xk)
    + Tiếp cận:
        * Tìm ra biểu diễn nhị phân của số n bằng cách sử dụng phép dịch bit.
        * Với mỗi bit trong biểu diễn n, nếu đó là 1, thì ta nhân kết quả lũy thừa với a, khi a được lũy thừa dần theo số bit của n.
    + Độ phức tạp
        * Thuật toán gồm 1 vòng lặp tới khi n = 0.
        * Trong mỗi lần lặp, n được dịch phải 1 bit, tức chia cho 2, nên vòng lặp sẽ chạy log n lần.
        * Trong vòng lặp ta thực hiện 1 phép so sánh n lẻ và 1 phép gán nếu có, ta có thể xem nó có độ phức tạp thời gian là O(1).
        * Vậy, độ phức tạp thời gian của thuật toán lũy thừa nhanh là O(1) * O(logn) = O(logn).
- Công thức vàng: 
    + Công thức vàng, còn được gọi là tỷ lệ vàng, được sử dụng để tính số Fibonacci thứ n mà không cần tính toán các số trước đó. Công thức này dựa trên tỷ lệ của hai số Fibonacci liên tiếp, hội tụ với tỷ lệ vàng.
    + Công thức vàng để tính số Fibonacci thứ n là:
        F(n)=(φ^n − (−φ)^n)​ / √5
    Trong đó:
        F(n) là số Fibonacci thứ n.
        φ (phi) là tỷ lệ vàng, có giá trị xấp xỉ là (1 + √5) / 2.
- Vì sử dụng công thức vàng ta chỉ cần tính lũy thừa bậc n 2 lần và tính 1 lần, nên ta có độ phức tạp thời gian là 2*logn + 1 = O(logn).
- Tuy nhiên, vì phi có giá trị xấp xỉ, nên công thức này cho ra một giá trị xấp xỉ nên nó chỉ có giá trịn chính xác và đáng tin cậy khi n đủ nhỏ.
