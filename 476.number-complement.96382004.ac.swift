class Solution {
    func findComplement(_ num: Int) -> Int {
        let numUInt32 = UInt32(num)
        var mask: UInt32 = ~0
        while ((numUInt32 & mask) != 0) {
            mask <<= 1
        }
        return Int(~numUInt32 & ~mask)
    }
}
