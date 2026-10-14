// sub_080E505C at 0x080E505C (thumb)

undefined4 sub_080E505C(int param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  undefined4 local_14;
  int local_10;
  
  iVar2 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = iVar2;
  iVar3 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x58) = iVar3;
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x68);
  sVar1 = sub_08007C7C(iVar2,iVar3 + -0x1400);
  if ((sVar1 != 0) || (*(char *)(param_1 + 0x12) == '\0')) {
    if (*(char *)(param_1 + 0x11) == '\0') {
      local_14 = *(undefined4 *)(param_1 + 0x54);
      local_10 = *(int *)(param_1 + 0x58) + -0xc00;
      sub_080D0894(1,&local_14);
      sub_080E4D94(param_1 + 0x54,1,2);
      sub_080E4D94(param_1 + 0x54,1,4);
    }
    if (*(char *)(param_1 + 0x11) == '\x01') {
      local_14 = *(undefined4 *)(param_1 + 0x54);
      local_10 = *(int *)(param_1 + 0x58) + -0x1000;
      sub_080D0894(2,&local_14);
      sub_080E4D94(&local_14,1,1);
      sub_080E4D94(&local_14,1,3);
    }
    sub_08002B10(0x2a);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08863a28)[*(byte *)(param_1 + 9)] + 8);
  }
  *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
  return in_lr;
}

