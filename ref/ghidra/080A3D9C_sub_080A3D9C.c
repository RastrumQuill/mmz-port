// sub_080A3D9C at 0x080A3D9C (thumb)

undefined4 sub_080A3D9C(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_0809C930(param_1,5);
    *(undefined *)(param_1 + 0xe) = 0;
    pcVar3 = (char *)(param_1 + 0xc4);
    *(char *)(param_1 + 0x44) = *pcVar3;
    if (*pcVar3 == '\0') {
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar1;
    if (*pcVar3 == '\0') {
      uVar2 = 0x80;
    }
    else {
      uVar2 = 0xffffff80;
    }
    *(undefined4 *)(param_1 + 0x54) = uVar2;
    *(undefined4 *)(param_1 + 0x58) = 0xfffffd00;
    sub_08001EAC(0x4c);
  }
  sub_0809C980(param_1);
  iVar4 = *(int *)(param_1 + 0x58) + 0x40;
  *(int *)(param_1 + 0x58) = iVar4;
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + iVar4;
  iVar4 = sub_08008360();
  if (iVar4 < *(int *)(param_1 + 0x50)) {
    uVar2 = sub_08008360(*(undefined4 *)(param_1 + 0x4c));
    *(undefined4 *)(param_1 + 0x50) = uVar2;
    *(undefined *)(param_1 + 0xd) = 4;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}

