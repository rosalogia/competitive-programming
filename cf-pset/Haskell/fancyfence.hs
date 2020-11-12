main = interact $
    unlines . map (s . read) . tail . words
    where
        s n | 360 `mod` (180-n) == 0 = "YES"
            | otherwise = "NO"
