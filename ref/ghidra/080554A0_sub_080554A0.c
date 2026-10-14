// sub_080554A0 at 0x080554A0 (thumb)

undefined4 sub_080554A0(int param_1)

{
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 2;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 8);
  sub_080554C0();
  return in_lr;
}

