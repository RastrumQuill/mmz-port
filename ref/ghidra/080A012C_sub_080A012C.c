// sub_080A012C at 0x080A012C (thumb)

undefined4 sub_080A012C(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  int local_18;
  undefined4 local_14;
  
  iVar4 = *(int *)(param_1 + 0x20);
  if (*(char *)(param_1 + 0xe) != '\0') {
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined4 *)(param_1 + 0x58) = 0;
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      uVar2 = 0x40;
    }
    else {
      uVar2 = 0xffffffc0;
    }
    *(undefined4 *)(param_1 + 0x54) = uVar2;
    *(undefined *)(param_1 + 0x12) = 0;
    *(undefined *)(param_1 + 0x13) = 0;
  }
  sub_0809C980(param_1);
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    iVar3 = *(int *)(param_1 + 0x54) + 0x40;
    *(int *)(param_1 + 0x54) = iVar3;
    if (0x280 < iVar3) {
      *(undefined4 *)(param_1 + 0x54) = 0x280;
    }
    iVar3 = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
    *(int *)(param_1 + 0x4c) = iVar3;
    iVar4 = *(int *)(iVar4 + 200) + -0xc00;
    if (iVar3 <= iVar4) goto LAB_080a01c4;
  }
  else {
    iVar3 = *(int *)(param_1 + 0x54) + -0x40;
    *(int *)(param_1 + 0x54) = iVar3;
    if (iVar3 < -0x280) {
      *(undefined4 *)(param_1 + 0x54) = 0xfffffd80;
    }
    iVar3 = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
    *(int *)(param_1 + 0x4c) = iVar3;
    iVar4 = *(int *)(iVar4 + 200) + 0xc00;
    if (iVar4 <= iVar3) goto LAB_080a01c4;
  }
  *(int *)(param_1 + 0x4c) = iVar4;
  *(undefined *)(param_1 + 0x13) = 1;
LAB_080a01c4:
  bVar1 = *(char *)(param_1 + 0x12) + 1;
  *(byte *)(param_1 + 0x12) = bVar1;
  if ((bVar1 & 3) == 0) {
    local_18 = *(int *)(param_1 + 0x4c) + 0xc00;
    local_14 = sub_08008360(local_18,*(undefined4 *)(param_1 + 0xc0));
    sub_0808827C(3,&local_18);
    local_18 = *(int *)(param_1 + 0x4c) + -0xc00;
    local_14 = sub_08008360(local_18,*(undefined4 *)(param_1 + 0xc0));
    sub_0808827C(3,&local_18);
  }
  if (*(char *)(param_1 + 0x13) != '\0') {
    *(undefined *)(param_1 + 0xd) = 4;
    *(undefined *)(param_1 + 0xe) = 1;
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0x87;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  }
  return in_lr;
}

