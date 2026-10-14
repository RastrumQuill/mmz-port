// sub_0807B5F8 at 0x0807B5F8 (thumb)

undefined4 sub_0807B5F8(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  *(int *)(param_1 + 0x58) = iVar1 + -0x2800;
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  *(undefined *)(param_1 + 0xf) = 0;
  sub_08128884(param_1,*(undefined4 *)(&DAT_08859f68 + (uint)*(byte *)(param_1 + 0xd) * 4));
  return in_lr;
}

