// sub_080223A0 at 0x080223A0 (thumb)

void sub_080223A0(int param_1,int param_2)

{
  ushort *puVar1;
  
  puVar1 = (ushort *)(param_1 + 0x10 + param_2 * 2);
  *puVar1 = *puVar1 | 1;
  return;
}

