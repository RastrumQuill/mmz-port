// sub_080253B8 at 0x080253B8 (thumb)

undefined4 sub_080253B8(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  sub_08015E90();
  sub_08015EEC(param_1,0);
  uVar1 = sub_08009E9C(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
  *(undefined4 *)(param_1 + 0x50) = uVar1;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_082a7ff4 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(undefined *)(param_1 + 0xd) = (&DAT_082a9f90)[*(byte *)(param_1 + 0x10)];
  *(undefined *)(param_1 + 0xe) = 0;
  sub_08025408(param_1);
  return in_lr;
}

