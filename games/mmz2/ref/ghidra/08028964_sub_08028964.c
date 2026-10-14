// sub_08028964 at 0x08028964 (thumb)

undefined4 sub_08028964(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  uVar1 = sub_0801F57C(param_1 + 0x54,param_1 + 0xb4,(undefined4 *)(param_1 + 0xd8),
                       *(undefined4 *)(param_1 + 0xd8),*(undefined4 *)(param_1 + 0xdc),
                       *(byte *)(param_1 + 10) >> 4 & 1,0x800,0,0,1);
  if ((uVar1 & 0xf) == 0) {
    *(undefined *)(param_1 + 0xf) = 2;
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined4 *)(param_1 + 0x68) = 0x40;
    sub_080289BC(param_1);
  }
  return in_lr;
}

