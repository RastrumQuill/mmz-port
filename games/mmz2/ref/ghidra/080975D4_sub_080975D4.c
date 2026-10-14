// sub_080975D4 at 0x080975D4 (thumb)

undefined4 sub_080975D4(int param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_080127E4(param_1,0x9c02);
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) >> 2;
    *(undefined4 *)(param_1 + 0x60) = 0;
    sub_080BE1AC(param_1,0,0);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_080128D4(param_1);
  iVar2 = *(int *)(param_1 + 0x60) + 0x40;
  *(int *)(param_1 + 0x60) = iVar2;
  if (0x700 < iVar2) {
    *(undefined4 *)(param_1 + 0x60) = 0x700;
  }
  iVar2 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = iVar2;
  iVar3 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x58) = iVar3;
  sVar1 = sub_08008CFC(iVar2,iVar3 + 0x1000);
  if (sVar1 != 0) {
    iVar2 = param_1 + 0x54;
    sub_080AC60C(1,iVar2);
    sub_080BE1AC(param_1,3,1);
    sub_080032EC(0x2a);
    sub_0801DD2C(0,iVar2);
    if (DAT_0202ebfc < 9999) {
      DAT_0202ebfc = DAT_0202ebfc + 1;
    }
    sub_0801DE2C(param_1,iVar2);
    *(undefined4 *)(param_1 + 0xc) = 4;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  }
  return in_lr;
}

