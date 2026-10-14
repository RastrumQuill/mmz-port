// sub_08091D98 at 0x08091D98 (thumb)

undefined4 sub_08091D98(int param_1)

{
  uint uVar1;
  byte bVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined4 *)(param_1 + 0x60) = 0xffffff80;
    *(undefined *)(param_1 + 0x12) = 0;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  bVar2 = *(char *)(param_1 + 0x12) - 1;
  *(byte *)(param_1 + 0x12) = bVar2;
  if ((bVar2 & 3) == 0) {
    sub_080128D4(param_1);
  }
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  if ((((*(int *)(param_1 + 100) - *(int *)(DAT_0202e130 + 0x54)) + 0xf000U < 0x1e001) &&
      ((*(int *)(param_1 + 0x68) - *(int *)(DAT_0202e130 + 0x58)) + 0xa000U < 0x14001)) &&
     (uVar1 = sub_08015188(&DAT_0202ed18,param_1 + 0x54), uVar1 < 0x2000)) {
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

