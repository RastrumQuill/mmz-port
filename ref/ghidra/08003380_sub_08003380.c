// sub_08003380 at 0x08003380 (thumb)

void sub_08003380(int param_1,undefined4 *param_2,int param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(param_1 + param_3 * 4);
  *param_2 = *puVar1;
  *puVar1 = param_2;
  return;
}

