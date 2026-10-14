// sub_08030B70 at 0x08030B70 (thumb)

undefined4 sub_08030B70(int param_1)

{
  short sVar1;
  int iVar2;
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 600) & 0x20) == 0) {
    if ((*(uint *)(param_1 + 600) & 0x10) == 0) goto LAB_08030c38;
    *(undefined *)(param_1 + 0x4c) = 1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) | 0x10;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
    if ((*(byte *)(param_1 + 0x142) & 0x20) != 0) {
      *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + 0x40;
      sVar1 = sub_080386E0(param_1);
      if (*(int *)(param_1 + 0x5c) <= (int)sVar1) goto LAB_08030c38;
    }
    sVar1 = sub_080386E0(param_1);
    iVar2 = (int)sVar1;
  }
  else {
    *(undefined *)(param_1 + 0x4c) = 0;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
    if ((*(byte *)(param_1 + 0x142) & 0x20) == 0) {
      sVar1 = sub_080386E0(param_1);
      iVar2 = -(int)sVar1;
    }
    else {
      *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + -0x40;
      sVar1 = sub_080386E0(param_1);
      if (*(int *)(param_1 + 0x5c) + (int)sVar1 < 0 == SCARRY4(*(int *)(param_1 + 0x5c),(int)sVar1))
      goto LAB_08030c38;
      sVar1 = sub_080386E0(param_1);
      iVar2 = -(int)sVar1;
    }
  }
  *(int *)(param_1 + 0x5c) = iVar2;
LAB_08030c38:
  if (((*(char *)(param_1 + 0x71) == '\x03') || (*(char *)(param_1 + 0x71) == '\b')) &&
     (*(char *)(param_1 + 0x72) < '\x02')) {
    sub_08002B10(7);
  }
  return in_lr;
}

