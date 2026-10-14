// sub_0805593C at 0x0805593C (thumb)

undefined4 sub_0805593C(int param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 in_lr;
  
  iVar6 = *(int *)(param_1 + 0xc0);
  uVar7 = *(undefined4 *)(param_1 + 0xbc);
  iVar3 = *(int *)(param_1 + 0x4c) - *(int *)(iVar6 + 0x4c);
  iVar4 = *(int *)(param_1 + 0x50) - *(int *)(iVar6 + 0x50);
  iVar3 = iVar3 * iVar3;
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0xff;
  }
  iVar4 = iVar4 * iVar4;
  if (iVar4 < 0) {
    iVar4 = iVar4 + 0xff;
  }
  iVar3 = sub_080C88FC((iVar3 >> 8) + (iVar4 >> 8));
  iVar3 = sub_080C8AD0((uint)(iVar3 << 0x10) >> 0xc,7);
  uVar2 = iVar3 >> 8;
  if ((9 < (int)uVar2) && (uVar2 = uVar2 - 3, (int)uVar2 < 0)) {
    uVar2 = 0;
  }
  pbVar5 = (byte *)(param_1 + 0xc4);
  if (*pbVar5 != uVar2) {
    if ((int)(uint)*pbVar5 < (int)uVar2) {
      sub_0808CF0C(iVar6,uVar7);
      bVar1 = *pbVar5 + 1;
    }
    else {
      sub_0808CFC4(*(undefined4 *)(iVar6 + 0x24));
      bVar1 = *pbVar5 - 1;
    }
    *pbVar5 = bVar1;
  }
  return in_lr;
}

