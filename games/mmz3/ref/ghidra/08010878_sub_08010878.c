// sub_08010878 at 0x08010878 (thumb)

undefined4 sub_08010878(void)

{
  undefined4 in_lr;
  
  if (DAT_0202f4b0 != 0) {
    *(byte *)(DAT_0202f4b0 + 10) = *(byte *)(DAT_0202f4b0 + 10) & 0xfc;
    *(undefined4 *)(DAT_0202f4b0 + 0x8c) = 0;
    *(undefined4 *)(DAT_0202f4b0 + 0x90) = 0;
    *(undefined *)(DAT_0202f4b0 + 0x94) = 0;
    *(byte *)(DAT_0202f4b0 + 10) = *(byte *)(DAT_0202f4b0 + 10) & 0xfb;
    *(undefined4 *)(DAT_0202f4b0 + 0xc) = 3;
    *(undefined4 *)(DAT_0202f4b0 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0836c2ec + (uint)*(byte *)(DAT_0202f4b0 + 9) * 4) + 0xc);
    DAT_0202f4b0 = 0;
  }
  return in_lr;
}

