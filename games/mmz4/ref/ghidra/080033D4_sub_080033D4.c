// sub_080033D4 at 0x080033D4 (thumb)

void sub_080033D4(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 0x200);
  *param_2 = *puVar1;
  *puVar1 = param_2;
  return;
}

