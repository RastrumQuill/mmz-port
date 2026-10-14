// sub_08058BA4 at 0x08058BA4 (thumb)

undefined4 sub_08058BA4(int param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  undefined4 in_lr;
  
  uVar3 = *(byte *)(param_1 + 10) >> 4 & 1;
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_08002B10(0x101);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    sub_0801CF00(param_1,0xa00f);
    uVar3 = (uint)*(byte *)(param_1 + 0xc0);
    *(char *)(param_1 + 0x4c) = (char)(uVar3 & 1);
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)((uVar3 & 1) << 4);
    if ((*(byte *)(param_1 + 0xc0) & 1) == 0) {
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar1;
    *(uint *)(param_1 + 0x5c) = (uVar3 * -2 + 1) * 0x200;
    *(uint *)(param_1 + 100) = (uVar3 * 2 + -1) * 0x10;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  sub_08005784(param_1 + 0x74,
               &DAT_08854f90 +
               (uint)**(byte **)(*(char *)(param_1 + 0x71) * 4 +
                                *(int *)(&DAT_088551e0 +
                                        (CONCAT11(*(undefined *)(param_1 + 0x1e),
                                                  *(undefined *)(param_1 + 0x70)) - 0xa000) * 4)) *
               0x18);
  iVar2 = *(int *)(param_1 + 0x5c) + *(int *)(param_1 + 100);
  *(int *)(param_1 + 0x5c) = iVar2;
  if ((int)(iVar2 * (uVar3 * -2 + 1)) < 0) {
    *(undefined4 *)(param_1 + 0x5c) = 0;
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  if ((*(int *)(param_1 + 0x5c) == 0) && (*(int *)(param_1 + 0x2c) == 0)) {
    *(undefined *)(param_1 + 0xe) = 1;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

