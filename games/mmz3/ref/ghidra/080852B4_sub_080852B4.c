// sub_080852B4 at 0x080852B4 (thumb)

undefined4 sub_080852B4(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  undefined4 in_lr;
  
  sub_0801749C();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  *(undefined4 *)(param_1 + 0x98) = 0x8085989;
  *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 0x58);
  puVar4 = (undefined *)(param_1 + 0xb8);
  *puVar4 = 0;
  *(undefined4 *)(param_1 + 0xbc) = 0;
  *(undefined *)(param_1 + 0xb9) = 0;
  if (*(char *)(param_1 + 0x10) == '\0') {
    uVar1 = sub_0800A3C4(*(int *)(param_1 + 0x54) + -0xa00,*(undefined4 *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x54) = uVar1;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
    *(undefined *)(param_1 + 0x4c) = 0;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
    *puVar4 = 0;
  }
  else {
    uVar1 = sub_0800A4B4(*(int *)(param_1 + 0x54) + 0xa00,*(undefined4 *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x54) = uVar1;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
    *(undefined *)(param_1 + 0x4c) = 1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | 0x10;
    *puVar4 = 1;
  }
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(undefined *)(param_1 + 0xd) = 1;
  *(undefined *)(param_1 + 0xe) = 0;
  *(undefined *)(param_1 + 0xf) = 0;
  iVar2 = sub_08063614(param_1);
  if (iVar2 == 0) {
    if (((DAT_02002445 & 0x20) == 0) || (uVar3 = DAT_02030104 & 0x40, (DAT_02030104 & 0x40) != 0)) {
      uVar3 = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
      uVar1 = 6;
    }
    else {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
      uVar1 = 10;
    }
    sub_0800736C(param_1 + 0x74,&DAT_08364c50,param_1 + 0x54,uVar1);
    *(int *)(param_1 + 0xa0) = param_1;
    *(uint *)(param_1 + 0x98) = uVar3;
  }
  else {
    if (((DAT_02002445 & 0x20) == 0) || (uVar3 = DAT_02030104 & 0x40, (DAT_02030104 & 0x40) != 0)) {
      uVar3 = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
      uVar1 = 6;
    }
    else {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
      uVar1 = 10;
    }
    sub_0800736C(param_1 + 0x74,&DAT_08364c80,param_1 + 0x54,uVar1);
    *(int *)(param_1 + 0xa0) = param_1;
    *(uint *)(param_1 + 0x98) = uVar3;
    sub_08017700(param_1,0x6801);
    sub_080177F4(param_1);
  }
  *(undefined *)(param_1 + 0xba) = 0;
  sub_08085480(param_1);
  return in_lr;
}

