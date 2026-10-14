// sub_0802248C at 0x0802248C (thumb)

undefined4 sub_0802248C(int param_1,int param_2)

{
  ushort *puVar1;
  undefined4 in_lr;
  
  if (*(short *)(param_1 + 8 + param_2 * 2) == 0) {
    puVar1 = (ushort *)(param_1 + 0x10 + param_2 * 2);
    *puVar1 = *puVar1 | 0x800;
  }
  return in_lr;
}

