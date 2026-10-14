// sub_0809FF0C at 0x0809FF0C (thumb)

undefined4 sub_0809FF0C(int param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0x3505);
    *(undefined *)(param_1 + 0x12) = 0x41;
    *(undefined4 *)(param_1 + 0xb8) = 0x80;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  piVar3 = (int *)(param_1 + 0xb8);
  iVar2 = *piVar3;
  *piVar3 = iVar2 + 2;
  iVar2 = (iVar2 + 2) * -0x200;
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xff;
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0xbc) + (iVar2 >> 8);
  *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\x01';
  iVar4 = (int)*(short *)(&DAT_08344366 + *(char *)(iVar4 + 0x71) * 2) * *piVar3;
  if (iVar4 < 0) {
    iVar4 = iVar4 + 0xff;
  }
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0xc0) + (iVar4 >> 8);
  sub_080128D4(param_1);
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == '\0') {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 0xc)
    ;
  }
  return in_lr;
}

