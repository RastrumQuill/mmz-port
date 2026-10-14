// sub_080D2848 at 0x080D2848 (thumb)

undefined4 sub_080D2848(int param_1)

{
  undefined4 in_lr;
  
  sub_0800860C(*(int *)(param_1 + 0x54) >> 0xc,*(int *)(param_1 + 0x58) >> 0xc,&DAT_0831fbcc);
  sub_080B7330(param_1,3,1);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0834863c + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  return in_lr;
}

