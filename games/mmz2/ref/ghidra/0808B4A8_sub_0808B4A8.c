// sub_0808B4A8 at 0x0808B4A8 (thumb)

undefined4 sub_0808B4A8(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x54) + (*(int *)(param_1 + 0x5c) >> 1);
  *(int *)(param_1 + 0x54) = iVar4;
  bVar1 = *(byte *)(param_1 + 10);
  if ((bVar1 & 0x10) == 0) {
    iVar4 = sub_08009240(iVar4 + -0x800,*(undefined4 *)(param_1 + 0x58));
    if (iVar4 < 1) goto LAB_0808b4f4;
    *(byte *)(param_1 + 0x12) = bVar1 & 0x10;
  }
  else {
    iVar4 = sub_080090D4(iVar4 + 0x800,*(undefined4 *)(param_1 + 0x58));
    if (-1 < iVar4) goto LAB_0808b4f4;
    *(undefined *)(param_1 + 0x12) = 0;
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar4;
LAB_0808b4f4:
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  iVar4 = *(int *)(param_1 + 0x60) + 0x40;
  *(int *)(param_1 + 0x60) = iVar4;
  if (0x6ff < iVar4) {
    *(undefined4 *)(param_1 + 0x60) = 0x700;
  }
  iVar3 = sub_08008DE8(*(int *)(param_1 + 0x54) + -0x800,*(int *)(param_1 + 0x58) + 0x40);
  iVar4 = sub_08008DE8(*(int *)(param_1 + 0x54) + 0x800,*(int *)(param_1 + 0x58) + 0x40);
  if ((iVar3 < 0) || (iVar4 < 0)) {
    if (iVar3 < iVar4) {
      iVar3 = *(int *)(param_1 + 0x58) + iVar3;
    }
    else {
      iVar3 = *(int *)(param_1 + 0x58) + iVar4;
    }
    *(int *)(param_1 + 0x58) = iVar3;
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x20;
  *(undefined *)(param_1 + 0x4d) = 1;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xdf | 0x20;
  cVar2 = sub_08089400(param_1);
  if (cVar2 != '\0') {
    *(undefined4 *)(param_1 + 0xc0) = 0;
    sub_080894CC(param_1);
    sub_08089A40(param_1);
  }
  return in_lr;
}

