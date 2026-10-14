// sub_08022420 at 0x08022420 (thumb)

undefined4 sub_08022420(int param_1,int param_2,undefined4 param_3,undefined4 param_4,uint param_5)

{
  ushort *puVar1;
  undefined4 in_lr;
  
  if ((param_5 & 0x4000) != 0) {
    puVar1 = (ushort *)(param_1 + 0x10 + param_2 * 2);
    *puVar1 = *puVar1 | 0x4000;
  }
  if ((param_5 & 0x2000) != 0) {
    puVar1 = (ushort *)(param_1 + 0x10 + param_2 * 2);
    *puVar1 = *puVar1 | 0x2000;
  }
  return in_lr;
}

