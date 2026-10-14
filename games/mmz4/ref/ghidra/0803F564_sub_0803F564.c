// sub_0803F564 at 0x0803F564 (thumb)

undefined4 sub_0803F564(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x2c);
  cVar2 = sub_0803A9A8(param_1,3);
  if ((cVar2 == '\0') && ((*(uint *)(param_1 + 0x8c) & 4) != 0)) {
    bVar1 = *(byte *)(param_1 + 0x12);
    *(byte *)(param_1 + 0x12) = bVar1 + 1;
    if (bVar1 < 4) {
      sub_08005794(param_1 + 0x74,&DAT_08851e78,5,0xffffffff,0xffffffff,
                   *(undefined *)(param_1 + 0x12));
    }
    else {
      cVar2 = '\x01';
    }
  }
  if (*(char *)(iVar3 + 0xfa) == '\x02') {
    cVar2 = '\x01';
  }
  if (cVar2 == '\0') {
    sub_0801CFF0(param_1);
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  }
  else {
    if (cVar2 != -1) {
      sub_080D0894(2,param_1 + 0x54);
      sub_08002B10(0x27);
    }
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088504bc)[*(byte *)(param_1 + 9)] + 8);
    sub_0803F610(param_1);
  }
  return in_lr;
}

