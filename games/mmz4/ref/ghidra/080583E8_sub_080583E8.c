// sub_080583E8 at 0x080583E8 (thumb)

undefined4 sub_080583E8(int param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 in_lr;
  
  uVar4 = *(byte *)(param_1 + 10) >> 4 & 1;
  if (*(char *)(param_1 + 0xf) == '\0') {
    if (*(int *)(param_1 + 0x54) < DAT_0202ea30) {
      *(undefined4 *)(param_1 + 0x5c) = 0xfffffd00;
    }
    else if (DAT_0202ea30 < *(int *)(param_1 + 0x54)) {
      *(undefined4 *)(param_1 + 0x5c) = 0x300;
    }
    else {
      uVar2 = DAT_0202dc38 * 0x343fd + 0x269ec3;
      DAT_0202dc38 = uVar2 & 0x7fffffff;
      *(uint *)(param_1 + 0x5c) = ((uVar2 * 2 >> 0x11 & 2) - 1) * 0x300;
    }
    if (uVar4 == -(*(int *)(param_1 + 0x5c) >> 0x1f)) {
      sub_0801CF00(param_1,0xa007);
      *(undefined *)(param_1 + 0x12) = 0;
    }
    else {
      sub_0801CF00(param_1,0xa01d);
      *(undefined *)(param_1 + 0x12) = 1;
    }
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  if ((*(char *)(param_1 + 0x12) != '\0') && (*(char *)(param_1 + 0x73) == '\x03')) {
    sub_0801CF00(param_1,0xa007);
    uVar4 = uVar4 + 1 & 1;
    *(char *)(param_1 + 0x4c) = (char)uVar4;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar4 << 4);
    if (uVar4 == 0) {
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar1;
    *(undefined *)(param_1 + 0x12) = 0;
  }
  sub_0801CFF0(param_1);
  sub_08005784(param_1 + 0x74,
               &DAT_08854f90 +
               (uint)**(byte **)(*(char *)(param_1 + 0x71) * 4 +
                                *(int *)(&DAT_088551e0 +
                                        (CONCAT11(*(undefined *)(param_1 + 0x1e),
                                                  *(undefined *)(param_1 + 0x70)) - 0xa000) * 4)) *
               0x18);
  iVar3 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = iVar3;
  if (0x19000 < (iVar3 - *(int *)(param_1 + 0xcc)) - 0x2800U) {
    *(undefined4 *)(param_1 + 0x5c) = 0;
    if (*(char *)(param_1 + 0x12) == '\0') {
      *(undefined *)(param_1 + 0xe) = 1;
      *(undefined *)(param_1 + 0xf) = 0;
    }
  }
  return in_lr;
}

