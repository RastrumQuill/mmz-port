// sub_08030CC8 at 0x08030CC8 (thumb)

undefined4 sub_08030CC8(int param_1)

{
  undefined4 in_lr;
  
  if ((*(char *)(param_1 + 0xc0) == '\x03') || (*(char *)(param_1 + 0xc1) == '\x03')) {
    *(byte *)(param_1 + 0x124) = *(byte *)(param_1 + 0x124) | 2;
    sub_080FE2C0(param_1,*(undefined4 *)(&DAT_0835af7c + (uint)*(byte *)(param_1 + 0xed) * 4));
  }
  else {
    sub_080177CC(param_1,0x500,4,1);
    *(undefined *)(param_1 + 0xec) = 0;
  }
  return in_lr;
}

