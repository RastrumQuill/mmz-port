// sub_0804BDD4 at 0x0804BDD4 (thumb)

undefined4 sub_0804BDD4(int param_1)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0xa108);
    *(undefined *)(param_1 + 0x4d) = 1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) | 0x20;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x20;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + -0x3500;
    *(undefined *)(param_1 + 0x12) = 0;
    sub_080032EC(0x6a);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  if (((((*(uint *)(param_1 + 0x8c) & 0x800) != 0) &&
       (iVar4 = *(int *)(*(int *)(param_1 + 0x84) + 0x2c), *(char *)(iVar4 + 8) == '\0')) &&
      ((*(uint *)(iVar4 + 0x8c) & 0x200) == 0)) && (*(short *)(iVar4 + 0xa4) != 0)) {
    *(int *)(param_1 + 0xd8) = iVar4;
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      iVar2 = *(int *)(param_1 + 0x54) + -0xe00;
    }
    else {
      iVar2 = *(int *)(param_1 + 0x54) + 0xe00;
    }
    *(int *)(iVar4 + 0x54) = iVar2;
    *(int *)(iVar4 + 0x58) = *(int *)(param_1 + 0x58) + 0xc00;
    sub_0802311C(iVar4,0,~(*(byte *)(param_1 + 10) >> 4) & 1,1);
  }
  if (*(int *)(param_1 + 0x60) < 0x380) {
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x40;
  }
  iVar4 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x58) = iVar4;
  sVar1 = sub_08008CFC(*(undefined4 *)(param_1 + 0x54),iVar4 + 0x3c00);
  if (sVar1 != 0) {
    iVar4 = *(int *)(param_1 + 0xd8);
    if (((iVar4 != 0) && ((*(uint *)(iVar4 + 0x8c) & 0x200) == 0)) &&
       (*(short *)(iVar4 + 0xa4) != 0)) {
      sub_0802311C(iVar4,0,~(*(byte *)(param_1 + 10) >> 4) & 1,0);
      uVar3 = sub_080093C4(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
      *(undefined4 *)(*(int *)(param_1 + 0xd8) + 0x58) = uVar3;
    }
    sub_08006E08(param_1 + 0x74,&DAT_0833b340);
    *(undefined *)(param_1 + 0xd) = 0x19;
    *(undefined *)(param_1 + 0xe) = 0;
    sub_080032EC(0x77);
    sub_08015518(4,param_1 + 0x54);
  }
  return in_lr;
}

