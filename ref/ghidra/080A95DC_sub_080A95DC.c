// sub_080A95DC at 0x080A95DC (thumb)

undefined4 sub_080A95DC(int param_1)

{
  char cVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 in_lr;
  
  sub_0809C980();
  if (*(char *)(param_1 + 0x10) == '\v') {
    if (*(char *)(param_1 + 0xf) == '\0') {
      iVar4 = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
      *(int *)(param_1 + 0x4c) = iVar4;
      uVar3 = sub_08008360(iVar4 + *(int *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x50));
      *(undefined4 *)(param_1 + 0x50) = uVar3;
      iVar4 = *(int *)(param_1 + 0xbc) - *(int *)(param_1 + 0x4c);
      if (iVar4 < 0) {
        iVar4 = *(int *)(param_1 + 0x4c) - *(int *)(param_1 + 0xbc);
      }
      if ((0x4000 < iVar4) ||
         (cVar1 = sub_080079CC(*(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54) * 0x10,
                               *(int *)(param_1 + 0x50) + -0x1000), cVar1 != '\0')) {
        sub_0809C930(param_1,*(byte *)(param_1 + 0x11) + 8);
        sub_0809C980(param_1);
        *(undefined *)(param_1 + 0x12) = 0x20;
        *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
      }
    }
    else {
      cVar1 = *(char *)(param_1 + 0x12) + -1;
      *(char *)(param_1 + 0x12) = cVar1;
      if (cVar1 == -1) {
        bVar2 = (*(byte *)(param_1 + 10) >> 4 ^ 1) & 1;
        *(byte *)(param_1 + 0x44) = bVar2;
        if (bVar2 == 0) {
          bVar2 = *(byte *)(param_1 + 10) & 0xef;
        }
        else {
          bVar2 = *(byte *)(param_1 + 10) | 0x10;
        }
        *(byte *)(param_1 + 10) = bVar2;
        *(int *)(param_1 + 0x54) = -*(int *)(param_1 + 0x54);
        *(undefined *)(param_1 + 0xf) = 0;
        sub_0809C930(param_1,(uint)*(byte *)(param_1 + 0x11) << 2);
        sub_0809C980(param_1);
      }
    }
  }
  else {
    iVar4 = *(int *)(DAT_0202286c + 0x4c);
    *(bool *)(param_1 + 0x44) = *(int *)(param_1 + 0x4c) < iVar4;
    if (*(int *)(param_1 + 0x4c) < iVar4) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
    }
    else {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
    }
  }
  if (*(char *)(param_1 + 0xd) == '\0') {
    if (((*(ushort *)(param_1 + 0x90) & 0x2000) != 0) && (DAT_02022874 != '\0')) {
      *(undefined *)(param_1 + 0xd) = 1;
      if (*(char *)(param_1 + 0x10) == '\f') {
        sub_080BC808(0x296);
      }
      else if ((*(uint *)(DAT_02022b20 + 0x10) & 0x2000) == 0) {
        sub_080BC808(0x2e7);
      }
      else {
        sub_080BC808(0x2e8);
      }
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    }
  }
  else if (DAT_0202365a == 0) {
    DAT_02022874 = '\0';
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined *)(param_1 + 0x12) = 0x20;
  }
  return in_lr;
}

