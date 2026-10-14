// sub_0803BC64 at 0x0803BC64 (thumb)

undefined4 sub_0803BC64(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xd) == '\0') {
    cVar1 = sub_0803C2A8(param_1,&DAT_088505f0);
    if (cVar1 != '\0') {
      sub_0801CF00(param_1,*(undefined2 *)(&DAT_08850894 + (uint)*(byte *)(param_1 + 0xc1) * 2));
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    }
  }
  else {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  }
  cVar1 = sub_0803C42C(param_1);
  if (cVar1 == '\0') {
    cVar1 = sub_0803C210(param_1);
    if (cVar1 == '\0') {
      return in_lr;
    }
  }
  else {
    sub_080D17D8(param_1 + 0x54,6,*(byte *)(param_1 + 10) >> 4 & 1);
    sub_08002B10(0x2b);
  }
  *(undefined4 *)(param_1 + 0xc) = 2;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088504bc)[*(byte *)(param_1 + 9)] + 8);
  return in_lr;
}

