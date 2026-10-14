// sub_08062644 at 0x08062644 (thumb)

undefined4 sub_08062644(int param_1)

{
  byte bVar1;
  bool bVar2;
  char cVar3;
  short sVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 == 1) {
    *(undefined *)(param_1 + 0x12) = 0x78;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 != 0) {
        return in_lr;
      }
      if ((*(uint *)(param_1 + 0xbc) & 0x20) != 0) {
        return in_lr;
      }
      *(undefined *)(param_1 + 0xe) = 1;
      return in_lr;
    }
    if (bVar1 != 2) {
      return in_lr;
    }
  }
  iVar6 = *(int *)(param_1 + 0x54);
  if ((*(int *)(DAT_0202f5c0 + 0x54) - iVar6) + 0x6000U < 0xc000) {
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined *)(param_1 + 0xe) = 0;
    return in_lr;
  }
  bVar2 = false;
  if (*(int *)(DAT_0202f5c0 + 0x54) < iVar6) {
    sVar4 = sub_08009A3C(iVar6 + -0x1600,*(int *)(param_1 + 0x58) + 0x400);
    if (sVar4 != 0) {
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + -0x80;
      goto LAB_080626ee;
    }
  }
  else {
    sVar4 = sub_08009A3C(iVar6 + 0x1600,*(int *)(param_1 + 0x58) + 0x400);
    if (sVar4 != 0) {
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 0x80;
      goto LAB_080626ee;
    }
  }
  bVar2 = true;
LAB_080626ee:
  cVar3 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar3;
  if ((cVar3 == '\0') || (bVar2)) {
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  sub_080177F4(param_1);
  uVar5 = sub_0800A104(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  *(undefined4 *)(param_1 + 0x58) = uVar5;
  return in_lr;
}

