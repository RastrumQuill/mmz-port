// sub_0802A800 at 0x0802A800 (thumb)

undefined4 sub_0802A800(int param_1)

{
  short sVar1;
  int iVar2;
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x218) & 0x20) == 0) {
    if ((*(uint *)(param_1 + 0x218) & 0x10) == 0) goto LAB_0802a8c0;
    *(undefined *)(param_1 + 0x4c) = 1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) | 0x10;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
    if (*(char *)(param_1 + 0x11f) != '\0') {
      *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + 0x20;
      sVar1 = sub_08032C9C(param_1);
      if (*(int *)(param_1 + 0x5c) <= (int)sVar1) goto LAB_0802a8c0;
    }
    sVar1 = sub_08032C9C(param_1);
    iVar2 = (int)sVar1;
  }
  else {
    *(undefined *)(param_1 + 0x4c) = 0;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
    if (*(char *)(param_1 + 0x11f) == '\0') {
      sVar1 = sub_08032C9C(param_1);
      iVar2 = -(int)sVar1;
    }
    else {
      *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + -0x20;
      sVar1 = sub_08032C9C(param_1);
      if (*(int *)(param_1 + 0x5c) + (int)sVar1 < 0 == SCARRY4(*(int *)(param_1 + 0x5c),(int)sVar1))
      goto LAB_0802a8c0;
      sVar1 = sub_08032C9C(param_1);
      iVar2 = -(int)sVar1;
    }
  }
  *(int *)(param_1 + 0x5c) = iVar2;
LAB_0802a8c0:
  if (((*(char *)(param_1 + 0x71) == '\x03') || (*(char *)(param_1 + 0x71) == '\b')) &&
     (*(char *)(param_1 + 0x72) < '\x02')) {
    sub_0800471C(7);
  }
  return in_lr;
}

