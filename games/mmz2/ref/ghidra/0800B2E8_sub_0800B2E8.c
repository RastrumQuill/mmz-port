// sub_0800B2E8 at 0x0800B2E8 (thumb)

undefined4 sub_0800B2E8(void)

{
  int iVar1;
  undefined4 in_lr;
  
  sub_08002EF0(0x65);
  sub_08002EF0(0x66);
  sub_08002EF0(0x67);
  sub_08002EF0(0x68);
  sub_08002EF0(0x69);
  sub_08002EF0(0x6a);
  sub_08002EF0(0x6b);
  sub_08002EF0(0x6c);
  sub_08002EF0(0x6d);
  sub_08002EF0(0x6e);
  sub_08002EF0(0x6f);
  sub_08002EF0(0x70);
  sub_08002EF0(0x71);
  sub_08002EF0(0x72);
  iVar1 = DAT_0202e024;
  if (DAT_0202e024 != 0) {
    *(byte *)(DAT_0202e024 + 10) = *(byte *)(DAT_0202e024 + 10) & 0xfc;
    *(undefined4 *)(iVar1 + 0x8c) = 0;
    *(undefined4 *)(iVar1 + 0x90) = 0;
    *(undefined *)(iVar1 + 0x94) = 0;
    *(byte *)(iVar1 + 10) = *(byte *)(iVar1 + 10) & 0xfb;
    *(undefined4 *)(iVar1 + 0xc) = 3;
    *(undefined4 *)(iVar1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0834863c + (uint)*(byte *)(iVar1 + 9) * 4) + 0xc);
  }
  return in_lr;
}

