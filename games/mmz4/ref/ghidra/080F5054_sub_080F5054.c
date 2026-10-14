// sub_080F5054 at 0x080F5054 (thumb)

undefined4 sub_080F5054(int param_1)

{
  undefined uVar1;
  undefined4 in_lr;
  
  sub_0801CC9C();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_0801CF00(param_1,*(undefined2 *)(&DAT_08866b30 + (uint)*(byte *)(param_1 + 0x10) * 2));
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 8;
  *(undefined **)(param_1 + 0x30) = &DAT_08866b20;
  *(undefined2 *)(param_1 + 0x26) = 0xf;
  *(undefined **)(param_1 + 0xb4) = &DAT_08866b68;
  uVar1 = sub_080F5194(param_1 + 0x54);
  *(undefined *)(param_1 + 0xb8) = uVar1;
  *(undefined2 *)(param_1 + 0xc2) = 0;
  return in_lr;
}

