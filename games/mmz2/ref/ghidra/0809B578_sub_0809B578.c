// sub_0809B578 at 0x0809B578 (thumb)

undefined4 sub_0809B578(int param_1)

{
  char cVar1;
  byte bVar2;
  short sVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  undefined4 in_lr;
  
  sub_080128D4();
  cVar1 = *(char *)(param_1 + 0xbd) + -7;
  *(char *)(param_1 + 0xbd) = cVar1;
  *(char *)(param_1 + 0x24) = cVar1;
  if ((*(byte *)(param_1 + 0x12) & 0xf) == 0) {
    uVar4 = sub_080B2A10(param_1 + 0x54,1,0);
    *(undefined4 *)(param_1 + 0xc0) = uVar4;
  }
  else if ((*(byte *)(param_1 + 0x12) & 0xf) == 8) {
    *(undefined4 *)(*(int *)(param_1 + 0xc0) + 0x78) = *(undefined4 *)(param_1 + 0x54);
    *(undefined4 *)(*(int *)(param_1 + 0xc0) + 0x80) = *(undefined4 *)(param_1 + 0x58);
  }
  sVar3 = sub_08008CFC(*(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c),
                       *(undefined4 *)(param_1 + 0x58));
  if ((sVar3 != 0) && (sVar3 != -0x7ff1)) {
    bVar2 = *(byte *)(param_1 + 10);
    uVar6 = ~(uint)(bVar2 >> 4) & 1;
    if (uVar6 == 0) {
      bVar2 = bVar2 & 0xef;
    }
    else {
      bVar2 = bVar2 | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar2;
    *(char *)(param_1 + 0x4c) = (char)uVar6;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar6 << 4);
    *(int *)(param_1 + 0x5c) = -*(int *)(param_1 + 0x5c);
  }
  iVar5 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = iVar5;
  sVar3 = sub_08008CFC(iVar5,*(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60));
  if ((sVar3 != 0) && (sVar3 != -0x7ff1)) {
    *(int *)(param_1 + 0x60) = -*(int *)(param_1 + 0x60);
  }
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  bVar2 = *(byte *)(param_1 + 0x12);
  *(byte *)(param_1 + 0x12) = bVar2 + 1;
  if (0x78 < bVar2) {
    sub_080B2A10(param_1 + 0x54,2,*(byte *)(param_1 + 10) >> 4 & 1);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 8);
    sub_0809B2D4(param_1);
  }
  return in_lr;
}

