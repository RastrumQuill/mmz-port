// sub_080230A0 at 0x080230A0 (thumb)

ulonglong sub_080230A0(undefined4 param_1,int param_2)

{
  ushort uVar1;
  ushort *puVar2;
  undefined4 in_lr;
  
  puVar2 = (ushort *)sub_08022A54();
  uVar1 = *puVar2;
  param_2 = (uint)uVar1 - param_2;
  if (param_2 < 0) {
    param_2 = 0;
  }
  *puVar2 = (ushort)param_2;
  return CONCAT44(in_lr,(uint)uVar1 - param_2) & 0xffffffff0000ffff;
}

