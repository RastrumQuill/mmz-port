// sub_0807C538 at 0x0807C538 (thumb)

undefined4 sub_0807C538(int param_1)

{
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0xce) = 0;
  *(undefined *)(param_1 + 0xcf) = 0;
  *(byte *)(param_1 + 0xbf) = *(byte *)(param_1 + 0xbf) & 0xfe;
  *(undefined *)(param_1 + 0xd4) = 0;
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  *(undefined *)(param_1 + 0xf) = 0;
  sub_08128884(param_1,*(undefined4 *)(&DAT_08859f68 + (uint)*(byte *)(param_1 + 0xd) * 4));
  return in_lr;
}

