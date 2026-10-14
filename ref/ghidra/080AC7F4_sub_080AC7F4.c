// sub_080AC7F4 at 0x080AC7F4 (thumb)

undefined4 sub_080AC7F4(int param_1)

{
  bool bVar1;
  int iVar2;
  byte bVar3;
  undefined4 in_lr;
  
  iVar2 = DAT_0202286c;
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_0809C930(param_1,0);
    *(undefined *)(param_1 + 0xe) = 0;
    bVar1 = *(int *)(param_1 + 0x4c) < *(int *)(DAT_0202286c + 0x4c);
    *(bool *)(param_1 + 0x44) = bVar1;
    if (bVar1) {
      bVar3 = *(byte *)(param_1 + 10) | 0x10;
    }
    else {
      bVar3 = *(byte *)(param_1 + 10) & 0xef;
    }
    *(byte *)(param_1 + 10) = bVar3;
  }
  sub_0809C980(param_1);
  if (DAT_0202365a == 0) {
    if (*(short *)(param_1 + 0xc4) == 0x214) {
      if (DAT_0202365f == '!') {
        sub_080B4EC8(iVar2,0x3f);
        sub_080BC818(0x11a,0x5a);
      }
    }
    else if ((*(short *)(param_1 + 0xc4) == 0x216) && (DAT_0202365f == '!')) {
      DAT_02022884 = DAT_02022884 + 0x10;
      sub_0801D038(iVar2,0x1e4);
    }
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined *)(param_1 + 0xe) = 1;
    DAT_02022874 = 0;
  }
  return in_lr;
}

