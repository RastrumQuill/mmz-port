// sub_08119808 at 0x08119808 (thumb)

undefined4 sub_08119808(int param_1)

{
  undefined4 in_lr;
  
  DAT_02000a40 = 0;
  DAT_02000a50 = 0;
  DAT_02000a5e = 0xff;
  *(undefined *)(param_1 + 0xdd1) = 1;
  sub_08002624(*(byte *)(param_1 + 0xdd0) + 0x14);
  sub_08002624(0x43);
  return in_lr;
}

