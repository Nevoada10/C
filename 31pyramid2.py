import sys


def main():
    height = 4
    draw_pyramid(height)
    return 0


def draw_pyramid(height):
    for i in range(1, height + 1, 1):
        for j in range(1, i + 1, 1):
            print("x", end="")
        print()


if __name__ == "__main__":
    exit_code = main()
    sys.exit(exit_code)
