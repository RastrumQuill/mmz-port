// sub_080BDCE0 at 0x080BDCE0 (thumb)

undefined4 sub_080BDCE0(int param_1)

{
  short sVar1;
  uint uVar2;
  undefined4 in_lr;
  
  uVar2 = DAT_0202e8b9 & 4;
  if ((DAT_0202e8b9 & 4) == 0) {
    sub_0801CFF0(param_1);
    if (*(char *)(param_1 + 0xe) == '\0') {
      if (*(int *)(param_1 + 0x60) < 0x700) {
        *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x40;
      }
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
      if (((*(uint *)(param_1 + 0x8c) & 4) != 0) ||
         (sVar1 = sub_08007C7C(*(undefined4 *)(param_1 + 0x54)), sVar1 != 0)) {
        sub_0801CF00(param_1,0x1c0a);
        sub_0801CFF0(param_1);
        sub_08002B10(0x35);
        sub_08005784(param_1 + 0x74,&DAT_088617d4);
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      }
    }
    else {
      if (*(char *)(param_1 + 0x71) == '\x02') {
        *(uint *)(param_1 + 0x8c) = uVar2;
        *(uint *)(param_1 + 0x90) = uVar2;
        *(char *)(param_1 + 0x94) = (char)uVar2;
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      }
      if (*(char *)(param_1 + 0x73) == '\x03') {
        *(undefined4 *)(param_1 + 0xc) = 2;
        *(undefined4 *)(param_1 + 0x14) =
             *(undefined4 *)((&DAT_088614b8)[*(byte *)(param_1 + 9)] + 8);
        sub_080BDDF4(param_1);
      }
    }
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088614b8)[*(byte *)(param_1 + 9)] + 0xc)
    ;
  }
  return in_lr;
}

