// sub_080C3DBC at 0x080C3DBC (thumb)

undefined4 sub_080C3DBC(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x18);
  bVar1 = *DAT_02022b20;
  *(ushort *)(iVar2 + 0x1e) = bVar1 + 0xb4 | 0x6000;
  *(ushort *)(iVar2 + 0x5e) = bVar1 + 0xd4 | 0x6000;
  return in_lr;
}

