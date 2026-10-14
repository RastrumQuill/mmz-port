// sub_0808090C at 0x0808090C (thumb)

undefined4 sub_0808090C(int param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xba) == '\0') {
    return in_lr;
  }
  if (*(int *)(param_1 + 0x2c) != 0) {
    return in_lr;
  }
  iVar4 = *(int *)(DAT_0202e130 + 0x54) + *(char *)(param_1 + 0xb8) * 0x5000;
  if (*(char *)(param_1 + 0x10) == '\0') {
    iVar2 = *(int *)(param_1 + 100);
    if (iVar4 <= iVar2) {
      if (iVar4 < 0x44800) {
        iVar4 = 0x44800;
      }
      goto LAB_08080968;
    }
  }
  else {
    iVar2 = *(int *)(param_1 + 100);
    if ((iVar2 <= iVar4) && (iVar2 = 0xcec00, iVar4 < 0xcec01)) goto LAB_08080968;
  }
  iVar4 = iVar2;
LAB_08080968:
  iVar2 = *(int *)(param_1 + 0x54);
  if (iVar2 != iVar4) {
    cVar1 = -1;
    if (iVar2 < iVar4) {
      cVar1 = '\x01';
    }
    iVar4 = iVar4 - iVar2;
    if (iVar4 < 0) {
      iVar4 = iVar4 + 7;
    }
    uVar3 = iVar4 >> 3;
    if ((int)uVar3 < 0) {
      uVar3 = -uVar3;
    }
    uVar3 = uVar3 & 0xffff;
    if (uVar3 == 0) {
      uVar3 = 1;
    }
    else if (0x300 < uVar3) {
      uVar3 = 0x300;
    }
    *(uint *)(param_1 + 0x54) = iVar2 + uVar3 * (int)cVar1;
  }
  iVar4 = *(int *)(param_1 + 0xb4);
  iVar2 = *(int *)(param_1 + 0x58);
  if (iVar2 != iVar4) {
    cVar1 = -1;
    if (iVar2 < iVar4) {
      cVar1 = '\x01';
    }
    iVar4 = iVar4 - iVar2;
    if (iVar4 < 0) {
      iVar4 = iVar4 + 7;
    }
    uVar3 = iVar4 >> 3;
    if ((int)uVar3 < 0) {
      uVar3 = -uVar3;
    }
    uVar3 = uVar3 & 0xffff;
    if (uVar3 == 0) {
      uVar3 = 1;
    }
    else if (0x300 < uVar3) {
      uVar3 = 0x300;
    }
    *(uint *)(param_1 + 0x58) = iVar2 + uVar3 * (int)cVar1;
  }
  return in_lr;
}

