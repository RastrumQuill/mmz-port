// sub_0808F440 at 0x0808F440 (thumb)

undefined4 sub_0808F440(int param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    uVar3 = (uint)*(byte *)(param_1 + 0x12);
    *(uint *)(param_1 + 0x5c) = uVar3 * 0x280 + -0x140;
    if (uVar3 == 0) {
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar1;
    *(byte *)(param_1 + 0x4c) = *(byte *)(param_1 + 0x12);
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)((uVar3 & 1) << 4);
    sub_080127E4(param_1,0x7801);
    *(undefined4 *)(param_1 + 0xbc) = 0x3000;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  iVar2 = *(int *)(param_1 + 0x60) + 0x40;
  *(int *)(param_1 + 0x60) = iVar2;
  if (0x6ff < iVar2) {
    *(undefined4 *)(param_1 + 0x60) = 0x700;
  }
  if ((0 < *(int *)(param_1 + 0x60)) &&
     (iVar2 = sub_080093C4(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58)),
     iVar2 < *(int *)(param_1 + 0x58))) {
    *(int *)(param_1 + 0x58) = iVar2;
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  iVar2 = *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar2;
  if (iVar2 < 0) {
    iVar2 = -iVar2;
  }
  *(int *)(param_1 + 0xbc) = *(int *)(param_1 + 0xbc) - iVar2;
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    iVar2 = sub_08009240(*(int *)(param_1 + 0x54) + -0x800,*(int *)(param_1 + 0x58) + -0x400);
    if (iVar2 < 1) goto LAB_0808f54c;
  }
  else {
    iVar2 = sub_080090D4(*(int *)(param_1 + 0x54) + 0x800,*(int *)(param_1 + 0x58) + -0x400);
    if (-1 < iVar2) goto LAB_0808f54c;
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar2;
LAB_0808f54c:
  sub_080128D4(param_1);
  return in_lr;
}

