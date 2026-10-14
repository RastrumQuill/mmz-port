// sub_0803F29C at 0x0803F29C (thumb)

undefined4 sub_0803F29C(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  cVar1 = sub_0803A9A8(param_1,0xff);
  sub_0801CFF0(param_1);
  if ((cVar1 == '\0') && (*(char *)(param_1 + 0xbb) == '\0')) {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088504bc)[*(byte *)(param_1 + 9)] + 8);
  }
  return in_lr;
}

