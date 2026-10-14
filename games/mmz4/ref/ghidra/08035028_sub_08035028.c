// sub_08035028 at 0x08035028 (thumb)

undefined4 sub_08035028(int param_1)

{
  undefined4 in_lr;
  
  if ((*(char *)(param_1 + 0xc0) == '\x04') || (*(char *)(param_1 + 0xc1) == '\x04')) {
    *(byte *)(param_1 + 0x153) = *(byte *)(param_1 + 0x153) | 4;
    sub_08128884(param_1,*(undefined4 *)(&DAT_0884fc24 + (uint)*(byte *)(param_1 + 0x101) * 4));
  }
  else {
    *(undefined *)(param_1 + 0x100) = 0;
    sub_0801CFC8(param_1,0x200,(short)*(char *)(param_1 + 0x71),(short)*(char *)(param_1 + 0x72));
  }
  return in_lr;
}

