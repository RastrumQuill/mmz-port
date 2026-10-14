// sub_0807607C at 0x0807607C (thumb)

undefined4 sub_0807607C(int param_1)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  undefined4 in_lr;
  
  bVar2 = *(byte *)(param_1 + 0xe);
  if (bVar2 != 1) {
    if (1 < bVar2) {
      if (bVar2 == 2) {
        *(undefined4 *)(param_1 + 0x60) = 0x300;
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      }
      else if (bVar2 != 3) {
        return in_lr;
      }
      sub_080177F4(param_1);
      iVar3 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
      *(int *)(param_1 + 0x58) = iVar3;
      if (iVar3 <= *(int *)(DAT_0202f5c0 + 0x58)) {
        return in_lr;
      }
      *(undefined *)(param_1 + 0xd) = 2;
      *(undefined *)(param_1 + 0xe) = 0;
      return in_lr;
    }
    if (bVar2 != 0) {
      return in_lr;
    }
    sub_08007390(param_1 + 0x74,&DAT_08363918);
    bVar1 = *(int *)(param_1 + 0x54) < *(int *)(DAT_0202f5c0 + 0x54);
    if (bVar1) {
      bVar2 = *(byte *)(param_1 + 10) | 0x10;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) & 0xef;
    }
    *(byte *)(param_1 + 10) = bVar2;
    *(bool *)(param_1 + 0x4c) = bVar1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar1 << 4;
    sub_08017700(param_1,0x2a02);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  *(int *)(param_1 + 0x58) = DAT_020302c4 + -0x7000;
  if (((0x2000 < (*(int *)(param_1 + 0x54) + 0x7800) - DAT_020302c0) &&
      ((*(int *)(param_1 + 0x54) + -0x77ff) - DAT_020302c0 < -0x2000)) ||
     (*(char *)(param_1 + 0xb9) != '\0')) {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080177F4(param_1);
  return in_lr;
}

