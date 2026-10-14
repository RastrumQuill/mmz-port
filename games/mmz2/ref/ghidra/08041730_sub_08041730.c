// sub_08041730 at 0x08041730 (thumb)

undefined4 sub_08041730(int param_1)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0xa207);
    if (*(int *)(param_1 + 0xb4) + 0x7000 < *(int *)(DAT_0202e130 + 0x54)) {
      *(undefined *)(param_1 + 0xbf) = 0;
      *(undefined *)(param_1 + 0xc0) = 6;
      *(undefined *)(param_1 + 0xc2) = 6;
    }
    else {
      *(undefined *)(param_1 + 0xbf) = 7;
      *(undefined *)(param_1 + 0xc0) = 5;
      *(undefined *)(param_1 + 0xc2) = 5;
    }
    uVar2 = sub_080EF150(*(int *)(((int *)(param_1 + 0xb4))[*(byte *)(param_1 + 0xbf) + 4] + 0x54) -
                         *(int *)(param_1 + 0x54),0x30);
    *(undefined4 *)(param_1 + 0x5c) = uVar2;
    *(undefined4 *)(param_1 + 0x60) = 0xfffff400;
    *(undefined *)(param_1 + 0xf) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  if (*(char *)(param_1 + 0xf) == '\0') {
    iVar3 = *(int *)(param_1 + 0x60) + 0x40;
    *(int *)(param_1 + 0x60) = iVar3;
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar3;
    if (-1 < iVar3) {
      *(undefined4 *)(param_1 + 0x54) =
           *(undefined4 *)(*(int *)(param_1 + 0xb4 + (*(byte *)(param_1 + 0xbf) + 4) * 4) + 0x54);
      if (*(byte *)(param_1 + 0xbf) == 0) {
        *(undefined *)(param_1 + 0x4c) = 1;
        *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) | 0x10;
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
      }
      else {
        *(undefined *)(param_1 + 0x4c) = 0;
        *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
      }
      *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
    }
  }
  else {
    iVar3 = *(int *)(param_1 + 0x60) + 0x40;
    *(int *)(param_1 + 0x60) = iVar3;
    if (0x700 < iVar3) {
      *(undefined4 *)(param_1 + 0x60) = 0x700;
    }
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    sVar1 = sub_08008CFC(*(undefined4 *)(param_1 + 0x54));
    if (sVar1 != 0) {
      uVar2 = sub_080093C4(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
      *(undefined4 *)(param_1 + 0x58) = uVar2;
      *(undefined *)(param_1 + 0xd) = 8;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  }
  return in_lr;
}

