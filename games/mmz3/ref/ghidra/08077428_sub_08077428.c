// sub_08077428 at 0x08077428 (thumb)

undefined4 sub_08077428(int param_1)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    if (*(char *)(param_1 + 0x10) == '\x01') {
      sub_08007390(param_1 + 0x74,&DAT_08363ab0);
      sub_08017700(param_1,0x2e00);
    }
    else {
      sub_08007390(param_1 + 0x74,&DAT_08363b40);
      sub_080177CC(param_1,0x2e05,4,1);
    }
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  iVar1 = sub_08063614(param_1);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x60) + 0x40;
    *(int *)(param_1 + 0x60) = iVar1;
    if (0x700 < iVar1) {
      *(undefined4 *)(param_1 + 0x60) = 0x700;
    }
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    iVar1 = sub_08009B28(*(undefined4 *)(param_1 + 0x54));
    if (iVar1 < 0) {
      uVar2 = sub_08008FEC(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
      if (((uVar2 & 0x10) == 0) && (*(char *)(param_1 + 0xb9) == '\0')) {
        *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar1;
      }
      else {
        uVar2 = sub_0801A9A8(&DAT_02030288,param_1 + 0x54);
        if (0x4000 < uVar2) {
          if ((*(char *)(param_1 + 0x10) == '\x02') && (*(int *)(param_1 + 0x28) != 0)) {
            pcVar3 = (char *)(*(int *)(param_1 + 0x28) + 0xb8);
            *pcVar3 = *pcVar3 + -1;
          }
          *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
          *(undefined4 *)(param_1 + 0x8c) = 0;
          *(undefined4 *)(param_1 + 0x90) = 0;
          *(undefined *)(param_1 + 0x94) = 0;
          *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
          *(undefined4 *)(param_1 + 0xc) = 3;
          *(undefined4 *)(param_1 + 0x14) =
               *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
        }
        *(char *)(param_1 + 0xb9) = '\x01';
      }
    }
  }
  sub_080177F4(param_1);
  return in_lr;
}

