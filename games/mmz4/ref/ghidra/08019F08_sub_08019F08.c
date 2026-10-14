// sub_08019F08 at 0x08019F08 (thumb)

undefined4 sub_08019F08(void)

{
  undefined4 in_lr;
  
  if (DAT_0202dadc != 0) {
    *(byte *)(DAT_0202dadc + 10) = *(byte *)(DAT_0202dadc + 10) & 0xfc;
    *(undefined4 *)(DAT_0202dadc + 0x8c) = 0;
    *(undefined4 *)(DAT_0202dadc + 0x90) = 0;
    *(undefined *)(DAT_0202dadc + 0x94) = 0;
    *(byte *)(DAT_0202dadc + 10) = *(byte *)(DAT_0202dadc + 10) & 0xfb;
    *(undefined4 *)(DAT_0202dadc + 0xc) = 3;
    *(undefined4 *)(DAT_0202dadc + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_08865dc4 + (uint)*(byte *)(DAT_0202dadc + 9) * 4) + 0xc);
    DAT_0202dadc = 0;
  }
  return in_lr;
}

