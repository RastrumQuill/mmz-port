// sub_08054A1C at 0x08054A1C (thumb)

undefined4 sub_08054A1C(int param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    iVar3 = *(int *)(param_1 + 0xc0);
    if (*(int *)(param_1 + 0x54) == iVar3 + -0x7800) {
      uVar2 = 1;
    }
    else if (*(int *)(param_1 + 0x54) == iVar3 + 0x7800) {
      uVar2 = 0;
    }
    else {
      uVar2 = DAT_0202dc38 * 0x343fd + 0x269ec3;
      DAT_0202dc38 = uVar2 & 0x7fffffff;
      uVar2 = uVar2 * 2 >> 0x11 & 1;
    }
    *(uint *)(param_1 + 0x54) = *(int *)(param_1 + 0xc0) + (uVar2 * 2 + -1) * 0x7800;
    sub_0801CF00(param_1,0x2c00);
    *(undefined *)(param_1 + 0x12) = 0x30;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == '\0') {
    *(undefined *)(param_1 + 0xe) = 3;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

