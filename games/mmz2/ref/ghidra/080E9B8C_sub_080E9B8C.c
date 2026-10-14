// sub_080E9B8C at 0x080E9B8C (thumb)

undefined4 sub_080E9B8C(int param_1)

{
  short sVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  ushort *puVar6;
  ushort *puVar7;
  int iVar8;
  undefined4 in_lr;
  
  if ((DAT_0202ebb4 & 2) == 0) {
    puVar6 = (ushort *)(*(int *)(param_1 + 0x18) + 0xf6);
  }
  else {
    puVar6 = (ushort *)(*(int *)(param_1 + 0x18) + 0x1f8);
  }
  uVar5 = *(undefined4 *)(DAT_0202ebf0 + 0xc);
  uVar3 = sub_080EF2B8(uVar5,0x34bc0);
  if (uVar3 < 100) {
    uVar5 = sub_080EF330(uVar5,0x34bc0);
    iVar8 = sub_080EF2B8(uVar5,0xe10);
    uVar5 = sub_080EF330(uVar5,0xe10);
    iVar4 = sub_080EF2B8(uVar5,0x3c);
  }
  else {
    uVar3 = 99;
    iVar8 = 0x3b;
    iVar4 = 0x3b;
  }
  iVar4 = uVar3 * 10000 + iVar8 * 100 + iVar4;
  uVar3 = 6;
  do {
    if ((DAT_0202ebb4 & 2) == 0) {
      uVar5 = sub_080EF330(iVar4,10);
      sVar1 = sub_080EF2B8(uVar5,5);
      sVar2 = sub_080EF330(iVar4,5);
      *puVar6 = (sVar1 + 5) * 0x20 + 0x1a + sVar2 & 0x3ffU | 0x2000;
    }
    else {
      sVar1 = sub_080EF330(iVar4,10);
      *puVar6 = sVar1 + 0x76U & 0x3ff | 0x6000;
    }
    puVar7 = puVar6 + -1;
    iVar4 = sub_080EF2B8(iVar4,10);
    uVar3 = uVar3 - 1;
    if ((uVar3 & 1) == 0) {
      puVar7 = puVar6 + -2;
    }
    puVar6 = puVar7;
  } while ((1 < uVar3) || (iVar4 != 0));
  return in_lr;
}

