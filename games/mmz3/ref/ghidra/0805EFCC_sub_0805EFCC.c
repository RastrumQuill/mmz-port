// sub_0805EFCC at 0x0805EFCC (thumb)

undefined4 sub_0805EFCC(int param_1)

{
  undefined uVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_lr;
  
  sub_080607B8();
  iVar3 = *(byte *)(param_1 + 0x12) - 1;
  *(char *)(param_1 + 0x12) = (char)iVar3;
  if (iVar3 != 0) {
    return in_lr;
  }
  if (*(short *)(param_1 + 0xa4) < 0x30) {
    uVar2 = DAT_0202f608 * 0x343fd + 0x269ec3;
    DAT_0202f608 = uVar2 & 0x7fffffff;
    uVar2 = uVar2 * 2 >> 0x11 & 0x1f;
    if (uVar2 < 10) {
      uVar1 = 1;
      goto LAB_0805f05e;
    }
    if (uVar2 < 0x11) {
      uVar1 = 3;
      goto LAB_0805f05e;
    }
    if (0x17 < uVar2) {
      uVar1 = 6;
      goto LAB_0805f05e;
    }
  }
  else {
    uVar2 = DAT_0202f608 * 0x343fd + 0x269ec3;
    DAT_0202f608 = uVar2 & 0x7fffffff;
    uVar2 = uVar2 * 2 >> 0x11 & 0x1f;
    if (uVar2 < 0xe) {
      uVar1 = 1;
      goto LAB_0805f05e;
    }
    if (uVar2 < 0x17) {
      uVar1 = 3;
      goto LAB_0805f05e;
    }
  }
  uVar1 = 4;
LAB_0805f05e:
  *(undefined *)(param_1 + 0xd) = uVar1;
  *(undefined2 *)(param_1 + 0xe) = 0;
  return in_lr;
}

