// sub_0808378C at 0x0808378C (thumb)

undefined4 sub_0808378C(int param_1)

{
  char cVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  byte bVar5;
  uint uVar6;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    iVar3 = *(int *)(param_1 + 0x60) / 2;
    *(int *)(param_1 + 0x60) = iVar3;
    if (iVar3 < 0x281) {
      if (iVar3 < 0x80) {
        *(undefined4 *)(param_1 + 0x60) = 0x80;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x60) = 0x280;
    }
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  if (*(char *)(param_1 + 0xe) == '\x01') {
    iVar3 = *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar3;
    if (0x50 < iVar3) {
      *(int *)(param_1 + 0x60) = iVar3 + -0x10;
    }
    sVar2 = sub_08008CFC(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    if ((sVar2 != 0) &&
       (cVar1 = sub_08083FD8(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + 0x5000),
       cVar1 == '\0')) {
      uVar4 = sub_080093C4(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
      *(undefined4 *)(param_1 + 0x58) = uVar4;
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
  }
  bVar5 = *(byte *)(param_1 + 0x24);
  uVar6 = (uint)bVar5;
  if (uVar6 == 0) {
    if (*(char *)(param_1 + 0x10) == '\0') {
      sVar2 = sub_08008CFC(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + -0x2000);
      if ((sVar2 == 0) &&
         (sVar2 = sub_08008CFC(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + 0x2000),
         sVar2 == 0)) {
        *(undefined *)(param_1 + 0xd) = 2;
        *(byte *)(param_1 + 0xbc) = bVar5;
        *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_1 + 0x54);
        *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0x58);
      }
      else {
        *(undefined *)(param_1 + 0xd) = 10;
      }
    }
    else if (*(int *)(param_1 + 0xb4) <= *(int *)(param_1 + 0x54) ==
             (bool)(*(byte *)(param_1 + 10) >> 4 & 1)) {
      *(undefined *)(param_1 + 0xd) = 5;
      *(undefined *)(param_1 + 0xbf) = 9;
    }
    else {
      *(undefined *)(param_1 + 0xd) = 9;
    }
    *(undefined *)(param_1 + 0xe) = 0;
    return in_lr;
  }
  if ((int)(uVar6 * 0x1000000) < 0) {
    uVar6 = uVar6 + 2;
    if (uVar6 < 0x101) {
LAB_080838ba:
      bVar5 = (byte)uVar6;
      goto LAB_080838bc;
    }
  }
  else {
    uVar6 = uVar6 - 2;
    if ((int)uVar6 < 1) goto LAB_080838ba;
  }
  bVar5 = 0;
LAB_080838bc:
  *(byte *)(param_1 + 0x24) = bVar5;
  return in_lr;
}

