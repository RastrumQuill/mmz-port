// sub_080535AC at 0x080535AC (thumb)

undefined4 sub_080535AC(int param_1)

{
  undefined uVar1;
  int iVar2;
  int *piVar3;
  undefined4 in_lr;
  undefined auStack_1c [4];
  int local_18;
  undefined4 local_14;
  
  sub_08128B5C(auStack_1c,&DAT_08128e9c,4);
  if (*(char *)(param_1 + 0xf) == '\0') {
    *(undefined4 *)(param_1 + 0xcc) = 0xa1;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  piVar3 = (int *)(param_1 + 0xcc);
  iVar2 = *piVar3;
  *piVar3 = iVar2 + -1;
  if (*(int *)(param_1 + 200) == 0) {
    uVar1 = 4;
  }
  else {
    iVar2 = sub_08128954(iVar2 + -1,0x50);
    if (iVar2 == 0) {
      sub_08002B10(0x13d);
      local_18 = *(int *)(param_1 + 0x54) + -0x1c00;
      local_14 = *(undefined4 *)(param_1 + 0x58);
      sub_080BF14C(param_1,&local_18,1,auStack_1c[*(byte *)(*(int *)(param_1 + 200) + 0xb5)]);
    }
    if (*piVar3 != 0) {
      return in_lr;
    }
    uVar1 = 3;
  }
  *(undefined *)(param_1 + 0xe) = uVar1;
  *(undefined *)(param_1 + 0xf) = 0;
  return in_lr;
}

