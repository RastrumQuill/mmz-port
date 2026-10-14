// sub_080E80D0 at 0x080E80D0 (thumb)

undefined4 sub_080E80D0(int param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  byte *pbVar5;
  int iVar6;
  undefined4 in_lr;
  
  sub_0801CC9C();
  bVar4 = *(byte *)(param_1 + 10);
  *(byte *)(param_1 + 10) = bVar4 | 3;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08863a28)[*(byte *)(param_1 + 9)] + 4);
  bVar1 = *(byte *)(param_1 + 0x10);
  if (bVar1 < 5) {
    *(byte *)(param_1 + 0x22) = bVar1;
    sub_0801CF00(param_1,0xf602);
  }
  else if (bVar1 == 5) {
    uVar2 = *(byte *)(param_1 + 0x11) & 1;
    if ((*(byte *)(param_1 + 0x11) & 1) == 0) {
      bVar4 = bVar4 & 0xef | 3;
    }
    else {
      bVar4 = bVar4 | 0x13;
    }
    *(byte *)(param_1 + 10) = bVar4;
    *(char *)(param_1 + 0x4c) = (char)uVar2;
    pbVar5 = (byte *)(param_1 + 0x4a);
    *pbVar5 = *pbVar5 & 0xef | (byte)(uVar2 << 4);
    uVar2 = (uint)(*(byte *)(param_1 + 0x11) >> 1);
    if (uVar2 == 0) {
      bVar4 = *(byte *)(param_1 + 10) & 0xdf;
    }
    else {
      bVar4 = *(byte *)(param_1 + 10) | 0x20;
    }
    *(byte *)(param_1 + 10) = bVar4;
    uVar2 = uVar2 & 1;
    *(char *)(param_1 + 0x4d) = (char)uVar2;
    *pbVar5 = *pbVar5 & 0xdf | (byte)(uVar2 << 5);
    sub_0801CF00(param_1,0x430a);
    iVar6 = *(int *)(param_1 + 0x58) + -0x3200;
    *(int *)(param_1 + 0x58) = iVar6;
    iVar3 = *(int *)(param_1 + 0x54) + 0x5a00;
    *(int *)(param_1 + 0x54) = iVar3;
    *(int *)(param_1 + 0x54) =
         iVar3 + *(int *)(&DAT_08865ca0 + (uint)*(byte *)(param_1 + 0x11) * 8) * 0x100;
    *(int *)(param_1 + 0x58) =
         iVar6 + *(int *)(&DAT_08865ca4 + (uint)*(byte *)(param_1 + 0x11) * 8) * 0x100;
  }
  else {
    sub_0801CF00(param_1,0xf603);
    if (*(char *)(param_1 + 0x11) == '\0') {
      iVar3 = *(int *)(param_1 + 0x54);
      iVar6 = -0x3000;
    }
    else {
      iVar3 = *(int *)(param_1 + 0x54);
      iVar6 = 0x3000;
    }
    *(int *)(param_1 + 0x54) = iVar3 + iVar6;
    iVar3 = sub_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(int *)(param_1 + 0x58) = iVar3 + 0x300;
  }
  sub_080E8208(param_1);
  return in_lr;
}

