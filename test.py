tienGui = float(input("Tien gui = "))
tienNhan = float(input("Tien nhan = "))

month = 0
while tienGui * (1 + (0.3 / 100) * month)  < tienNhan:
    month += 1

print(month)