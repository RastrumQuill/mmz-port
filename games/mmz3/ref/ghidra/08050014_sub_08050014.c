// sub_08050014 at 0x08050014 (thumb)

undefined4 sub_08050014(int param_1)

{
  short sVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  sVar1 = CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70));
  if (sVar1 == -0x54f5) {
    if ((*(uint *)(param_1 + 0x70) & 0xffff00) != 0x10300) goto LAB_080500c0;
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      *(undefined *)(param_1 + 0x4c) = 1;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) | 0x10;
      bVar2 = *(byte *)(param_1 + 10) | 0x10;
    }
    else {
LAB_080500a4:
      *(undefined *)(param_1 + 0x4c) = 0;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
      bVar2 = *(byte *)(param_1 + 10) & 0xef;
    }
  }
  else {
    if (sVar1 != -0x54fb) {
      if (*(int *)(param_1 + 0x54) < *(int *)(DAT_0202f5c0 + 0x54)) {
        if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
          return in_lr;
        }
        if (*(char *)(param_1 + 0xd8) == '\0') {
          sub_08017700(param_1,0xab05);
          return in_lr;
        }
      }
      else {
        if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
          return in_lr;
        }
        if (*(char *)(param_1 + 0xd8) == '\0') {
          sub_08017700(param_1,0xab05);
          return in_lr;
        }
      }
      sub_08017700(param_1,0xab0b);
      return in_lr;
    }
    if ((*(uint *)(param_1 + 0x70) & 0xffff00) != 0x10200) goto LAB_080500c0;
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) goto LAB_080500a4;
    *(undefined *)(param_1 + 0x4c) = 1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) | 0x10;
    bVar2 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar2;
LAB_080500c0:
  if (*(char *)(param_1 + 0x73) == '\x03') {
    if (*(char *)(param_1 + 0xd8) == '\0') {
      uVar3 = 0xab03;
    }
    else {
      uVar3 = 0xab09;
    }
    sub_08017700(param_1,uVar3);
  }
  return in_lr;
}

