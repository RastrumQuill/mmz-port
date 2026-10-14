// sub_080C3E34 at 0x080C3E34 (thumb)

undefined4 sub_080C3E34(int param_1)

{
  short sVar1;
  uint uVar2;
  ushort *puVar3;
  undefined4 in_lr;
  
  puVar3 = (ushort *)(*(int *)(param_1 + 0x18) + 0x138);
  uVar2 = (uint)*(ushort *)(*(int *)(param_1 + 0x10) + 0x1fe);
  if (9999 < uVar2) {
    uVar2 = 9999;
  }
  do {
    sVar1 = sub_080C8CB0(uVar2,10);
    *puVar3 = sVar1 + 0x74U & 0x3ff | 0x6000;
    puVar3 = puVar3 + -1;
    uVar2 = sub_080C8C38(uVar2,10);
  } while (uVar2 != 0);
  return in_lr;
}

