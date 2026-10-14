// sub_080C21CC at 0x080C21CC (thumb)

undefined4 sub_080C21CC(int param_1)

{
  undefined4 in_lr;
  
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_08012580(param_1);
  sub_080127E4(param_1,*(undefined2 *)(&DAT_0834898c + (uint)*(byte *)(param_1 + 0x10) * 2));
  *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_1 + 0x58);
  *(uint *)(param_1 + 0x68) = (uint)DAT_02000fa4._2_2_;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0834863c + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  sub_080C222C(param_1);
  return in_lr;
}

