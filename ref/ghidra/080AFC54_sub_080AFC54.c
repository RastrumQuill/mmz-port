// sub_080AFC54 at 0x080AFC54 (thumb)

undefined4 sub_080AFC54(int param_1)

{
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0x12) = 0;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_082b5184 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  sub_080AFB80();
  return in_lr;
}

