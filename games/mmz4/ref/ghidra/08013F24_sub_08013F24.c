// sub_08013F24 at 0x08013F24 (thumb)

undefined4 sub_08013F24(void)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = DAT_0202daf4;
  if (DAT_0202daf4 != 0) {
    *(byte *)(DAT_0202daf4 + 10) = *(byte *)(DAT_0202daf4 + 10) & 0xfc;
    *(undefined4 *)(iVar1 + 0x8c) = 0;
    *(undefined4 *)(iVar1 + 0x90) = 0;
    *(undefined *)(iVar1 + 0x94) = 0;
    *(byte *)(iVar1 + 10) = *(byte *)(iVar1 + 10) & 0xfb;
    *(undefined4 *)(iVar1 + 0xc) = 3;
    *(undefined4 *)(iVar1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_08865dc4 + (uint)*(byte *)(iVar1 + 9) * 4) + 0xc);
  }
  sub_08002624(0x54);
  sub_08002624(0x55);
  sub_08002624(0x87);
  return in_lr;
}

