// sub_080CEBB0 at 0x080CEBB0 (thumb)

undefined4 sub_080CEBB0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0836c2ec + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(undefined *)(param_1 + 0xd) = (&DAT_0836cdec)[*(byte *)(param_1 + 0x10)];
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_0801749C(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_0800736C(param_1 + 0x74,&DAT_0836cd84,param_1 + 0x54,1);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xef;
  *(undefined *)(param_1 + 0x1d) = *(undefined *)(param_1 + 0x1c);
  *(undefined4 *)(param_1 + 0x98) = 0x80ceb4d;
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 8;
  *(undefined **)(param_1 + 0x30) = &DAT_0836cde4;
  *(undefined2 *)(param_1 + 0x26) = 0x2001;
  iVar2 = *(int *)(param_1 + 0x54) + -0x800;
  *(int *)(param_1 + 0x54) = iVar2;
  iVar1 = *(int *)(param_1 + 0x58) + -0x800;
  *(int *)(param_1 + 0x58) = iVar1;
  *(int *)(param_1 + 100) = iVar2;
  *(int *)(param_1 + 0x68) = iVar1;
  *(undefined *)(param_1 + 0x13) = 0;
  sub_080CEC60(param_1);
  return in_lr;
}

