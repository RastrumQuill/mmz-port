// sub_0806D808 at 0x0806D808 (thumb)

undefined4 sub_0806D808(int param_1)

{
  undefined4 in_lr;
  
  sub_08001EAC(2);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  return in_lr;
}

