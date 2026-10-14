// sub_080E98C8 at 0x080E98C8 (thumb)

undefined4 sub_080E98C8(int param_1)

{
  ushort uVar1;
  int iVar2;
  ushort *puVar3;
  ushort uVar4;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x18);
  if ((DAT_0202ebb4 & 2) == 0) {
    uVar1 = 6 - *(byte *)(DAT_0202ebf0 + 1) & 0xff;
    uVar4 = 0x2000;
    *(ushort *)(iVar2 + 0x312) = uVar1 + 0x140 | 0x2000;
    puVar3 = (ushort *)(iVar2 + 0x352);
    uVar1 = uVar1 + 0x160;
  }
  else {
    puVar3 = (ushort *)(iVar2 + 0x9e);
    uVar1 = *(byte *)(DAT_0202ebf0 + 1) + 0x96;
    uVar4 = 0x6000;
  }
  *puVar3 = uVar1 | uVar4;
  return in_lr;
}

