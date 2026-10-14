// sub_0806AEB4 at 0x0806AEB4 (thumb)

undefined4 sub_0806AEB4(int param_1)

{
  char cVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080B188C(param_1,param_1 + 0x54,0,*(undefined *)(param_1 + 0x13));
    sub_080127E4(param_1,0xa06);
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined *)(param_1 + 0x12) = 0x80;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  sVar2 = sub_08008CFC(*(undefined4 *)(param_1 + 0x54));
  if ((sVar2 == 0) &&
     (cVar1 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar1, cVar1 != '\0')) {
    iVar4 = *(int *)(param_1 + 0x60) + 0x40;
    *(int *)(param_1 + 0x60) = iVar4;
    if (0x700 < iVar4) {
      *(undefined4 *)(param_1 + 0x60) = 0x700;
    }
  }
  else {
    sub_080032EC(0x2a);
    iVar4 = param_1 + 0x54;
    sub_080AC60C(1,iVar4);
    uVar3 = *(byte *)(param_1 + 10) >> 4 & 1;
    uVar3 = uVar3 << 4 | uVar3;
    sub_080B0ACC(iVar4,&DAT_0833e310,0,uVar3);
    sub_080B0ACC(iVar4,&DAT_0833e32c,0,uVar3);
    sub_0801DD2C(3,iVar4);
    if (DAT_0202ebfc < 9999) {
      DAT_0202ebfc = DAT_0202ebfc + 1;
    }
    sub_0801DE2C(param_1,iVar4);
    *(undefined4 *)(param_1 + 0xc) = 4;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  }
  return in_lr;
}

