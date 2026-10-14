// sub_0804911C at 0x0804911C (thumb)

undefined4 sub_0804911C(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if ((*(char *)(param_1 + 0xbd) != '\0') &&
     (cVar1 = sub_0803AAC8(*(undefined4 *)(param_1 + 0x28)), cVar1 != '\0')) {
    sub_080D0894(1,param_1 + 0x54);
    sub_08002B10(0x2a);
  }
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined *)(param_1 + 0x94) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfa;
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088504bc)[*(byte *)(param_1 + 9)] + 0x10);
  return in_lr;
}

