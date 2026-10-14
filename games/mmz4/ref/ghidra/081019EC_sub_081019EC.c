// sub_081019EC at 0x081019EC (thumb)

undefined4 sub_081019EC(int param_1)

{
  undefined4 in_lr;
  
  sub_08002624(*(undefined2 *)(param_1 + 0xbc));
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_08865dc4 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  return in_lr;
}

