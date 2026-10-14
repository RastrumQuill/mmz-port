// sub_080A0950 at 0x080A0950 (thumb)

undefined4 sub_080A0950(int param_1)

{
  undefined4 in_lr;
  
  sub_08001EE8((int)*(short *)(param_1 + 0xc4));
  *(short *)(param_1 + 0xc4) = -1;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_082b5184 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  return in_lr;
}

