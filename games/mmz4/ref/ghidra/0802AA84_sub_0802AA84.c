// sub_0802AA84 at 0x0802AA84 (thumb)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 sub_0802AA84(void)

{
  undefined4 in_lr;
  
  DAT_020303d4 = (_DAT_02000a10 & 0x1ff) * 0x100 + 0x7800;
  sub_08003470(&DAT_020301bc);
  sub_0801C79C(DAT_0202edb4);
  sub_0801C924(DAT_0202edb4,&DAT_020301bc);
  sub_08003420(&DAT_020301bc);
  return in_lr;
}

