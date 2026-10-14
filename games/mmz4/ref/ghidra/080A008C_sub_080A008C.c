// sub_080A008C at 0x080A008C (thumb)

undefined4 sub_080A008C(int param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    *(undefined *)(param_1 + 0x25) = 0x18;
    sub_0801CF00(param_1,0x820b);
    *(undefined4 *)(param_1 + 100) = 0x48;
    *(undefined *)(param_1 + 0x12) = 1;
    *(undefined *)(param_1 + 0x13) = 0;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  uVar2 = *(byte *)(param_1 + 0x13) + 1;
  *(char *)(param_1 + 0x13) = (char)uVar2;
  if (*(int *)(param_1 + 100) < 0x18) {
    if ((uVar2 & 1) == 0) {
LAB_080a00ec:
      uVar2 = (uint)*(byte *)(param_1 + 10);
      bVar1 = *(byte *)(param_1 + 10) & 0xfe;
    }
    else {
      uVar2 = 1;
      bVar1 = *(byte *)(param_1 + 10) | 1;
    }
  }
  else {
    if (0x2f < *(int *)(param_1 + 100)) goto LAB_080a00f4;
    if ((uVar2 & 3) == 0) goto LAB_080a00ec;
    uVar2 = 1;
    bVar1 = *(byte *)(param_1 + 10) | 1;
  }
  *(byte *)(param_1 + 10) = bVar1;
LAB_080a00f4:
  if (*(int *)(param_1 + 0x2c) == 0) {
    sub_0801CFF0(param_1,uVar2,0);
    *(undefined *)(param_1 + 0x12) = 0;
    sub_08005784(param_1 + 0x74,&DAT_0885e418);
    iVar3 = *(int *)(param_1 + 100) + -1;
    *(int *)(param_1 + 100) = iVar3;
    if (iVar3 == 0) {
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
      *(undefined *)(param_1 + 0xd) = 3;
      *(undefined *)(param_1 + 0xe) = 0;
      *(undefined *)(param_1 + 0xf) = 0;
      sub_080A0168(param_1);
    }
  }
  else {
    sub_08005784(param_1 + 0x74,&DAT_0885e430);
    if (*(char *)(param_1 + 0x12) != '\0') {
      sub_0801CFF0(param_1);
      *(undefined *)(param_1 + 0x12) = 0;
    }
  }
  return in_lr;
}

