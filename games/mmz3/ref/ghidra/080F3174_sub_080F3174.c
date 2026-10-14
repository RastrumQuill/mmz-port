// sub_080F3174 at 0x080F3174 (thumb)

undefined4 sub_080F3174(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0x64ac);
  *(undefined2 *)(param_1 + 4) = 0;
  *(undefined *)(param_1 + 0xe12) = *(undefined *)(iVar1 + 0xc0);
  *(undefined *)(param_1 + 0xe13) = *(undefined *)(iVar1 + 0xc1);
  *(undefined *)(param_1 + 0xe16) = *(undefined *)(iVar1 + 0xc2);
  *(undefined *)(param_1 + 0xe1e) = *(undefined *)(iVar1 + 0xd9);
  *(undefined *)(param_1 + 0xe14) = *(undefined *)(iVar1 + 0xb4);
  *(undefined *)(param_1 + 0xe15) = *(undefined *)(iVar1 + 0xb5);
  *(undefined *)(param_1 + 0xe1c) = 0xff;
  *(byte *)(param_1 + 0xe18) = 0;
  sub_080F34D8(param_1);
  DAT_020023c0 = DAT_020023c0 & 0xf0f8 | 0x1300;
  DAT_020023c6 = 0x4206;
  DAT_020023d0 = 0;
  sub_080FE2C0(param_1,*(undefined4 *)(&DAT_0838b9a8 + (uint)*(byte *)(param_1 + 0xe18) * 4));
  *(undefined *)(param_1 + 2) = 1;
  *(undefined *)(param_1 + 1) = 1;
  sub_080F3244(param_1);
  return in_lr;
}

