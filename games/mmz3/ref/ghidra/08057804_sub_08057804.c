// sub_08057804 at 0x08057804 (thumb)

undefined4 sub_08057804(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 in_lr;
  
  iVar2 = DAT_0202f5c0;
  if (*(char *)(param_1 + 0xc6) == '\0') {
    if (*(char *)(param_1 + 0xc5) == '\0') {
      uVar4 = DAT_0202f608 * 0x343fd + 0x269ec3;
      DAT_0202f608 = uVar4 & 0x7fffffff;
      if (9 < (uVar4 * 2 >> 0x11 & 0xf)) {
LAB_080578dc:
        if ((*(int *)(DAT_0202f5c0 + 0x54) >> 9 & 1U) != 0) {
LAB_080578ec:
          *(undefined *)(param_1 + 0xd) = 0x11;
          return in_lr;
        }
        *(undefined *)(param_1 + 0xd) = 9;
        *(undefined *)(param_1 + 0xf) = 0x15;
        uVar3 = FUN_080fe2f8(*(int *)(iVar2 + 0x54) - *(int *)(param_1 + 0x54),0x50);
        *(undefined4 *)(param_1 + 0x5c) = uVar3;
        uVar3 = 0xfffffb00;
        goto LAB_08057910;
      }
    }
    else {
      uVar4 = DAT_0202f608 * 0x343fd + 0x269ec3;
      DAT_0202f608 = uVar4 & 0x7fffffff;
      if (5 < (uVar4 * 2 >> 0x11 & 0xf)) goto LAB_080578dc;
    }
    *(undefined *)(param_1 + 0xd) = 4;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  else {
    bVar1 = *(byte *)(param_1 + 0xc5);
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
    if ((*(int *)(DAT_0202f5c0 + 0x54) >> 8 & 1U) != 0) goto LAB_080578ec;
    *(undefined *)(param_1 + 0xd) = 9;
    *(undefined *)(param_1 + 0xf) = 0x15;
    uVar3 = FUN_080fe2f8(*(int *)(iVar2 + 0x54) - *(int *)(param_1 + 0x54),0x58);
    *(undefined4 *)(param_1 + 0x5c) = uVar3;
    uVar3 = 0xfffffa80;
LAB_08057910:
    *(undefined4 *)(param_1 + 0x60) = uVar3;
  }
  return in_lr;
}

