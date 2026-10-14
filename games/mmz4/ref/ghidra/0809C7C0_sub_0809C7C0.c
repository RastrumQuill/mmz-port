// sub_0809C7C0 at 0x0809C7C0 (thumb)

undefined4 sub_0809C7C0(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x28);
  sub_0801CFF0();
  if (1 < *(byte *)(iVar4 + 0xc)) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
    return in_lr;
  }
  iVar3 = *(int *)(iVar4 + 0x58) + -0xb00;
  if (iVar3 < *(int *)(param_1 + 0x58)) {
    *(int *)(param_1 + 0x58) = iVar3;
  }
  else {
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 0x40;
  }
  bVar1 = *(byte *)(param_1 + 0xd);
  if (bVar1 == 1) {
    iVar3 = *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar3;
    if ((*(byte *)(iVar4 + 10) & 0x10) == 0) {
      iVar3 = iVar3 + 0x20;
    }
    else {
      iVar3 = iVar3 + -0x20;
    }
    *(int *)(param_1 + 0x5c) = iVar3;
    if (*(int *)(param_1 + 0x5c) != 0) {
      return in_lr;
    }
    if ((*(byte *)(iVar4 + 10) & 0x10) == 0) {
      uVar2 = 0x300;
    }
    else {
      uVar2 = 0xfffffd00;
    }
    *(undefined4 *)(param_1 + 0x5c) = uVar2;
    *(undefined *)(param_1 + 0x12) = 0x80;
    *(undefined *)(param_1 + 0x13) = 0;
  }
  else if (bVar1 < 2) {
    if (bVar1 != 0) {
      return in_lr;
    }
    iVar3 = *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar3;
    if ((*(byte *)(iVar4 + 10) & 0x10) == 0) {
      *(int *)(param_1 + 0x5c) = iVar3 + -0x40;
      if (iVar3 + -0x40 < -0x400) {
        *(undefined4 *)(param_1 + 0x5c) = 0xfffffc00;
      }
      iVar4 = sub_08008988(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
      if (iVar4 + 0x4000 <= *(int *)(param_1 + 0x54)) {
        return in_lr;
      }
    }
    else {
      *(int *)(param_1 + 0x5c) = iVar3 + 0x40;
      if (0x400 < iVar3 + 0x40) {
        *(undefined4 *)(param_1 + 0x5c) = 0x400;
      }
      iVar4 = sub_08008868(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
      if (*(int *)(param_1 + 0x54) <= iVar4 + -0x4000) {
        return in_lr;
      }
    }
  }
  else {
    if (bVar1 != 2) {
      if (bVar1 != 3) {
        return in_lr;
      }
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
      sub_0809C320(param_1);
      return in_lr;
    }
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    bVar1 = *(byte *)(param_1 + 0x13);
    if (bVar1 < 0x12) {
      *(byte *)(param_1 + 0x13) = bVar1 + 1;
      uVar2 = sub_080C83F0(param_1,3,(&DAT_0885def2)[bVar1],0);
      *(undefined4 *)(param_1 + 0x2c) = uVar2;
    }
    if (CONCAT11(*(undefined *)(iVar4 + 0x1e),*(undefined *)(iVar4 + 0x70)) != -0x56e4) {
      return in_lr;
    }
    if (*(char *)(iVar4 + 0x71) < '\x04') {
      return in_lr;
    }
    sub_08002B10(0x135);
  }
  *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  return in_lr;
}

