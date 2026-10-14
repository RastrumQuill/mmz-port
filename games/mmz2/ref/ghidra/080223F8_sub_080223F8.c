// sub_080223F8 at 0x080223F8 (thumb)

undefined4 sub_080223F8(int param_1,int param_2)

{
  ushort *puVar1;
  undefined4 in_lr;
  
  if (*(short *)(param_1 + 8 + param_2 * 2) == 0) {
    puVar1 = (ushort *)(param_1 + 0x10 + param_2 * 2);
    *puVar1 = *puVar1 | 0x8000;
  }
  return in_lr;
}

