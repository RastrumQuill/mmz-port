// sub_080740F0 at 0x080740F0 (thumb)

undefined4 sub_080740F0(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(undefined *)(param_1 + 0xd) = (&DAT_083637d4)[*(byte *)(param_1 + 0x10)];
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe | 2;
  sub_0801749C(param_1);
  if (((DAT_02002444 & 0x40) == 0) || (uVar1 = DAT_02030104 & 0x40, (DAT_02030104 & 0x40) != 0)) {
    uVar1 = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    uVar4 = 8;
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    uVar4 = 0xc;
  }
  sub_0800736C(param_1 + 0x74,&DAT_08363664,param_1 + 0x54,uVar4);
  *(int *)(param_1 + 0xa0) = param_1;
  *(uint *)(param_1 + 0x98) = uVar1;
  *(undefined4 *)(param_1 + 0x98) = 0x8073ec5;
  *(undefined4 *)(param_1 + 0xb4) = 0;
  if (*(char *)(param_1 + 0x10) == '\0') {
    iVar7 = 0;
    iVar6 = *(int *)(param_1 + 0x54);
    iVar2 = sub_0800A2CC(iVar6,*(undefined4 *)(param_1 + 0x58));
    iVar5 = 0;
    do {
      iVar3 = sub_080070D8(DAT_020305e8);
      if (iVar3 != 0) {
        *(undefined *)(iVar3 + 0x25) = 0x18;
        *(undefined *)(iVar3 + 9) = 0x14;
        *(undefined4 *)(iVar3 + 0x14) = 0x80740f1;
        *(undefined2 *)(iVar3 + 0x20) = 0;
        *(undefined *)(iVar3 + 0x22) = 0;
        *(byte *)(iVar3 + 0xb) = *(byte *)(iVar3 + 0xb) | 0x10;
        *(undefined *)(iVar3 + 0x1d) = *(undefined *)(iVar3 + 0x1c);
        *(undefined *)(iVar3 + 0x10) = 1;
        *(char *)(iVar3 + 0x12) = (char)iVar5;
        *(int *)(iVar3 + 0x54) = iVar6;
        *(int *)(iVar3 + 0x58) = iVar2;
        *(int *)(iVar3 + 100) = iVar6;
        *(int *)(iVar3 + 0x68) = iVar2;
        *(int *)(iVar3 + 0x28) = iVar7;
        if (iVar7 != 0) {
          *(int *)(iVar7 + 0x2c) = iVar3;
        }
        iVar6 = iVar6 + 0x4b4;
        iVar2 = iVar2 + 0xd2e;
        iVar7 = iVar3;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < 4);
    *(char *)(param_1 + 0x12) = (char)iVar5;
    *(int *)(param_1 + 0x28) = iVar7;
    *(undefined4 *)(param_1 + 0x2c) = 0;
    if (iVar7 != 0) {
      *(int *)(iVar7 + 0x2c) = param_1;
    }
    *(int *)(param_1 + 0x54) = iVar6;
    *(int *)(param_1 + 0x58) = iVar2;
  }
  else {
    sub_08074280(param_1);
  }
  return in_lr;
}

