// sub_0809BA24 at 0x0809BA24 (thumb)

undefined4 sub_0809BA24(int param_1)

{
  char cVar1;
  byte bVar2;
  short sVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = iVar4;
  sVar3 = sub_08008CFC(iVar4 + *(int *)(param_1 + 0x5c),*(undefined4 *)(param_1 + 0x58));
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (((cVar1 == -1) || ((*(uint *)(param_1 + 0x8c) & 4) != 0)) ||
     ((sVar3 != 0 && (sVar3 != -0x7ff1)))) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 8);
    sub_0809B7BC(param_1);
  }
  else {
    sub_080128D4(param_1);
    if (*(byte *)(param_1 + 0x12) < 0x20) {
      if ((*(byte *)(param_1 + 0x12) & 3) < 2) {
        bVar2 = *(byte *)(param_1 + 10) | 1;
      }
      else {
        bVar2 = *(byte *)(param_1 + 10) & 0xfe;
      }
      *(byte *)(param_1 + 10) = bVar2;
    }
  }
  return in_lr;
}

