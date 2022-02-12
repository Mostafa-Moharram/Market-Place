cmake_minimum_required(VERSION 3.21)
project(MarketPlace)

set(CMAKE_CXX_STANDARD 17)

set(Headers Accounts.h Admin.h Cart.h Category.h CsvFile.h Customer.h List.h ListNode.h PendingProduct.h Presentation.h Product.h Rating.h Receipt.h Resources.h Seller.h Stock.h SystemPresentation.h User.h)

add_executable(MarketPlace main.cpp Accounts.cpp Admin.cpp Cart.cpp Category.cpp CsvFile.cpp Customer.cpp List.cpp ListNode.cpp PendingProduct.cpp Presentation.cpp Product.cpp Rating.cpp Resources.cpp Seller.cpp Stock.cpp SystemPresentation.cpp User.cpp)
