// sub_080D0F04 at 0x080D0F04 (thumb)

undefined4 sub_080D0F04(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xd) == '\0') {
    uVar1 = sub_0800A104(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x58) = uVar1;
    DAT_0202fa36 = 0x388;
    DAT_0202f836 = 9;
    sub_0800393C(&DAT_085d7a74,0x13100);
    sub_08003E14(&DAT_085d7a80,(DAT_0202f836 - 4) * 0x20 + 0x200);
    sub_08017700(param_1,0x1309);
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  else if (*(char *)(param_1 + 0xd) != '\x01') {
    return in_lr;
  }
  sub_080177F4(param_1);
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 0x100;
  return in_lr;
}

