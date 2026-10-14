// sub_080C8EA4 at 0x080C8EA4 (thumb)

undefined4 sub_080C8EA4(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x11) == '\0') {
    sub_08012580(param_1);
    sub_080127D0(param_1);
    *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) | 0xc;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 7;
    sub_08006DE4(param_1 + 0x74,&DAT_08348e94,param_1 + 0x54,0);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0;
    iVar2 = *(int *)(param_1 + 0x54) + 0x800;
    *(int *)(param_1 + 0x54) = iVar2;
    iVar2 = sub_080093C4(iVar2,*(undefined4 *)(param_1 + 0x58));
    *(int *)(param_1 + 0x58) = iVar2 + 0x100;
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0834863c + (uint)*(byte *)(param_1 + 9) * 4) + 4);
    if (((*(int *)(DAT_0202e130 + 0x54) - *(int *)(param_1 + 0x54)) + 0x2000U < 0x4001) &&
       ((*(int *)(DAT_0202e130 + 0x58) - (iVar2 + 0x100)) + 0x2000U < 0x4001)) {
      *(undefined *)(param_1 + 0xd) = 1;
      *(undefined *)(param_1 + 0xf) = 0;
      *(undefined *)(param_1 + 0xe) = 0;
    }
    else {
      *(undefined *)(param_1 + 0xd) = 0;
      *(undefined *)(param_1 + 0xf) = 0;
      *(undefined *)(param_1 + 0xe) = 0;
    }
    sub_080C8FE0(param_1);
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 6;
    sub_08006DE4(param_1 + 0x74,&DAT_08348ec4,param_1 + 0x54,0);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0x80c902d;
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 8;
    *(undefined **)(param_1 + 0x30) = &DAT_08348f34;
    *(undefined2 *)(param_1 + 0x26) = 0xc01;
    *(undefined4 *)(param_1 + 0xb4) = 0;
    uVar1 = sub_080093C4(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x58) = uVar1;
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0834863c + (uint)*(byte *)(param_1 + 9) * 4) + 4);
    *(undefined *)(param_1 + 0xd) = 2;
    *(undefined *)(param_1 + 0xf) = 0;
    *(undefined *)(param_1 + 0xe) = 0;
    sub_080C8FE0(param_1);
  }
  return in_lr;
}

