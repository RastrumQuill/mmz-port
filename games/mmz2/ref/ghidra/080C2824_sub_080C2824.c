// sub_080C2824 at 0x080C2824 (thumb)

undefined4 sub_080C2824(int param_1)

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
        sub_080128D4(param_1);
        return in_lr;
      }
      sub_080128D4(param_1);
      if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 2) == 0) {
        return in_lr;
      }
      uVar2 = 0xc101;
      goto LAB_080c2886;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    sub_080127E4(param_1,0x100);
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  sub_080128D4(param_1);
  if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 1) == 0) {
    return in_lr;
  }
  if (*(char *)(param_1 + 0x73) != '\x04') {
    return in_lr;
  }
  uVar2 = 0xc100;
LAB_080c2886:
  sub_080127E4(param_1,uVar2);
  *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  return in_lr;
}

