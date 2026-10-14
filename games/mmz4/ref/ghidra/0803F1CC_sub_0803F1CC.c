// sub_0803F1CC at 0x0803F1CC (thumb)

undefined4 sub_0803F1CC(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088504bc)[*(byte *)(param_1 + 9)] + 4);
  sub_0801CC9C(param_1);
  sub_0801CEEC(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_0801CF00(param_1,0x5000);
  cVar1 = *(char *)(iVar2 + 9);
  if (cVar1 != '4') {
    if (cVar1 == '\x03') {
      cVar1 = *(char *)(iVar2 + 0x10);
      if ((cVar1 == '\x06') || (cVar1 == '\t')) {
        sub_08002B10(0x1bf);
      }
      else {
        sub_08002B10(0x16);
      }
    }
    else {
      sub_08002B10(0x16);
    }
  }
  *(undefined *)(param_1 + 0xbb) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_08005760(param_1 + 0x74,&DAT_08851e34,param_1 + 0x54,1);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  sub_08005794(param_1 + 0x74,&DAT_08851e34,*(undefined *)(param_1 + 0xb9),0xffffffff,0xffffffff,
               *(undefined *)(param_1 + 0xba));
  *(undefined4 *)(param_1 + 0x98) = 0x803f325;
  sub_0803F29C(param_1);
  return in_lr;
}

