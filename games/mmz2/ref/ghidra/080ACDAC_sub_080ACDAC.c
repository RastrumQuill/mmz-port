// sub_080ACDAC at 0x080ACDAC (thumb)

undefined4 sub_080ACDAC(int param_1)

{
  short sVar1;
  int iVar2;
  undefined4 in_lr;
  
  sub_080128D4();
  *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
  *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + 8;
  iVar2 = *(int *)(param_1 + 0x60) + -0x60;
  *(int *)(param_1 + 0x60) = iVar2;
  if (iVar2 < -0x100) {
    *(undefined4 *)(param_1 + 0x60) = 0xffffff00;
  }
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x54) =
       *(int *)(param_1 + 0x74) +
       (*(int *)(param_1 + 0x5c) >> 8) * (int)(short)(&DAT_080ef450)[*(byte *)(param_1 + 0x12)];
  iVar2 = sub_08015188(&DAT_0202ed18,param_1 + 0x54);
  if ((iVar2 != 0) ||
     ((*(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60) * -2 <= DAT_0202d004 &&
      (sVar1 = sub_08008354(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58)),
      sVar1 != -0x8000)))) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08345998)[*(byte *)(param_1 + 9)] + 8);
  }
  return in_lr;
}

