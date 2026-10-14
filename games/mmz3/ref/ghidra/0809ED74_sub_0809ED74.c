// sub_0809ED74 at 0x0809ED74 (thumb)

undefined4 sub_0809ED74(int param_1)

{
  undefined *puVar1;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_083670d4)[*(byte *)(param_1 + 9)] + 4);
  *(undefined *)(param_1 + 0xd) = (&DAT_0836773c)[*(byte *)(param_1 + 0x10)];
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_0801749C(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  puVar1 = &DAT_083676dc;
  if (*(char *)(param_1 + 0x10) == '\x01') {
    puVar1 = &DAT_083676f4;
  }
  sub_0800736C(param_1 + 0x74,puVar1,param_1 + 0x54,1);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0x809ed71;
  sub_0809EDEC(param_1);
  return in_lr;
}

