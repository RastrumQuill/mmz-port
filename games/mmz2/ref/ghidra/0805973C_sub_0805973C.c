// sub_0805973C at 0x0805973C (thumb)

undefined4 sub_0805973C(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined *)(param_1 + 0x10) = 7;
    sub_080032EC(0x34);
    sub_08006E08(param_1 + 0x74,&DAT_0833c9a8);
    sub_080B5C58(param_1);
    *(uint *)(param_1 + 0xbc) = *(uint *)(param_1 + 0xbc) & 0xffffffbd | 8;
    sub_08057B34(param_1);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    sub_080127E4(param_1,0xa71b);
    *(undefined4 *)(param_1 + 0x5c) = 0xfffffa00;
    uVar4 = 0xfffffa00;
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      uVar4 = 0x600;
    }
    *(undefined4 *)(param_1 + 0x5c) = uVar4;
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      iVar1 = DAT_0202ed50 + 0xb7ff;
    }
    else {
      iVar1 = DAT_0202ed50 + -0xb800;
    }
    *(int *)(param_1 + 0x54) = iVar1;
    *(undefined4 *)(param_1 + 0x60) = 0;
    iVar3 = *(int *)(param_1 + 0x58) + -0x1000;
    iVar1 = *(int *)(DAT_0202e130 + 0x58);
    *(int *)(param_1 + 0x58) = iVar1;
    if (iVar3 < iVar1) {
      *(int *)(param_1 + 0x58) = iVar3;
    }
    *(undefined *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  if (*(byte *)(param_1 + 0x12) < 10) {
    *(byte *)(param_1 + 0x12) = *(byte *)(param_1 + 0x12) + 1;
  }
  else {
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + -4;
    uVar2 = sub_08015188(&DAT_0202ed18,param_1 + 0x54);
    if (0x4000 < uVar2) {
      *(undefined *)(param_1 + 0x10) = 0;
      *(uint *)(param_1 + 0xbc) = *(uint *)(param_1 + 0xbc) | 2;
      *(undefined *)(param_1 + 0xd) = 3;
      *(undefined *)(param_1 + 0xe) = 0;
      *(undefined *)(param_1 + 0xc4) = 4;
    }
  }
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  sub_080128D4(param_1);
  return in_lr;
}

