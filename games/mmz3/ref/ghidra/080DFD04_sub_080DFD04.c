// sub_080DFD04 at 0x080DFD04 (thumb)

undefined4 sub_080DFD04(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xd) == '\0') {
    uVar1 = sub_0801A9A8(&DAT_02030288,param_1 + 0x54);
    if (0x1000 < uVar1) {
      return in_lr;
    }
    sub_0800393C(&DAT_085d871c,(DAT_0202fb7a - 0x200) * 0x20 + 0x10000);
    sub_08003E14(&DAT_085d8728,(DAT_0202f97a - 4) * 0x20 + 0x200);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    sub_0801749C(param_1);
    sub_08017700(param_1,0xb502);
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 8;
    *(undefined **)(param_1 + 0x30) = &DAT_0836e174;
    *(undefined2 *)(param_1 + 0x26) = 0x2001;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  else if (*(char *)(param_1 + 0xd) != '\x01') {
    return in_lr;
  }
  sub_080177F4(param_1);
  uVar1 = sub_0801A9A8(&DAT_02030288,param_1 + 0x54);
  if (0x1000 < uVar1) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xf7;
    *(undefined *)(param_1 + 0xd) = 0;
  }
  return in_lr;
}

