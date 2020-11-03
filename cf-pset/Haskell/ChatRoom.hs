tpa :: Int -> Int -> String -> Bool
tpa 5 _ _ = True
tpa x y [] = False
tpa x y s@(h:t)
    | x == 5 = True
    | h == ("hello" !! x) = tpa (x+1) (y+1) t
    | otherwise = tpa x (y+1) t

main = do
    line <- getLine

    putStrLn (if tpa 0 0 line then "YES" else "NO")
