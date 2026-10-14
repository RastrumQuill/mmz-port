// sub_080415C0 at 0x080415C0 (thumb)

undefined4 sub_080415C0(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x2c);
  cVar1 = sub_0803A9A8(param_1,3);
  if (*(char *)(iVar2 + 0xfa) == '\x02') {
    cVar1 = '\x01';
  }
  if (cVar1 == '\0') {
    sub_0801CFF0(param_1);
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088504bc)[*(byte *)(param_1 + 9)] + 8);
    sub_08041610(param_1);
  }
  return in_lr;
}

