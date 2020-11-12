import Control.Monad

innerMap = map . map

implement :: [Int] -> Bool
implement = (>= 2) . length . filter (== 1)

main = do
    n <- readLn :: IO Int
    lines <- replicateM n getLine

    let problems = innerMap (read :: String -> Int) . map words $ lines

    print . length . filter implement $ problems
