// sub_080FF56C at 0x080FF56C (thumb)

undefined4 sub_080FF56C(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  uVar1 = sub_0801FB14(&DAT_0202e9f8,param_1 + 0x54);
  if (0xf000 < uVar1) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_08865dc4 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
  }
  return in_lr;
}

