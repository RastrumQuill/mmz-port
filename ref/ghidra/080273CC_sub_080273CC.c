// sub_080273CC at 0x080273CC (thumb)

undefined4 sub_080273CC(int param_1)

{
  int iVar1;
  byte *pbVar2;
  undefined4 in_lr;
  
  iVar1 = sub_0802731C();
  pbVar2 = (byte *)(iVar1 + 0x62);
  if ((*pbVar2 == 0) && ((*(ushort *)(param_1 + 0x90) & 0x220) != 0)) {
    sub_08001EAC(4);
    *pbVar2 = *pbVar2 | 1;
  }
  return in_lr;
}

