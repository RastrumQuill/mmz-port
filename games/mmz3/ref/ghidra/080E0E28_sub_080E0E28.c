// sub_080E0E28 at 0x080E0E28 (thumb)

undefined4 sub_080E0E28(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  cVar1 = sub_080C8E00(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58),
                       *(undefined *)(param_1 + 0x10));
  if (cVar1 != '\0') {
    sub_0800471C(0x24);
    *(undefined4 *)(param_1 + 0xc) = 4;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)((&DAT_0836e1d8)[*(byte *)(param_1 + 9)] + 0x10);
  }
  return in_lr;
}

