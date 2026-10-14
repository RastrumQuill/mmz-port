// sub_080D2268 at 0x080D2268 (thumb)

undefined4 sub_080D2268(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  sub_0801CFF0();
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == -1) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08863a28)[*(byte *)(param_1 + 9)] + 8);
  }
  return in_lr;
}

