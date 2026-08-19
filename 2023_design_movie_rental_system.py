from collections import defaultdict
from sortedcontainers import SortedList
class MovieRentingSystem:
    def __init__(self, n: int, entries: list[list[int]]):
        self.movie_to_price_shop = defaultdict(dict)
        self.unrented_movies = defaultdict(SortedList)
        self.rented_set = SortedList()
        for shop, movie, price in entries:
            self.movie_to_price_shop[movie][shop] = price
            self.unrented_movies[movie].add((price, shop))
    def search(self, movie: int) -> list[int]:
        if movie not in self.unrented_movies:
            return []
        res = []
        for price, shop in self.unrented_movies[movie]:
            res.append(shop)
            if len(res) == 5:
                break
        return res
    def rent(self, shop: int, movie: int) -> None:
        price = self.movie_to_price_shop[movie][shop]
        self.unrented_movies[movie].remove((price, shop))
        self.rented_set.add((price, shop, movie))
    def drop(self, shop: int, movie: int) -> None:
        price = self.movie_to_price_shop[movie][shop]
        self.rented_set.remove((price, shop, movie))
        self.unrented_movies[movie].add((price, shop))
    def report(self) -> list[list[int]]:
        res = []
        for price, shop, movie in self.rented_set:
            res.append([shop, movie])
            if len(res) == 5:
                break
        return res