// sub_0810B7BC at 0x0810B7BC (thumb)

undefined4 sub_0810B7BC(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  sub_0801CC9C();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) & 0xf3;
  sub_0801CF00(param_1,0x6502);
  *(undefined *)(*(int *)(param_1 + 0x28) + 0xdce) = 0;
  uVar1 = (uint)*(byte *)(*(int *)(param_1 + 0x28) + 0xdce);
  uVar2 = (&DAT_08869794)[uVar1 * 2];
  *(undefined4 *)(param_1 + 0x54) = (&DAT_08869790)[uVar1 * 2];
  *(undefined4 *)(param_1 + 0x58) = uVar2;
  return in_lr;
}

