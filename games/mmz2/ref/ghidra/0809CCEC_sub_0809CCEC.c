// sub_0809CCEC at 0x0809CCEC (thumb)

undefined4 sub_0809CCEC(int param_1)

{
  byte bVar1;
  short sVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x28);
  sub_080128D4();
  bVar1 = *(char *)(param_1 + 0x12) + 1;
  *(byte *)(param_1 + 0x12) = bVar1;
  if (bVar1 < 0x18) {
    iVar4 = *(int *)(param_1 + 0x54) + *(int *)(iVar4 + 0xd4);
    *(int *)(param_1 + 0x54) = iVar4;
    if (*(char *)(param_1 + 0xd) == '\0') {
      iVar4 = iVar4 + *(int *)(param_1 + 0x5c);
      *(int *)(param_1 + 0x54) = iVar4;
      sVar2 = sub_08008CFC(iVar4,*(int *)(param_1 + 0x58) + 0x800);
      if (sVar2 != 0) {
        return in_lr;
      }
      if (*(int *)(param_1 + 0x5c) < 0) {
        uVar3 = sub_08009684(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + 0x800);
      }
      else {
        uVar3 = sub_08009774(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + 0x800);
      }
      *(undefined4 *)(param_1 + 0x54) = uVar3;
      *(undefined4 *)(param_1 + 0x60) = 0x800;
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
      return in_lr;
    }
    if (*(char *)(param_1 + 0xd) != '\x01') {
      return in_lr;
    }
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    sVar2 = sub_08008CFC(iVar4);
    if (sVar2 == 0) {
      return in_lr;
    }
  }
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined *)(param_1 + 0x94) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  *(undefined4 *)(param_1 + 0xc) = 3;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 0xc);
  return in_lr;
}

