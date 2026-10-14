// sub_08071DDC at 0x08071DDC (thumb)

undefined4 sub_08071DDC(int param_1)

{
  undefined4 in_lr;
  
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  *(undefined *)(param_1 + 0xf) = 0;
  sub_08128884(param_1,*(undefined4 *)(&DAT_088592ac + (uint)*(byte *)(param_1 + 0xd) * 4));
  return in_lr;
}

