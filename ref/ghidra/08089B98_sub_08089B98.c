// sub_08089B98 at 0x08089B98 (thumb)

undefined4 sub_08089B98(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b31bc)[*(byte *)(param_1 + 9)] + 4);
  *(undefined *)(param_1 + 0xd) = 0;
  bVar1 = *(byte *)(param_1 + 0x10);
  if (bVar1 == 0) {
    uVar2 = sub_08089DB4(*(undefined4 *)(param_1 + 0x20),param_1);
    *(undefined4 *)(param_1 + 0x24) = uVar2;
  }
  sub_08088120(param_1);
  *(undefined *)(param_1 + 0x44) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  sub_080033F0(param_1 + 0x6c,(&DAT_082b3444)[(uint)bVar1 * 2]);
  sub_08089BFC(param_1);
  return in_lr;
}

