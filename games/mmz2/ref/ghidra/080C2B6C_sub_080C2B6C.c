// sub_080C2B6C at 0x080C2B6C (thumb)

undefined4 sub_080C2B6C(int param_1)

{
  undefined4 in_lr;
  
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_08012580(param_1);
  sub_080127D0(param_1);
  *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_1 + 0x58);
  *(uint *)(param_1 + 0x68) = (uint)DAT_02000fa0._2_2_;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0834863c + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  sub_080C22E8(param_1);
  return in_lr;
}

