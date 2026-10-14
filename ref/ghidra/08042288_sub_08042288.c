// sub_08042288 at 0x08042288 (thumb)

undefined4 sub_08042288(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 in_lr;
  
  iVar2 = DAT_0202286c;
  if (*(char *)(param_1 + 0xca) == '\0') {
    if (*(byte *)(DAT_02022b20 + 1) < 5) {
      if (*(short *)(param_1 + 0x8c) < 0x20) {
        uVar4 = DAT_02022890 * 0x343fd + 0x269ec3;
        DAT_02022890 = uVar4 & 0x7fffffff;
        if ((uVar4 * 2 >> 0x11 & 0xf) < 2) goto LAB_08042358;
      }
      else {
        uVar4 = DAT_02022890 * 0x343fd + 0x269ec3;
        DAT_02022890 = uVar4 & 0x7fffffff;
        if ((uVar4 * 2 >> 0x11 & 0xf) < 4) {
          *(undefined *)(param_1 + 0xd) = 4;
          return in_lr;
        }
      }
    }
    else {
      uVar4 = DAT_02022890 * 0x343fd + 0x269ec3;
      DAT_02022890 = uVar4 & 0x7fffffff;
      if ((uVar4 * 2 >> 0x11 & 0xf) < 6) {
LAB_08042358:
        *(undefined *)(param_1 + 0xd) = 4;
        *(undefined *)(param_1 + 0xe) = 1;
        return in_lr;
      }
    }
    if ((*(int *)(DAT_0202286c + 0x4c) >> 8 & 1U) != 0) goto LAB_080423b0;
    *(undefined *)(param_1 + 0xd) = 9;
    *(undefined *)(param_1 + 0xf) = 0x15;
    uVar3 = sub_080C8AD0(*(int *)(iVar2 + 0x4c) - *(int *)(param_1 + 0x4c),0x50);
    *(undefined4 *)(param_1 + 0x54) = uVar3;
    uVar3 = 0xfffffb00;
  }
  else {
    bVar1 = *(byte *)(param_1 + 0xc9);
    if (bVar1 == 1) {
      *(undefined *)(param_1 + 0xd) = 0x1c;
      return in_lr;
    }
    if (1 < bVar1) {
      if (bVar1 == 2) {
        *(undefined *)(param_1 + 0xd) = 0x1a;
        return in_lr;
      }
      if (bVar1 != 3) {
        return in_lr;
      }
      *(undefined *)(param_1 + 0xd) = 0x1e;
      return in_lr;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    if ((*(int *)(DAT_0202286c + 0x4c) >> 8 & 1U) != 0) {
LAB_080423b0:
      *(undefined *)(param_1 + 0xd) = 0x11;
      return in_lr;
    }
    *(undefined *)(param_1 + 0xd) = 9;
    *(undefined *)(param_1 + 0xf) = 0x15;
    uVar3 = sub_080C8AD0(*(int *)(iVar2 + 0x4c) - *(int *)(param_1 + 0x4c),0x58);
    *(undefined4 *)(param_1 + 0x54) = uVar3;
    uVar3 = 0xfffffa80;
  }
  *(undefined4 *)(param_1 + 0x58) = uVar3;
  return in_lr;
}

