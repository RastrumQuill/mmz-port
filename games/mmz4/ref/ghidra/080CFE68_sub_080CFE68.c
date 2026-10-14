// sub_080CFE68 at 0x080CFE68 (thumb)

undefined4 sub_080CFE68(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *(int *)(*(int *)(param_1 + 0x28) + 0xb8) + 0x8fff;
  bVar1 = *(byte *)(param_1 + 0x12);
  if (bVar1 == 1) {
    *(undefined *)(param_1 + 0x13) = 0x24;
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
LAB_080cfeca:
    cVar2 = *(char *)(param_1 + 0x13) + -1;
    *(char *)(param_1 + 0x13) = cVar2;
    if (cVar2 == '\0') {
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088614b8)[*(byte *)(param_1 + 9)] + 8)
      ;
      sub_080CFF4C(param_1);
      return in_lr;
    }
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
      iVar3 = *(int *)(param_1 + 0x60) + 0x40;
      *(int *)(param_1 + 0x60) = iVar3;
      if (0x700 < iVar3) {
        *(undefined4 *)(param_1 + 0x60) = 0x700;
      }
      if (iVar4 <= *(int *)(param_1 + 0x58)) {
        *(int *)(param_1 + 0x58) = iVar4;
        *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
      }
    }
  }
  else if (bVar1 == 2) goto LAB_080cfeca;
  if (*(char *)(param_1 + 0xd) == '\0') {
    if (*(int *)(param_1 + 0x60) < 0) goto LAB_080cff36;
    sub_0801CF00(param_1,0xe501);
  }
  else {
    if ((*(char *)(param_1 + 0xd) != '\x01') || (*(char *)(param_1 + 0x73) != '\x03'))
    goto LAB_080cff36;
    sub_0801CF00(param_1,0xe502);
    sub_08005784(param_1 + 0x74,&DAT_08863950);
  }
  *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
LAB_080cff36:
  sub_0801CFF0(param_1);
  return in_lr;
}

