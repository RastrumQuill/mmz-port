// sub_08074AAC at 0x08074AAC (thumb)

undefined4 sub_08074AAC(int param_1)

{
  undefined uVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x28);
  sub_0801260C();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_080127E4(param_1,0x2a00);
  sub_080128D4(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar2 + 0x54);
  *(int *)(param_1 + 0x58) = *(int *)(iVar2 + 0x58) + -0x1e00;
  *(undefined4 *)(param_1 + 0x60) = 2;
  if (*(char *)(param_1 + 0x11) == '\0') {
    uVar1 = 0x2c;
  }
  else {
    uVar1 = 0xd4;
  }
  *(undefined *)(param_1 + 0x13) = uVar1;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_08006DE4(param_1 + 0x74,&DAT_0833f904,param_1 + 0x54,8);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined *)(param_1 + 0x24) = *(undefined *)(param_1 + 0x13);
  *(undefined4 *)(param_1 + 0x5c) = 0x200;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(undefined *)(param_1 + 0xe) = 1;
  sub_08074A74(param_1);
  return in_lr;
}

