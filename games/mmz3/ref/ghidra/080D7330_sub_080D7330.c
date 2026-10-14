// sub_080D7330 at 0x080D7330 (thumb)

undefined4 sub_080D7330(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xd);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        return in_lr;
      }
      sub_080177F4(param_1);
      return in_lr;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    sub_0800393C(&DAT_085d8820,(DAT_0202fb94 - 0x200) * 0x20 + 0x10000);
    sub_08003E14(&DAT_085d882c,(DAT_0202f994 - 4) * 0x20 + 0x200);
    sub_08017700(param_1,0xc203);
    uVar3 = sub_0800A104(*(int *)(param_1 + 0x54) + 0xa000,*(undefined4 *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x58) = uVar3;
    *(undefined *)(param_1 + 0x12) = 0x5a;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  sub_080177F4(param_1);
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 0x80;
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 == '\0') {
    sub_08017700(param_1,0xc200);
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  return in_lr;
}

