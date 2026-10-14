// sub_08004A58 at 0x08004A58 (thumb)

void sub_08004A58(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 0x200);
  *param_2 = *puVar1;
  *puVar1 = param_2;
  return;
}

