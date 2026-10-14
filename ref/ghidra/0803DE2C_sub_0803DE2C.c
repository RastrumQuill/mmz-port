// sub_0803DE2C at 0x0803DE2C (thumb)

undefined4 sub_0803DE2C(int param_1)

{
  undefined4 in_lr;
  
  if ((*(ushort *)(param_1 + 0x90) & 0x100) == 0) {
    *(uint *)(param_1 + 0xc4) = *(uint *)(param_1 + 0xc4) & 0xfffffffb;
    *(undefined *)(param_1 + 0xd) = 0x13;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

