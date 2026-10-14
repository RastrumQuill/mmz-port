// sub_0807725C at 0x0807725C (thumb)

undefined4 sub_0807725C(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xc6) == '\0') {
    sub_08079080(param_1);
  }
  else {
    sub_08078FA0(param_1);
  }
  sub_08128884(param_1,*(undefined4 *)(&DAT_08859c14 + (uint)*(byte *)(param_1 + 0xd) * 4));
  return in_lr;
}

