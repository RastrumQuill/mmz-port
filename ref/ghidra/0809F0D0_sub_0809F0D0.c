// sub_0809F0D0 at 0x0809F0D0 (thumb)

undefined4 sub_0809F0D0(int param_1)

{
  undefined4 in_lr;
  
  sub_08001EE8((int)*(short *)(param_1 + 200));
  *(short *)(param_1 + 200) = -1;
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_082b5184 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  return in_lr;
}

