// sub_080491C8 at 0x080491C8 (thumb)

undefined4 sub_080491C8(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  cVar1 = sub_08048FEC();
  if (cVar1 == '\0') {
    sub_080FE2C0(param_1,*(undefined4 *)(&DAT_0835eef4 + (uint)*(byte *)(param_1 + 0xd) * 4));
    sub_080FE2C0(param_1,*(undefined4 *)(&DAT_0835ef48 + (uint)*(byte *)(param_1 + 0xd) * 4));
  }
  return in_lr;
}

