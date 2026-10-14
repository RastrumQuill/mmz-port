// sub_080ACE54 at 0x080ACE54 (thumb)

undefined4 sub_080ACE54(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08345998)[*(byte *)(param_1 + 9)] + 4);
  *(undefined *)(param_1 + 0xd) = 0;
  bVar1 = *(byte *)(param_1 + 0x10);
  if (bVar1 == 0) {
    uVar2 = sub_080AD01C(*(undefined4 *)(param_1 + 0x28),param_1);
    *(undefined4 *)(param_1 + 0x2c) = uVar2;
  }
  sub_08012580(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  sub_080127E4(param_1,*(undefined2 *)(&DAT_08345b28 + (uint)bVar1 * 2));
  sub_080ACEC4(param_1);
  return in_lr;
}

