import Data.Char

isCaps :: String -> Bool
isCaps s@(x:xs) = all isUpper s || all isUpper xs

fix :: String -> String
fix s@(x:xs) =
    if all isUpper s then
        map toLower s
    else if all isUpper xs then
        (toUpper x : map toLower xs)
    else
        s

main = do
    line <- getLine
    putStrLn . fix $ line
