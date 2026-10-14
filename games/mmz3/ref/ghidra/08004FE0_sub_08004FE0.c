// sub_08004FE0 at 0x08004FE0 (thumb)

void sub_08004FE0(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 0x200);
  *param_2 = *puVar1;
  *puVar1 = param_2;
  return;
}

