// sub_0806C788 at 0x0806C788 (thumb)

undefined4 sub_0806C788(int param_1)

{
  undefined4 in_lr;
  
  if ((*(ushort *)(param_1 + 0x90) & 0x1000) == 0) {
    *(undefined *)(param_1 + 0xd) = 1;
  }
  else if ((*(ushort *)(param_1 + 0x90) & 0x800) == 0) {
    *(undefined *)(param_1 + 0xd) = 2;
  }
  else {
    *(undefined *)(param_1 + 0xd) = 3;
  }
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined *)(param_1 + 0x94) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  *(undefined *)(param_1 + 0xe) = 1;
  sub_080C8A98(param_1,*(undefined4 *)(&DAT_082b0e48 + (uint)*(byte *)(param_1 + 0xd) * 4));
  return in_lr;
}

