// sub_080E9AD4 at 0x080E9AD4 (thumb)

undefined4 sub_080E9AD4(int param_1)

{
  short sVar1;
  short sVar2;
  undefined4 uVar3;
  uint uVar4;
  ushort *puVar5;
  undefined4 in_lr;
  
  if ((DAT_0202ebb4 & 2) == 0) {
    puVar5 = (ushort *)(*(int *)(param_1 + 0x18) + 0x236);
  }
  else {
    puVar5 = (ushort *)(*(int *)(param_1 + 0x18) + 0x138);
  }
  uVar4 = (uint)*(ushort *)(*(int *)(param_1 + 0x10) + 0x1fe);
  if (9999 < uVar4) {
    uVar4 = 9999;
  }
  do {
    if ((DAT_0202ebb4 & 2) == 0) {
      uVar3 = sub_080EF330(uVar4,10);
      sVar1 = sub_080EF2B8(uVar3,5);
      sVar2 = sub_080EF330(uVar4,5);
      *puVar5 = (sVar1 + 5) * 0x20 + 0x1a + sVar2 & 0x3ffU | 0x2000;
    }
    else {
      sVar1 = sub_080EF330(uVar4,10);
      *puVar5 = sVar1 + 0x76U & 0x3ff | 0x6000;
    }
    puVar5 = puVar5 + -1;
    uVar4 = sub_080EF2B8(uVar4,10);
  } while (uVar4 != 0);
  return in_lr;
}

