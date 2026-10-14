// sub_080BFAF4 at 0x080BFAF4 (thumb)

undefined4 sub_080BFAF4(int param_1)

{
  undefined uVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar2 = *(int *)(*(int *)(param_1 + 0x28) + 0x54) + (uint)*(byte *)(param_1 + 0x10) * 0x2000;
  *(int *)(param_1 + 0x54) = iVar2;
  iVar3 = *(int *)(*(int *)(param_1 + 0x28) + 0x58);
  *(uint *)(param_1 + 0x54) = iVar2 + 1U & 0xffffff00;
  *(uint *)(param_1 + 0x58) = iVar3 + 0x6001U & 0xffffff00;
  sub_08012580(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  if (*(char *)(param_1 + 0x10) == '\0') {
    sub_080127E4(param_1,0x1d01);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    uVar1 = 2;
  }
  else if (*(char *)(param_1 + 0x10) == '\a') {
    sub_080127E4(param_1,0x1d00);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    uVar1 = 2;
  }
  else {
    sub_080127E4(param_1,0x1d02);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    uVar1 = 1;
  }
  *(undefined *)(param_1 + 0xbd) = uVar1;
  sub_080128D4(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_08006DE4(param_1 + 0x74,&DAT_083487e0,param_1 + 0x54,1);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  *(undefined2 *)(param_1 + 0xbe) = 0;
  *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0834863c + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(undefined *)(param_1 + 0xd) = 0;
  sub_080BFC0C(param_1);
  return in_lr;
}

