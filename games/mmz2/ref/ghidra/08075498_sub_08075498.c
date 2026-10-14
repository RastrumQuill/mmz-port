// sub_08075498 at 0x08075498 (thumb)

undefined4 sub_08075498(int param_1)

{
  undefined4 in_lr;
  
  sub_080AC60C(1,param_1 + 0x54);
  sub_080032EC(0x35);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  return in_lr;
}

