// sub_08087A10 at 0x08087A10 (thumb)

undefined4 sub_08087A10(int param_1)

{
  undefined4 in_lr;
  undefined4 local_10;
  uint local_c;
  
  if (*(byte *)(param_1 + 0xf) == 0) {
    local_10 = 0x800;
    local_c = (uint)*(byte *)(param_1 + 0xf);
    sub_08088E68(param_1 + 0x54,&local_10,2,3);
    sub_08005784(param_1 + 0x74,&DAT_0885bac8);
    sub_0801CF00(param_1,0x1d07);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0xe) = 5;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

