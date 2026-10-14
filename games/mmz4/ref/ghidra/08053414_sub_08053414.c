// sub_08053414 at 0x08053414 (thumb)

undefined4 sub_08053414(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 in_lr;
  int local_14;
  undefined4 local_10;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    *(undefined4 *)(param_1 + 0xcc) = 0x13;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  piVar2 = (int *)(param_1 + 0xcc);
  iVar1 = *piVar2;
  *piVar2 = iVar1 + -1;
  iVar1 = sub_08128954(iVar1 + -1,6);
  if (iVar1 == 0) {
    sub_08002B10(0x139);
    local_14 = *(int *)(param_1 + 0x54) + -0x1800;
    local_10 = *(undefined4 *)(param_1 + 0x58);
    sub_080BF14C(param_1,&local_14,0,0x9a);
    sub_080BF14C(param_1,&local_14,0,0x66);
  }
  if (*piVar2 == 0) {
    *(undefined *)(param_1 + 0xe) = 3;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

