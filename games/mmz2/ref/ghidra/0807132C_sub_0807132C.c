// sub_0807132C at 0x0807132C (thumb)

undefined4 sub_0807132C(int param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x28);
  if (iVar3 == 0) {
    *(undefined *)(param_1 + 0x10) = 0;
    sub_080713C4(param_1,1,*(undefined *)(param_1 + 0xb4));
    return in_lr;
  }
  if ((*(uint *)(param_1 + 0x8c) & 1) != 0) {
    sub_08071574(param_1);
    pcVar2 = (char *)(param_1 + 0xb4);
    if (*pcVar2 == '\0') {
      if (0xc < *(byte *)(param_1 + 0xa4)) goto LAB_080713aa;
      sub_080713C4(param_1,2,1);
      uVar1 = 0x1901;
    }
    else {
      if ((*pcVar2 != '\x01') || (6 < *(byte *)(param_1 + 0xa4))) goto LAB_080713aa;
      sub_080713C4(param_1,2,1);
      uVar1 = 0x1902;
    }
    sub_080127E4(param_1,uVar1);
    sub_08071608(param_1);
    *pcVar2 = *pcVar2 + '\x01';
  }
LAB_080713aa:
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar3 + 0x54);
  *(int *)(param_1 + 0x58) = *(int *)(iVar3 + 0x58) + -0x2000;
  return in_lr;
}

