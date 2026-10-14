// sub_0807A7B8 at 0x0807A7B8 (thumb)

undefined4 sub_0807A7B8(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  sub_08002638(&DAT_08432d50,(DAT_0202e598 - 0x200) * 0x20 + 0x10000);
  sub_08002AEC(&DAT_08432d5c,(DAT_0202e398 - 4) * 0x20 + 0x200);
  sub_0801260C(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_080127E4(param_1,0x406);
  sub_080128D4(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  iVar1 = sub_080093C4(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  *(int *)(param_1 + 0x58) = iVar1 + -0xc800;
  *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0x58);
  *(undefined *)(param_1 + 0x24) = 0x80;
  sub_0807A6E0(param_1,0x403,2,0x20,8);
  sub_0807A6E0(param_1,0x40e,2,0x20,0xb);
  sub_0807A6E0(param_1,0x40e,2,0x20,0xd);
  sub_0807A6E0(param_1,0x404,2,0x20,0x10);
  sub_0807A6E0(param_1,0x40e,2,0x20,0x13);
  sub_0807A6E0(param_1,0x40e,2,0x20,0x15);
  sub_0807A6E0(param_1,0x405,2,0x20,0x18);
  sub_0807A6E0(param_1,0x40e,2,0x20,0x1b);
  sub_0807A6E0(param_1,0x40e,2,0x20,0x1d);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  sub_0807A784(param_1);
  return in_lr;
}

