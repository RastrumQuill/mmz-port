// sub_080C3E88 at 0x080C3E88 (thumb)

undefined4 sub_080C3E88(int param_1)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  ushort *puVar6;
  ushort *puVar7;
  int iVar8;
  undefined4 in_lr;
  
  iVar5 = *(int *)(param_1 + 0x18);
  uVar4 = *(undefined4 *)(DAT_02022b20 + 8);
  uVar2 = sub_080C8C38(uVar4,0x34bc0);
  if (uVar2 < 100) {
    uVar4 = sub_080C8CB0(uVar4,0x34bc0);
    iVar8 = sub_080C8C38(uVar4,0xe10);
    uVar4 = sub_080C8CB0(uVar4,0xe10);
    iVar3 = sub_080C8C38(uVar4,0x3c);
  }
  else {
    uVar2 = 99;
    iVar3 = 0x3b;
    iVar8 = 0x3b;
  }
  iVar3 = uVar2 * 10000 + iVar8 * 100 + iVar3;
  uVar2 = 6;
  puVar6 = (ushort *)(iVar5 + 0x1f8);
  do {
    sVar1 = sub_080C8CB0(iVar3,10);
    *puVar6 = sVar1 + 0x74U & 0x3ff | 0x6000;
    puVar7 = puVar6 + -1;
    iVar3 = sub_080C8C38(iVar3,10);
    uVar2 = uVar2 - 1;
    if ((uVar2 & 1) == 0) {
      puVar7 = puVar6 + -2;
    }
    puVar6 = puVar7;
  } while ((1 < uVar2) || (iVar3 != 0));
  return in_lr;
}

