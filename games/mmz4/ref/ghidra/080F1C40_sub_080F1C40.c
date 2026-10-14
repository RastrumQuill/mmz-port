// sub_080F1C40 at 0x080F1C40 (thumb)

undefined4 sub_080F1C40(int param_1)

{
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 2;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_08865dc4 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
  sub_080F1C08();
  return in_lr;
}

