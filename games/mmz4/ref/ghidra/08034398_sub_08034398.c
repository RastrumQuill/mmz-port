// sub_08034398 at 0x08034398 (thumb)

undefined4 sub_08034398(int param_1)

{
  undefined2 uVar1;
  undefined4 in_lr;
  
  if ((*(char *)(param_1 + 0xc0) == '\x04') || (*(char *)(param_1 + 0xc1) == '\x04')) {
    *(byte *)(param_1 + 0x153) = *(byte *)(param_1 + 0x153) | 4;
    sub_08128884(param_1,*(undefined4 *)(&DAT_0884fb8c + (uint)*(byte *)(param_1 + 0x101) * 4));
  }
  else {
    *(undefined *)(param_1 + 0x100) = 0;
    uVar1 = sub_0802B7C0(param_1);
    sub_0801CF00(param_1,uVar1);
  }
  return in_lr;
}

