// sub_08087548 at 0x08087548 (thumb)

undefined4 sub_08087548(int param_1)

{
  undefined4 in_lr;
  undefined4 local_10;
  uint local_c;
  
  if (*(byte *)(param_1 + 0xf) == 0) {
    local_10 = 0x800;
    local_c = (uint)*(byte *)(param_1 + 0xf);
    sub_08088E68(param_1 + 0x54,&local_10,4,5);
    sub_08005784(param_1 + 0x74,&DAT_0885bac8);
    sub_0801CF00(param_1,0x1d01);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

