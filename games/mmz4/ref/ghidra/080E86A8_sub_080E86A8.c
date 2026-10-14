// sub_080E86A8 at 0x080E86A8 (thumb)

undefined4 sub_080E86A8(int param_1)

{
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08863a28)[*(byte *)(param_1 + 9)] + 4);
  sub_0801CDBC(param_1);
  *(undefined *)(param_1 + 0x25) = 0x19;
  sub_0801D3D0(param_1,0xd);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  *(undefined *)(param_1 + 0x13) = 0x80;
  sub_080E86F0(param_1);
  return in_lr;
}

