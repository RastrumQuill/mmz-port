// sub_080CB95C at 0x080CB95C (thumb)

undefined4 sub_080CB95C(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0836c2ec + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(undefined *)(param_1 + 0xd) = (&DAT_0836c6e4)[*(byte *)(param_1 + 0x10)];
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_0801749C(param_1);
  if (*(byte *)(param_1 + 0x10) < 4) {
    sub_08017700(param_1,0x3801);
    sub_080177F4(param_1);
    *(undefined4 *)(param_1 + 0x28) = 0;
    if (*(char *)(param_1 + 0x10) == '\x03') {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x20;
      *(undefined *)(param_1 + 0x4d) = 1;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xdf | 0x20;
      uVar5 = sub_0800A2CC(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
      *(undefined4 *)(param_1 + 0x58) = uVar5;
      *(undefined4 *)(param_1 + 0xb4) = uVar5;
      *(undefined4 *)(param_1 + 0x2c) = 0;
      *(undefined4 *)(param_1 + 0x28) = 0;
    }
    else {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xdf;
      *(undefined *)(param_1 + 0x4d) = 0;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xdf;
      iVar1 = sub_0800A104(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
      *(int *)(param_1 + 0xb4) = iVar1;
      iVar1 = iVar1 + (*(byte *)(param_1 + 0x10) + 1) * -0x1000;
      *(int *)(param_1 + 0x58) = iVar1;
      iVar4 = 0;
      iVar6 = param_1;
      if (*(byte *)(param_1 + 0x10) != 0xffffffff) {
        do {
          iVar2 = sub_0800710C(DAT_02030630);
          if (iVar2 != 0) {
            iVar1 = iVar1 + 0x1000;
            *(undefined *)(iVar2 + 0x25) = 0x1e;
            *(undefined *)(iVar2 + 9) = 5;
            *(undefined4 *)(iVar2 + 0x14) = 0x80cb95d;
            *(undefined2 *)(iVar2 + 0x20) = 0;
            *(undefined *)(iVar2 + 0x22) = 0;
            *(byte *)(iVar2 + 0xb) = *(byte *)(iVar2 + 0xb) | 0x10;
            *(undefined *)(iVar2 + 0x1d) = *(undefined *)(iVar2 + 0x1c);
            *(undefined *)(iVar2 + 0x10) = 4;
            *(undefined4 *)(iVar2 + 0x54) = *(undefined4 *)(param_1 + 0x54);
            *(int *)(iVar2 + 0x58) = iVar1;
            *(undefined4 *)(iVar2 + 0xb4) = *(undefined4 *)(iVar6 + 0xb4);
            *(int *)(iVar2 + 0x28) = iVar6;
            *(int *)(iVar6 + 0x2c) = iVar2;
            *(undefined4 *)(iVar2 + 0x2c) = 0;
            iVar6 = iVar2;
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < (int)(*(byte *)(param_1 + 0x10) + 1));
      }
    }
    if (((DAT_02002445 & 8) == 0) || (uVar3 = DAT_02030104 & 0x40, (DAT_02030104 & 0x40) != 0)) {
      uVar3 = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
      uVar5 = 0x10;
    }
    else {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
      uVar5 = 0x14;
    }
    sub_0800736C(param_1 + 0x74,&DAT_0836c654,param_1 + 0x54,uVar5);
    *(int *)(param_1 + 0xa0) = param_1;
    *(uint *)(param_1 + 0x98) = uVar3;
  }
  else if (((DAT_02002445 & 8) == 0) || (uVar3 = (uint)DAT_02030104, (DAT_02030104 & 0x40) != 0)) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    sub_0800736C(param_1 + 0x74,&DAT_0836c654,param_1 + 0x54,0xc);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0;
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    sub_0800736C(param_1 + 0x74,&DAT_0836c654,param_1 + 0x54,0x10);
    *(int *)(param_1 + 0xa0) = param_1;
    *(uint *)(param_1 + 0x98) = uVar3 & 0x40;
  }
  *(undefined4 *)(param_1 + 0x98) = 0x80cb959;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  sub_080CBBD4(param_1);
  return in_lr;
}

