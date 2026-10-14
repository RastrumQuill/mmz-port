// sub_080E6C18 at 0x080E6C18 (thumb)

undefined4 sub_080E6C18(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xd) != '\x02') {
    sub_08128884(param_1,*(undefined4 *)(&DAT_08865b2c + (uint)*(byte *)(param_1 + 0xd) * 4));
  }
  sub_0801CFF0(param_1);
  return in_lr;
}

