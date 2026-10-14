// sub_0803B95C at 0x0803B95C (thumb)

undefined4 sub_0803B95C(int param_1)

{
  undefined4 in_lr;
  
  sub_080177F4();
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0835b5d0)[*(byte *)(param_1 + 9)] + 8);
    sub_0803B990(param_1);
  }
  return in_lr;
}

