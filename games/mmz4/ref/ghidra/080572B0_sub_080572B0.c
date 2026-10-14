// sub_080572B0 at 0x080572B0 (thumb)

undefined4 sub_080572B0(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 in_lr;
  
  uVar5 = *(byte *)(param_1 + 10) >> 4 & 1;
  bVar1 = *(byte *)(param_1 + 0xf);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        *(int *)(param_1 + 100) = -*(int *)(param_1 + 100);
        *(int *)(param_1 + 0x60) = -*(int *)(param_1 + 0x60);
        *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
      }
      else if (bVar1 != 3) {
        return in_lr;
      }
      if ((*(char *)(param_1 + 0x13) != '\0') && (*(char *)(param_1 + 0x73) == '\x03')) {
        uVar5 = uVar5 + 1 & 1;
        *(char *)(param_1 + 0x4c) = (char)uVar5;
        *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar5 << 4);
        if (uVar5 == 0) {
          bVar1 = *(byte *)(param_1 + 10) & 0xef;
        }
        else {
          bVar1 = *(byte *)(param_1 + 10) | 0x10;
        }
        *(byte *)(param_1 + 10) = bVar1;
        sub_0801CF00(param_1,0xa007);
        *(undefined *)(param_1 + 0x13) = 0;
      }
      sub_0801CFF0(param_1);
      sub_08005784(param_1 + 0x74,
                   &DAT_08854f90 +
                   (uint)**(byte **)(*(char *)(param_1 + 0x71) * 4 +
                                    *(int *)(&DAT_088551e0 +
                                            (CONCAT11(*(undefined *)(param_1 + 0x1e),
                                                      *(undefined *)(param_1 + 0x70)) - 0xa000) * 4)
                                    ) * 0x18);
      iVar2 = *(int *)(param_1 + 0x5c) + *(int *)(param_1 + 100);
      *(int *)(param_1 + 0x5c) = iVar2;
      if (iVar2 < 0) {
        *(undefined4 *)(param_1 + 0x5c) = 0;
      }
      *(uint *)(param_1 + 0x54) =
           *(int *)(param_1 + 0x54) +
           ((uint)*(byte *)(param_1 + 0x12) * -2 + 1) * *(int *)(param_1 + 0x5c);
      iVar2 = *(int *)(param_1 + 0xbc) + *(int *)(param_1 + 0x60);
      iVar3 = *(int *)(param_1 + 200);
      if (iVar2 < iVar3) {
        iVar2 = iVar3;
      }
      *(int *)(param_1 + 0xbc) = iVar2;
      *(int *)(param_1 + 0x58) = iVar2 + (short)(&DAT_08128c10)[*(byte *)(param_1 + 0xb5)] * 2;
      if (*(char *)(param_1 + 0x13) != '\0') {
        return in_lr;
      }
      if (iVar2 != *(int *)(param_1 + 200)) {
        return in_lr;
      }
      *(undefined *)(param_1 + 0xe) = 6;
      *(undefined *)(param_1 + 0xf) = 0;
      return in_lr;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    sub_0801CF00(param_1,0xa01d);
    iVar2 = sub_08059768(param_1);
    *(uint *)(param_1 + 0x68) = (uint)*(ushort *)(&DAT_08855292 + iVar2 * 2);
    *(undefined4 *)(param_1 + 0x5c) = 0x200;
    *(undefined4 *)(param_1 + 100) = 0x20;
    *(undefined4 *)(param_1 + 0x60) = 0x200;
    *(undefined4 *)(param_1 + 0xc4) = *(undefined4 *)(param_1 + 0x54);
    *(undefined4 *)(param_1 + 200) = *(undefined4 *)(param_1 + 0xbc);
    *(byte *)(param_1 + 0x12) = (char)uVar5 + 1U & 1;
    *(undefined *)(param_1 + 0x13) = 1;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  if ((*(char *)(param_1 + 0x13) != '\0') && (*(char *)(param_1 + 0x73) == '\x03')) {
    uVar5 = uVar5 + 1 & 1;
    *(char *)(param_1 + 0x4c) = (char)uVar5;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar5 << 4);
    if (uVar5 == 0) {
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar1;
    sub_0801CF00(param_1,0xa007);
    *(undefined *)(param_1 + 0x13) = 0;
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
  if (*(int *)(param_1 + 0x68) < iVar2) {
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x68);
  }
  iVar4 = *(int *)(param_1 + 0x54) +
          ((uint)*(byte *)(param_1 + 0x12) * -2 + 1) * *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = iVar4;
  iVar2 = *(int *)(param_1 + 0xbc) + *(int *)(param_1 + 0x60);
  iVar3 = *(int *)(param_1 + 200) + 0x2000;
  if (iVar3 < iVar2) {
    iVar2 = iVar3;
  }
  *(int *)(param_1 + 0xbc) = iVar2;
  *(int *)(param_1 + 0x58) = iVar2 + (short)(&DAT_08128c10)[*(byte *)(param_1 + 0xb5)] * 2;
  if (((bool)*(char *)(param_1 + 0x12) == *(int *)(param_1 + 0x54) < *(int *)(DAT_0202dbf0 + 0x54))
     || (0xa000 < (iVar4 - *(int *)(param_1 + 0xc4)) + 0x5000U)) {
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  return in_lr;
}

