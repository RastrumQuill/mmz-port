// sub_080D3E70 at 0x080D3E70 (thumb)

undefined4 sub_080D3E70(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xd) == '\0') {
    uVar1 = sub_0800A104(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x58) = uVar1;
    DAT_0202fb94 = 0x220;
    DAT_0202f994 = 5;
    sub_0800393C(&DAT_085d8820,0x10400);
    sub_08003E14(&DAT_085d882c,(DAT_0202f994 - 4) * 0x20 + 0x200);
    sub_08017700(param_1,0xc200);
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  else if (*(char *)(param_1 + 0xd) != '\x01') {
    return in_lr;
  }
  sub_080177F4(param_1);
  return in_lr;
}

