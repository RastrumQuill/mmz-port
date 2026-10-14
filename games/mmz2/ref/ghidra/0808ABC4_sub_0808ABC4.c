// sub_0808ABC4 at 0x0808ABC4 (thumb)

undefined4 sub_0808ABC4(int param_1)

{
  byte bVar1;
  ushort uVar2;
  short sVar3;
  undefined uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  byte *pbVar8;
  undefined4 in_lr;
  
  iVar5 = *(int *)(param_1 + 0x60);
  if (iVar5 < 0) {
    iVar5 = -iVar5;
  }
  *(int *)(param_1 + 0xb4) = *(int *)(param_1 + 0xb4) + iVar5;
  iVar5 = sub_08009684(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  *(int *)(param_1 + 0x54) = iVar5;
  iVar6 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x58) = iVar6;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  uVar2 = sub_08008354(iVar5 + -0x400,iVar6 + -0xe00);
  bVar1 = *(byte *)(param_1 + 10);
  if ((bVar1 & 0x10) != 0) {
    if (uVar2 == 0x8001) {
      uVar7 = ~(((uint)bVar1 << 0x18) >> 0x1c) & 1;
      if (uVar7 == 0) {
LAB_0808ac96:
        bVar1 = bVar1 & 0xef;
      }
      else {
        bVar1 = bVar1 | 0x10;
      }
LAB_0808ac9a:
      *(byte *)(param_1 + 10) = bVar1;
      *(char *)(param_1 + 0x4c) = (char)uVar7;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar7 << 4);
      *(int *)(param_1 + 0x60) = -*(int *)(param_1 + 0x60);
    }
    else if ((uVar2 & 0xf) == 1) {
      *(undefined *)(param_1 + 0xd) = 2;
      *(undefined *)(param_1 + 0x12) = 0xc0;
      *(undefined4 *)(param_1 + 0x5c) = 0;
      *(undefined4 *)(param_1 + 0x60) = 0xa00;
    }
    else {
      sVar3 = sub_08008CFC(*(int *)(param_1 + 0x54) + -0x400,*(int *)(param_1 + 0x58) + -0xe00);
      if (sVar3 != 0) {
        bVar1 = *(byte *)(param_1 + 10);
        uVar7 = ~(uint)(bVar1 >> 4) & 1;
        if (uVar7 == 0) goto LAB_0808ac96;
        bVar1 = bVar1 | 0x10;
        goto LAB_0808ac9a;
      }
    }
  }
  pbVar8 = (byte *)(param_1 + 0x4a);
  iVar5 = *(int *)(param_1 + 0x58) + 0xe00;
  if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
    iVar5 = *(int *)(param_1 + 0x58) + -0xe00;
  }
  sVar3 = sub_08008354(*(int *)(param_1 + 0x54) + 0x600,iVar5);
  if (sVar3 == 1) {
    sVar3 = sub_08008354(*(int *)(param_1 + 0x54) + -0x200,*(int *)(param_1 + 0x58) + 0xe00);
    if ((sVar3 == 0) || (bVar1 = *(byte *)(param_1 + 10), (bVar1 & 0x10) != 0)) goto LAB_0808ad72;
    uVar7 = ~(uint)(bVar1 >> 4) & 1;
    if (uVar7 == 0) {
      bVar1 = bVar1 & 0xef;
    }
    else {
      bVar1 = bVar1 | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar1;
    *(char *)(param_1 + 0x4c) = (char)uVar7;
    bVar1 = *pbVar8;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10);
    uVar7 = ~(uint)(bVar1 >> 4) & 1;
    if (uVar7 == 0) {
      bVar1 = bVar1 & 0xef;
    }
    else {
      bVar1 = bVar1 | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar1;
    *(char *)(param_1 + 0x4c) = (char)uVar7;
    bVar1 = *pbVar8;
  }
  *pbVar8 = bVar1 & 0xef | (byte)(uVar7 << 4);
  *(int *)(param_1 + 0x60) = -*(int *)(param_1 + 0x60);
LAB_0808ad72:
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x20;
  *(undefined *)(param_1 + 0x4d) = 1;
  *pbVar8 = *pbVar8 & 0xdf | 0x20;
  uVar4 = 0x40;
  if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
    uVar4 = 0xc0;
  }
  *(undefined *)(param_1 + 0x24) = uVar4;
  return in_lr;
}

