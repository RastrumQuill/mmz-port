// sub_081017B0 at 0x081017B0 (thumb)

undefined4 sub_081017B0(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xb8) = **(undefined4 **)(param_1 + 0x28);
  sub_0810170C(param_1,0);
  sub_0810170C(param_1,1);
  sub_0810170C(param_1,2);
  uVar1 = (uint)(byte)DAT_0202df0e;
  *(undefined4 *)(param_1 + 0xbc) = 0xa6;
  sub_0800249C(0xa6,uVar1 << 5 | 0x200);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_08865dc4 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  sub_08101780(param_1);
  return in_lr;
}

