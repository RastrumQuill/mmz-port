// sub_080289BC at 0x080289BC (thumb)

undefined4 sub_080289BC(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  sub_08032A04(param_1);
  uVar1 = sub_0801F57C(param_1 + 0x54,param_1 + 0xb4,(undefined4 *)(param_1 + 0xd8),
                       *(undefined4 *)(param_1 + 0xd8),*(undefined4 *)(param_1 + 0xdc),
                       *(byte *)(param_1 + 10) >> 4 & 1,1,1,0,1);
  if ((uVar1 & 0xf) != 0) {
    *(undefined *)(param_1 + 0xf) = 1;
  }
  return in_lr;
}

