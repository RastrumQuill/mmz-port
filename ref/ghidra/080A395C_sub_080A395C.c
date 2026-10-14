// sub_080A395C at 0x080A395C (thumb)

undefined4 sub_080A395C(int param_1)

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
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    if (DAT_0202365a == 0) {
      sub_080BC818(0xb0d,0x40);
    }
  }
  sub_0809C980(param_1);
  if (*(char *)(param_1 + 0xf) == '\0') {
    iVar4 = *(int *)(param_1 + 0x58) + 0x40;
    *(int *)(param_1 + 0x58) = iVar4;
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + iVar4;
    iVar4 = sub_08008360();
    if (iVar4 < *(int *)(param_1 + 0x50)) {
      uVar2 = sub_08008360(*(undefined4 *)(param_1 + 0x4c));
      *(undefined4 *)(param_1 + 0x50) = uVar2;
      sub_0809C930(param_1,6);
      sub_0809C980(param_1);
      DAT_02022b64 = DAT_02022b64 & 0xfffe | 8;
      *(undefined *)(param_1 + 0x12) = 0x40;
      *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
    }
  }
  return in_lr;
}

