// sub_080ECC14 at 0x080ECC14 (thumb)

undefined4 sub_080ECC14(int param_1)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0xbc);
  sub_0801CFF0();
  iVar3 = *(int *)(param_1 + 0x58);
  if (((*(int *)(param_1 + 0xbc) == 0) || (*(char *)(iVar2 + 0xd) != '\x03')) ||
     (*(byte *)(iVar2 + 0xe) < 2)) {
    if (*(int *)(param_1 + 0x58) < *(int *)(param_1 + 0xb8)) {
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 0x200;
    }
    if (*(int *)(param_1 + 0xb8) < *(int *)(param_1 + 0x58)) {
      iVar2 = *(int *)(param_1 + 0x58) + -0x200;
      goto LAB_080ecc8a;
    }
LAB_080ecc94:
    iVar2 = *(int *)(param_1 + 0xb8) + -0x8000;
    if (iVar2 <= *(int *)(param_1 + 0x58)) goto LAB_080ecca2;
  }
  else {
    if ((*(uint *)(iVar2 + 600) & 0x40) != 0) {
      *(int *)(param_1 + 0x58) = iVar3 + -0x200;
    }
    if ((*(uint *)(iVar2 + 600) & 0x80) != 0) {
      iVar2 = *(int *)(param_1 + 0x58) + 0x200;
LAB_080ecc8a:
      *(int *)(param_1 + 0x58) = iVar2;
    }
    iVar2 = *(int *)(param_1 + 0xb8);
    if (*(int *)(param_1 + 0x58) <= iVar2) goto LAB_080ecc94;
  }
  *(int *)(param_1 + 0x58) = iVar2;
LAB_080ecca2:
  if (iVar3 == *(int *)(param_1 + 0x58)) {
    if (*(short *)(param_1 + 0xc0) == 0) {
      return in_lr;
    }
    sub_08002B5C(0x77);
    sub_08002B10(0x19d);
    uVar1 = 0;
  }
  else {
    if (*(short *)(param_1 + 0xc0) != 0) {
      return in_lr;
    }
    sub_08002B10(0x77);
    uVar1 = 0x77;
  }
  *(undefined2 *)(param_1 + 0xc0) = uVar1;
  return in_lr;
}

