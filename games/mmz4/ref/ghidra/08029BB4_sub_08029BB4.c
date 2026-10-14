// sub_08029BB4 at 0x08029BB4 (thumb)

undefined4 sub_08029BB4(undefined *param_1)

{
  undefined4 in_lr;
  
  sub_0802AA2C();
  DAT_02000a50 = 0;
  DAT_02000a5e = 0xff;
  DAT_02000a40 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  *(undefined2 *)(param_1 + 10) = 0;
  *(undefined2 *)(param_1 + 8) = 0;
  *(undefined2 *)(param_1 + 6) = 0;
  *(undefined2 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return in_lr;
}

