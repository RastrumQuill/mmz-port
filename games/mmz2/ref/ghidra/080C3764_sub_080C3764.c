// sub_080C3764 at 0x080C3764 (thumb)

undefined4 sub_080C3764(int param_1)

{
  byte bVar1;
  char cVar2;
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
      cVar2 = *(char *)(param_1 + 0x12) + -1;
      *(char *)(param_1 + 0x12) = cVar2;
      *(int *)(param_1 + 0x58) =
           *(int *)(param_1 + 0xb4) -
           ((short)(&DAT_080ef450)[(uint)*(byte *)(param_1 + 0x12) * 2 + 0x40 & 0xff] * 0x10 +
           0x1000);
      if (cVar2 != '\0') {
        return in_lr;
      }
      sub_08002EF0(0x2e);
      goto LAB_080c3802;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    sub_080127E4(param_1,0x4600);
    if (*(char *)(param_1 + 0x11) == '\0') {
      sub_08002D68(0x2e,0);
    }
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  sub_080128D4(param_1);
  if (*(char *)(param_1 + 0x11) != '\0') {
    return in_lr;
  }
  sub_08002EA0(0x2e);
  if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 1) == 0) {
    return in_lr;
  }
  *(undefined *)(param_1 + 0x12) = 0x40;
LAB_080c3802:
  *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  return in_lr;
}

