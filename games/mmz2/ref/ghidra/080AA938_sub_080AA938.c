// sub_080AA938 at 0x080AA938 (thumb)

undefined4 sub_080AA938(int param_1)

{
  char cVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  sub_080128D4();
  cVar1 = *(char *)(param_1 + 0x12) + '\x01';
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == '\t') {
    if (*(char *)(param_1 + 0x11) == '\0') {
      iVar3 = *(int *)(param_1 + 0x54);
      iVar4 = -0xc00;
    }
    else {
      iVar3 = *(int *)(param_1 + 0x54);
      iVar4 = 0xc00;
    }
    *(int *)(param_1 + 100) = iVar3 + iVar4;
    *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_1 + 0x58);
    sVar2 = sub_08008CFC(*(undefined4 *)(param_1 + 100));
    if (sVar2 == 0) {
      sub_080AA508(param_1,2,*(undefined *)(param_1 + 0x11));
    }
  }
  sub_08006E08(param_1 + 0x74,&DAT_083456ac + *(char *)(param_1 + 0x71) * 0x18);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 8);
    sub_080AA58C(param_1);
  }
  return in_lr;
}

