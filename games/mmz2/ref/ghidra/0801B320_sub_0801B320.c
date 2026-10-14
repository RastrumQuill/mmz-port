// sub_0801B320 at 0x0801B320 (thumb)

undefined4 sub_0801B320(undefined *param_1,undefined param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 in_lr;
  
  *param_1 = param_2;
  param_1[1] = 0;
  *(undefined2 *)(param_1 + 4) = 0;
  iVar2 = 0xb;
  puVar1 = (undefined4 *)(param_1 + 0xc0);
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + -4;
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  *(undefined4 *)(param_1 + 0xd0) = 0;
  *(undefined4 *)(param_1 + 0xd4) = 0;
  *(undefined2 *)(param_1 + 0x148) = 0;
  *(undefined4 *)(param_1 + 0x144) = 0;
  *(undefined2 *)(param_1 + 0x14a) = 0;
  *(undefined2 *)(param_1 + 0x14c) = 0;
  *(undefined2 *)(param_1 + 0x14e) = 0;
  *(undefined4 *)(param_1 + 0x150) = 0;
  *(undefined4 *)(param_1 + 0x154) = 0;
  *(undefined4 *)(param_1 + 0x158) = 0xffffffff;
  *(undefined2 *)(param_1 + 0x15e) = 0xffff;
  *(undefined2 *)(param_1 + 0x15c) = 0xffff;
  *(undefined4 *)(param_1 + 0x164) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x160) = 0xffffffff;
  DAT_0202ec42 = 0;
  DAT_03002ac0 = 0;
  DAT_03002ec2 = 0;
  DAT_03002ec1 = 0;
  DAT_03002ec0 = 0;
  sub_0800319C();
  return in_lr;
}

