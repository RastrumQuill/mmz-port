// sub_0808A60C at 0x0808A60C (thumb)

undefined4 sub_0808A60C(int param_1)

{
  bool bVar1;
  byte bVar2;
  char cVar3;
  short sVar4;
  int iVar5;
  uint *puVar6;
  undefined4 in_lr;
  
  iVar5 = *(int *)(DAT_0202e130 + 0x54) - *(int *)(param_1 + 0x54);
  if (*(int *)(DAT_0202e130 + 0x54) == *(int *)(param_1 + 0x54) || iVar5 < 0) {
    bVar2 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar2;
  *(bool *)(param_1 + 0x4c) = 0 < iVar5;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (0 < iVar5) << 4;
  *(int *)(param_1 + 0xb4) = *(int *)(param_1 + 0xb4) + *(int *)(param_1 + 0x60);
  puVar6 = (uint *)(param_1 + 0xb8);
  *puVar6 = *puVar6 + *(int *)(param_1 + 0x60);
  iVar5 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x58) = iVar5;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  if ((0 < *(int *)(param_1 + 0x60)) || (0x7fff < *puVar6)) {
    sVar4 = sub_08008CFC(*(int *)(param_1 + 0x54) + -0x800,iVar5 + 0x3000);
    if ((sVar4 == 0) &&
       (sVar4 = sub_08008CFC(*(int *)(param_1 + 0x54) + 0x800,*(int *)(param_1 + 0x58) + 0x3000),
       sVar4 == 0)) {
      iVar5 = *(int *)(param_1 + 0xc0) - *(int *)(param_1 + 0x58);
      if (iVar5 < 0) {
        iVar5 = *(int *)(param_1 + 0x58) - *(int *)(param_1 + 0xc0);
      }
      if (iVar5 < 0x6001) {
        return in_lr;
      }
    }
    *(undefined *)(param_1 + 0x12) = 0;
    *(undefined *)(param_1 + 0xd) = 7;
    *(int *)(param_1 + 0x60) = -*(int *)(param_1 + 0x60);
    return in_lr;
  }
  cVar3 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar3;
  if (cVar3 == '\0') {
    if (iVar5 < *(int *)(DAT_0202e130 + 0x58) + -0x2000) {
      bVar1 = *(int *)(DAT_0202e130 + 0x54) < *(int *)(param_1 + 0x54);
      if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
        if (bVar1) goto LAB_0808a730;
      }
      else if (!bVar1) {
LAB_0808a730:
        *(undefined *)(param_1 + 0xd) = 5;
        sub_080127E4(param_1,0x7406);
        goto LAB_0808a748;
      }
    }
    *(undefined *)(param_1 + 0xd) = 7;
  }
LAB_0808a748:
  sVar4 = sub_08008354(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + -0x2000);
  if (sVar4 == 0) {
    return in_lr;
  }
  *(int *)(param_1 + 0x60) = -*(int *)(param_1 + 0x60);
  *(undefined *)(param_1 + 0x12) = 0;
  if (*(int *)(param_1 + 0x58) < *(int *)(DAT_0202e130 + 0x58) + -0x2000) {
    bVar1 = *(int *)(DAT_0202e130 + 0x54) < *(int *)(param_1 + 0x54);
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      if (bVar1) goto LAB_0808a79c;
    }
    else if (!bVar1) {
LAB_0808a79c:
      *(undefined *)(param_1 + 0xd) = 5;
      sub_080127E4(param_1,0x7406);
      return in_lr;
    }
  }
  *(undefined *)(param_1 + 0xd) = 7;
  return in_lr;
}

