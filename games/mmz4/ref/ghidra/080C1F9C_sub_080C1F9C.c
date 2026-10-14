// sub_080C1F9C at 0x080C1F9C (thumb)

undefined4 sub_080C1F9C(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  cVar1 = *(char *)(DAT_0202dbf0 + 0x278);
  if (cVar1 != '\0') {
    *(char *)(DAT_0202dbf0 + 0x278) = cVar1 + -1;
  }
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088614b8)[*(byte *)(param_1 + 9)] + 0x10);
  return in_lr;
}

