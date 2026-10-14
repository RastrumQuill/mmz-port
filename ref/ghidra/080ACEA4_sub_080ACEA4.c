// sub_080ACEA4 at 0x080ACEA4 (thumb)

undefined4 sub_080ACEA4(int param_1)

{
  bool bVar1;
  int iVar2;
  byte bVar3;
  short sVar4;
  short *psVar5;
  undefined4 in_lr;
  
  iVar2 = DAT_0202286c;
  if (*(char *)(param_1 + 0xe) != '\0') {
    if ((*(short *)(param_1 + 0xc4) == 0x245) || (*(short *)(param_1 + 0xc4) == 0x249)) {
      sub_0809C930(param_1,1);
    }
    else if ((DAT_02022ae9 & 0x40) == 0) {
      sub_0809C930(param_1,0);
    }
    else {
      sub_0809C930(param_1,3);
    }
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
  if (DAT_0202365a != 0) {
    return in_lr;
  }
  psVar5 = (short *)(param_1 + 0xc4);
  if (*psVar5 == 0x244) {
    if ((DAT_0202365f & 0xf0) != 0x10) {
      DAT_02022af8 = 3;
      goto LAB_080acf88;
    }
    if (*(ushort *)(iVar2 + 0x1fe) < 0xfa) {
      DAT_02022af8 = 2;
    }
    else {
      DAT_02022af8 = 1;
    }
LAB_080acfc2:
    sVar4 = sub_080AD060(param_1);
    *psVar5 = sVar4;
    sub_080BC808(*psVar5);
    *(undefined *)(param_1 + 0xe) = 1;
  }
  else {
LAB_080acf88:
    if (*psVar5 == 0x248) {
      if ((DAT_0202365f & 0xf0) == 0x10) {
        if (*(ushort *)(iVar2 + 0x1fe) < 0xfa) {
          DAT_02022af8 = 5;
        }
        else {
          DAT_02022af8 = 4;
        }
        goto LAB_080acfc2;
      }
      DAT_02022af8 = 3;
    }
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined *)(param_1 + 0xe) = 1;
    DAT_02022874 = 0;
  }
  return in_lr;
}

