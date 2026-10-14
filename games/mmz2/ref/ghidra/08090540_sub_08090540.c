// sub_08090540 at 0x08090540 (thumb)

undefined4 sub_08090540(int param_1)

{
  char cVar1;
  short sVar2;
  int iVar3;
  undefined4 in_lr;
  undefined4 local_14;
  int local_10;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_080127E4(param_1,0x7604);
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined4 *)(param_1 + 0x5c) = 0;
    sub_080BF380(param_1);
    *(undefined *)(param_1 + 0x12) = 0x10;
    *(undefined *)(param_1 + 0x25) = 0x1f;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_080128D4(param_1);
  iVar3 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = iVar3;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x40;
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if ((cVar1 == -1) || (sVar2 = sub_08008CFC(iVar3), sVar2 != 0)) {
    local_14 = *(undefined4 *)(param_1 + 0x54);
    local_10 = *(int *)(param_1 + 0x58) + -0x800;
    sub_080AC60C(1,&local_14);
    sub_080BF3CC(param_1,&local_14);
    sub_080032EC(0x2a);
    sub_0801DD2C(0,param_1 + 0x54);
    if (DAT_0202ebfc < 9999) {
      DAT_0202ebfc = DAT_0202ebfc + 1;
    }
    sub_0801DE2C(param_1,param_1 + 0x54);
    *(undefined4 *)(param_1 + 0xc) = 4;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  }
  return in_lr;
}

