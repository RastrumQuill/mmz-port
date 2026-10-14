// sub_0806820C at 0x0806820C (thumb)

undefined4 sub_0806820C(int param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 in_lr;
  
  sub_0801749C();
  bVar1 = *(byte *)(param_1 + 10);
  *(byte *)(param_1 + 10) = bVar1 | 3;
  if (((DAT_02002444 & 0x10) == 0) || (uVar2 = DAT_02030104 & 0x40, (DAT_02030104 & 0x40) != 0)) {
    uVar2 = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    uVar4 = 8;
  }
  else {
    *(byte *)(param_1 + 10) = bVar1 | 7;
    uVar4 = 0xc;
  }
  sub_0800736C(param_1 + 0x74,&DAT_08362864,param_1 + 0x54,uVar4);
  *(int *)(param_1 + 0xa0) = param_1;
  *(uint *)(param_1 + 0x98) = uVar2;
  *(undefined4 *)(param_1 + 0x98) = 0x8068e49;
  *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 0x58);
  *(undefined *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0xbc) = 0;
  *(undefined *)(param_1 + 0xb9) = 0;
  *(undefined *)(param_1 + 0xbb) = 0;
  *(undefined *)(param_1 + 0xc0) = 0;
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 0x800;
  if (*(char *)(param_1 + 0x10) == '\0') {
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
    *(undefined *)(param_1 + 0xd) = 1;
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
    *(undefined *)(param_1 + 0xd) = 2;
  }
  *(undefined *)(param_1 + 0xe) = 0;
  *(undefined *)(param_1 + 0xf) = 0;
  iVar3 = sub_08063614(param_1);
  if (iVar3 != 0) {
    sub_08017700(param_1,0x800);
    sub_080177F4(param_1);
  }
  sub_08068328(param_1);
  return in_lr;
}

