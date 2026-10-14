// sub_080FA464 at 0x080FA464 (thumb)

undefined4 sub_080FA464(int param_1)

{
  char cVar1;
  short sVar2;
  int iVar3;
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x8c) & 0x204) == 0) {
    sub_0801CFF0(param_1);
    if (*(char *)(param_1 + 0xd) == '\0') {
      if ((*(byte *)(param_1 + 0x12) & 7) == 0) {
        sub_080CACD8(param_1 + 0x54,1,0,0);
      }
      cVar1 = *(char *)(param_1 + 0x12) + -1;
      *(char *)(param_1 + 0x12) = cVar1;
      if (cVar1 == -1) {
        *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
      }
    }
    else if (*(char *)(param_1 + 0xe) == '\0') {
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
      iVar3 = *(int *)(param_1 + 0x60) + 0x40;
      *(int *)(param_1 + 0x60) = iVar3;
      if (0x700 < iVar3) {
        *(undefined4 *)(param_1 + 0x60) = 0x700;
      }
      sVar2 = sub_08007C7C(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + 0x1500);
      if (sVar2 == 0) {
        sub_08005784(param_1 + 0x74,&DAT_088672d8);
      }
      else {
        sub_08002B10(0xa8);
        iVar3 = sub_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
        *(int *)(param_1 + 0x58) = iVar3 + -0x1500;
        sub_08005784(param_1 + 0x74,&DAT_08867308);
        *(undefined4 *)(param_1 + 0x60) = 0;
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      }
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_08865dc4 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_080FA544(param_1);
  }
  return in_lr;
}

