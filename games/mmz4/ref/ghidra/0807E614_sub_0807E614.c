// sub_0807E614 at 0x0807E614 (thumb)

undefined4 sub_0807E614(int param_1)

{
  undefined4 in_lr;
  
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  *(undefined *)(param_1 + 0xf) = 0;
  sub_08128884(param_1,*(undefined4 *)(&DAT_08859f68 + (uint)*(byte *)(param_1 + 0xd) * 4));
  return in_lr;
}

