// sub_0807DCFC at 0x0807DCFC (thumb)

undefined4 sub_0807DCFC(int param_1)

{
  byte bVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar5 = *(int *)(param_1 + 0x28);
  sub_0801260C();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_080127E4(param_1,0x5c00);
  sub_080128D4(param_1);
  bVar1 = *(byte *)(param_1 + 0x11);
  if (bVar1 == 0) {
    bVar2 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar2;
  *(byte *)(param_1 + 0x4c) = bVar1;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)((bVar1 & 1) << 4);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_08006DE4(param_1 + 0x74,&DAT_083407a0,param_1 + 0x54,8);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined *)(param_1 + 0x24) = 0;
  *(undefined *)(param_1 + 0x25) = 0x19;
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 8;
  *(undefined **)(param_1 + 0x30) = &DAT_083407d0;
  *(undefined2 *)(param_1 + 0x26) = 0x2e01;
  uVar3 = sub_080093C4(*(undefined4 *)(iVar5 + 0x54),*(undefined4 *)(iVar5 + 0x58));
  *(undefined4 *)(param_1 + 0xc0) = uVar3;
  uVar3 = *(undefined4 *)(iVar5 + 0x58);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar5 + 0x54);
  *(undefined4 *)(param_1 + 0x58) = uVar3;
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    iVar4 = sub_08009684(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(int *)(param_1 + 0x54) = iVar4 + 0x1800;
    uVar3 = 0xfffffc00;
  }
  else {
    iVar4 = sub_08009774(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(int *)(param_1 + 0x54) = iVar4 + -0x1800;
    uVar3 = 0x400;
  }
  *(undefined4 *)(param_1 + 0x5c) = uVar3;
  if (*(char *)(param_1 + 0x10) == '\0') {
    iVar5 = *(int *)(iVar5 + 0xb8);
    iVar4 = -0x2000;
  }
  else {
    iVar5 = *(int *)(iVar5 + 0xb8);
    iVar4 = 0x4000;
  }
  *(int *)(param_1 + 0x58) = iVar5 + iVar4;
  *(uint *)(param_1 + 0x54) = (*(uint *)(param_1 + 0x54) & 0xfffff000) + 0x800;
  *(uint *)(param_1 + 0x58) = (*(uint *)(param_1 + 0x58) & 0xfffff000) + 0x800;
  *(undefined *)(param_1 + 0x12) = 0x20;
  *(undefined *)(param_1 + 0x13) = 0;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  sub_0807DE58(param_1);
  return in_lr;
}

