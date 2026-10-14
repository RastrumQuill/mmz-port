// sub_080A3A0C at 0x080A3A0C (thumb)

undefined4 sub_080A3A0C(int param_1)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0x10);
  if (bVar1 == 1) {
    iVar3 = *(int *)(param_1 + 0x54) - *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x54) = iVar3;
    sVar2 = sub_08007C7C(iVar3 + -0xd00,*(undefined4 *)(param_1 + 0x58));
    if (sVar2 != 0) {
      iVar3 = sub_08008988(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
      *(int *)(param_1 + 0x54) = iVar3 + 0xd00;
      *(undefined *)(param_1 + 0x12) = 0;
      if (*(int *)(DAT_0202dbf0 + 0x58) + -0xf00 < *(int *)(param_1 + 0x58)) {
        *(int *)(param_1 + 0x60) = -*(int *)(param_1 + 0x60);
      }
      *(undefined *)(param_1 + 0xd) = 1;
    }
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      iVar3 = *(int *)(param_1 + 0x58) - *(int *)(param_1 + 0x60);
      *(int *)(param_1 + 0x58) = iVar3;
      sVar2 = sub_08007C7C(*(undefined4 *)(param_1 + 0x54),iVar3 + -0xd00);
      if (sVar2 != 0) {
        iVar3 = sub_08008748(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
        *(int *)(param_1 + 0x58) = iVar3 + 0xd00;
        *(undefined *)(param_1 + 0x12) = 1;
        if (*(int *)(DAT_0202dbf0 + 0x54) < *(int *)(param_1 + 0x54)) {
          *(int *)(param_1 + 0x5c) = -*(int *)(param_1 + 0x5c);
        }
LAB_080a3b0c:
        *(undefined *)(param_1 + 0xd) = 1;
      }
    }
  }
  else if (bVar1 == 2) {
    iVar3 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x58) = iVar3;
    sVar2 = sub_08007C7C(*(undefined4 *)(param_1 + 0x54),iVar3 + 0xd00);
    if (sVar2 != 0) {
      iVar3 = sub_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
      *(int *)(param_1 + 0x58) = iVar3 + -0xd00;
      *(undefined *)(param_1 + 0x12) = 1;
      if (*(int *)(DAT_0202dbf0 + 0x54) < *(int *)(param_1 + 0x54)) {
        *(int *)(param_1 + 0x5c) = -*(int *)(param_1 + 0x5c);
      }
      *(int *)(param_1 + 0x60) = -*(int *)(param_1 + 0x60);
      goto LAB_080a3b0c;
    }
  }
  else if (bVar1 == 3) {
    iVar3 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x54) = iVar3;
    sVar2 = sub_08007C7C(iVar3 + 0xd00,*(undefined4 *)(param_1 + 0x58));
    if (sVar2 != 0) {
      iVar3 = sub_08008868(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
      *(int *)(param_1 + 0x54) = iVar3 + -0xd00;
      *(undefined *)(param_1 + 0x12) = 0;
      if (*(int *)(DAT_0202dbf0 + 0x58) + -0xf00 < *(int *)(param_1 + 0x58)) {
        *(int *)(param_1 + 0x60) = -*(int *)(param_1 + 0x60);
      }
      *(int *)(param_1 + 0x5c) = -*(int *)(param_1 + 0x5c);
      *(undefined *)(param_1 + 0xd) = 1;
    }
  }
  iVar3 = *(int *)(param_1 + 0xb4) - *(int *)(param_1 + 0x54);
  if (iVar3 < 0) {
    iVar3 = *(int *)(param_1 + 0x54) - *(int *)(param_1 + 0xb4);
  }
  if (iVar3 < 0x2401) {
    iVar3 = *(int *)(param_1 + 0xb8) - *(int *)(param_1 + 0x58);
    if (iVar3 < 0) {
      iVar3 = *(int *)(param_1 + 0x58) - *(int *)(param_1 + 0xb8);
    }
    if (iVar3 < 0x2401) goto LAB_080a3bbe;
  }
  sub_08005784(param_1 + 0x74,&DAT_0885e9e8);
LAB_080a3bbe:
  if (*(char *)(param_1 + 0xd) == '\x01') {
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

