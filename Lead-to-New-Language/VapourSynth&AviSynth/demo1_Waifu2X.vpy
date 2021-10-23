import vapoursynth as vs
import mvsfunc as mvf

core = vs.get_core()

src = core.ffms2.Source(r"D:\视频-音乐-图片\com.miHoYo.bh3.bilibili\assets\Video\2.3_CG_08_mux_1.mp4", format = vs.YUV420P8)
rgb = mvf.ToRGB(src, "bt709", 32, full=True, cplace="MPEG1")
src2x = core.caffe.Waifu2x(rgb, noise=0, scale=2, model=3, cudnn=True, processor=1, tta=False, batch=40)

src2x.set_output()
