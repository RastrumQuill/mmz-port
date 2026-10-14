// sub_08107200 at 0x08107200 (thumb)

undefined4 sub_08107200(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xd) == '\0') {
    uVar1 = sub_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x58) = uVar1;
    DAT_0202e05c = 0x348;
    DAT_0202de5c = 8;
    sub_08001D30(&DAT_08c44118,0x10900);
    sub_08002208(&DAT_08c44124,(DAT_0202de5c - 5) * 0x20 + 0x200);
    sub_0801CF00(param_1,0xe03);
    *(undefined *)(param_1 + 0x25) = 0x1f;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  else if (*(char *)(param_1 + 0xd) != '\x01') {
    return in_lr;
  }
  sub_0801CFF0(param_1);
  return in_lr;
}

