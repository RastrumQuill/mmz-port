// sub_08014130 at 0x08014130 (thumb)

undefined4 sub_08014130(undefined *param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined4 in_lr;
  
  *param_1 = 2;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[8] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[9] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined2 *)(param_1 + 10) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  param_1[0x4c] = 0;
  iVar2 = 0x13;
  puVar1 = param_1 + 0x33;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + -1;
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  puVar1 = param_1 + 0x3b;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + -1;
  } while ((int)(param_1 + 0x34) <= (int)puVar1);
  puVar1 = param_1 + 0x4b;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + -1;
  } while ((int)(param_1 + 0x3c) <= (int)puVar1);
  return in_lr;
}

