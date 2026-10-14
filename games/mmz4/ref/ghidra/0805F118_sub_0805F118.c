// sub_0805F118 at 0x0805F118 (thumb)

undefined8 sub_0805F118(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  byte abStack_24 [8];
  undefined4 local_1c [3];
  
  sub_08128B5C(abStack_24,&DAT_081290f4,5);
  local_1c[0] = 0x80;
  local_1c[1] = 0x80;
  local_1c[2] = 0x80;
  iVar1 = FUN_081288bc((int)*(short *)(param_1 + 0xa4) << 2,local_1c[*(byte *)(param_1 + 0x10)]);
  return CONCAT44(in_lr,(uint)abStack_24[iVar1]);
}

