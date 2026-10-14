// sub_080ABA3C at 0x080ABA3C (thumb)

undefined4 sub_080ABA3C(int param_1)

{
  undefined4 in_lr;
  
  DAT_02000a40 = 0;
  DAT_02000a50 = DAT_02000a50 & 0xbfff;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined *)(param_1 + 0x94) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfa;
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  return in_lr;
}

