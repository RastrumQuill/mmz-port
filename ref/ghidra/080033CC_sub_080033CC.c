// sub_080033CC at 0x080033CC (thumb)

void sub_080033CC(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(param_1 + 0xc);
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + -1;
  } while (param_1 <= (int)puVar1);
  return;
}

