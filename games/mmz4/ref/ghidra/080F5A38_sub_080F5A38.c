// sub_080F5A38 at 0x080F5A38 (thumb)

undefined4 sub_080F5A38(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0801CF00(param_1,0x5d01);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  iVar2 = *(int *)(param_1 + 0x5c) + 0x10;
  *(int *)(param_1 + 0x5c) = iVar2;
  if (0x380 < iVar2) {
    *(undefined4 *)(param_1 + 0x5c) = 0x380;
  }
  iVar3 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = iVar3;
  iVar2 = DAT_0202dbf0;
  if (0x177000 < iVar3) {
    if ((0x300 < *(int *)(param_1 + 0x5c)) && (bVar1 = (byte)DAT_0202e918, (DAT_0202e918 & 8) == 0))
    {
      *(undefined *)(DAT_0202dbf0 + 0xd) = 1;
      *(byte *)(iVar2 + 0xe) = bVar1 & 8;
      *(undefined *)(iVar2 + 0xf) = 2;
      sub_08002B10(0x38);
    }
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(undefined4 *)(param_1 + 0x54) = 0x177000;
  }
  if (*(int *)(param_1 + 0x54) < 0x151000) {
    *(undefined4 *)(param_1 + 0x54) = 0x151000;
  }
  iVar2 = sub_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  *(int *)(param_1 + 0x58) = iVar2 + -0x1080;
  return in_lr;
}

