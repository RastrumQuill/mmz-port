// sub_0803E2EC at 0x0803E2EC (thumb)

undefined4 sub_0803E2EC(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  
  if (((*(uint *)(param_1 + 0x8c) & 0x200) != 0) || (*(short *)(param_1 + 0xa4) == 0)) {
    bVar1 = (byte)DAT_020301a8;
    if (((DAT_020301a8 & 8) == 0) && (*(char *)(param_1 + 0xd) != '\x06')) {
      sub_0800471C(0xe8);
      *(undefined *)(param_1 + 0xd) = 6;
      *(byte *)(param_1 + 0xe) = bVar1 & 8;
    }
  }
  sub_080FE2C0(param_1,*(undefined4 *)(&DAT_0835e2b4 + (uint)*(byte *)(param_1 + 0xd) * 4));
  sub_080FE2C0(param_1,*(undefined4 *)(&UNK_0835e2d0 + (uint)*(byte *)(param_1 + 0xd) * 4));
  return in_lr;
}

