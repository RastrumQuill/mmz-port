// sub_08003358 at 0x08003358 (thumb)

void sub_08003358(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(param_1 + 0xc);
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + -1;
  } while (param_1 <= (int)puVar1);
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  return;
}

