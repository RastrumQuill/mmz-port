// sub_0803243C at 0x0803243C (thumb)

undefined4 sub_0803243C(undefined *param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  param_1[0xc] = 0;
  param_1[0xd] = 1;
  param_1[0xe] = 0;
  *param_1 = 0xff;
  param_1[1] = 0xff;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined2 *)(param_1 + 0x12) = 0;
  param_1[0x16] = 3;
  param_1[0x26] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  uVar1 = 0;
  do {
    if (param_1[uVar1 + 8] != -1) {
      param_1[uVar1 + 8] = '\0';
    }
    uVar1 = uVar1 + 1 & 0xff;
  } while (uVar1 < 4);
  *(undefined2 *)(param_1 + 4) = 0;
  param_1[0x2c] = 0x40;
  param_1[0x2d] = 0;
  return in_lr;
}

