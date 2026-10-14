// sub_080D70EC at 0x080D70EC (thumb)

undefined4 sub_080D70EC(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xd);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        return in_lr;
      }
      iVar4 = sub_080D03E8(param_1,0xbe00,1);
      uVar3 = iVar4 << 0x10;
      goto LAB_080d715e;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    DAT_0202fd8c = 0x240;
    DAT_0202f78c = 6;
    sub_08017700(param_1,0xbe00);
    uVar2 = sub_0800A104(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x58) = uVar2;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  sub_080177F4(param_1);
  uVar3 = *(byte *)(*(int *)(param_1 + 0x18) + 9) & 1;
LAB_080d715e:
  if (uVar3 != 0) {
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  return in_lr;
}

