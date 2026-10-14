// sub_080D0A5C at 0x080D0A5C (thumb)

undefined4 sub_080D0A5C(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xd);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        if (bVar1 != 3) {
          return in_lr;
        }
        sub_080177F4(param_1);
        return in_lr;
      }
      sub_080177F4(param_1);
      if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 2) == 0) {
        return in_lr;
      }
      sub_0800393C(&DAT_085d8320,(DAT_0202fb14 - 0x2e1) * 0x20 + 0x10000);
      sub_08003E14(&DAT_085d832c,(DAT_0202f914 - 6) * 0x20 + 0x200);
      goto LAB_080d0b72;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    uVar2 = sub_0800A104(*(int *)(param_1 + 0x54) + 0xf000,*(undefined4 *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x58) = uVar2;
    if (*(char *)(param_1 + 0x11) == '\0') {
      sub_0800393C(&DAT_085d8320,(DAT_0202fb14 - 0x2e1) * 0x20 + 0x10000);
      sub_08003E14(&DAT_085d832c,(DAT_0202f914 - 6) * 0x20 + 0x200);
    }
    sub_08017700(param_1,0x8202);
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  sub_080177F4(param_1);
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 0x50;
  if (*(char *)(param_1 + 0x73) != '\x04') {
    return in_lr;
  }
  if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 1) == 0) {
    return in_lr;
  }
  sub_08017700(param_1,0x8200);
LAB_080d0b72:
  *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  return in_lr;
}

