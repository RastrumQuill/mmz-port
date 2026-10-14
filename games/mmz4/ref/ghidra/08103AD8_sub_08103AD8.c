// sub_08103AD8 at 0x08103AD8 (thumb)

undefined4 sub_08103AD8(int param_1)

{
  undefined4 in_lr;
  
  sub_08128884(param_1,*(undefined4 *)(&DAT_08868b68 + (uint)*(byte *)(param_1 + 0x10) * 4));
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_08865dc4 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  sub_08103B14(param_1);
  return in_lr;
}

