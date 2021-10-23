from PIL import Image

code = Image.open("file.png")
r, g, b = code.split()

code_finish = Image.new("L", (36, 36), color=255)
row = 1
code_finish.paste(g.crop((0, 0, 35, 1)), (0, 0))
for i in range(12):
    code_finish.paste(r.crop((0, i, 35, i+1)), (0, row))
    row += 1
    code_finish.paste(g.crop((0, i, 35, i+1)), (0, row))
    row += 1
    code_finish.paste(b.crop((0, i, 35, i+1)), (0, row))
    row += 1

code_finish.save("finish.png", "png")
