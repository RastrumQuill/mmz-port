// sub_080CEC60 at 0x080CEC60 (thumb)

undefined4 sub_080CEC60(int param_1)

{
  undefined4 in_lr;
  
  sub_080FE2C0(param_1,*(undefined4 *)(&DAT_0836cd6c + (uint)*(byte *)(param_1 + 0xd) * 4));
  sub_080FE2C0(param_1,*(undefined4 *)(&DAT_0836cd78 + (uint)*(byte *)(param_1 + 0xd) * 4));
  *(undefined *)(param_1 + 0x13) = *(undefined *)(param_1 + 0x12);
  *(undefined *)(param_1 + 0x12) = 0;
  return in_lr;
}

