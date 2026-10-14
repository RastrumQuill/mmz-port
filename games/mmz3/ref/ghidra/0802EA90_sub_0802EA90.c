// sub_0802EA90 at 0x0802EA90 (thumb)

undefined4 sub_0802EA90(int param_1)

{
  undefined4 in_lr;
  
  if ((*(char *)(param_1 + 0xc0) == '\x03') || (*(char *)(param_1 + 0xc1) == '\x03')) {
    *(byte *)(param_1 + 0x124) = *(byte *)(param_1 + 0x124) | 2;
    sub_080FE2C0(param_1,*(undefined4 *)(&DAT_0835ae28 + (uint)*(byte *)(param_1 + 0xed) * 4));
  }
  else {
    *(undefined *)(param_1 + 0xec) = 0;
    sub_080177CC(param_1,0x200,(short)*(char *)(param_1 + 0x71),(short)*(char *)(param_1 + 0x72));
  }
  return in_lr;
}

