// sub_08061D50 at 0x08061D50 (thumb)

undefined4 sub_08061D50(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0833a138 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(undefined *)(param_1 + 0xd) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_08012580(param_1);
  sub_08002638(&DAT_0843355c,(DAT_0202e666 - 0x200) * 0x20 + 0x10000);
  sub_08002AEC(&DAT_08433568,(DAT_0202e466 - 4) * 0x20 + 0x200);
  iVar1 = *(int *)(param_1 + 0x54) + -0x5e00;
  *(int *)(param_1 + 0xb8) = iVar1;
  *(int *)(param_1 + 0xb8) = iVar1 + (uint)*(byte *)(param_1 + 0x10) * 0xbc00;
  *(int *)(param_1 + 0xbc) = *(int *)(param_1 + 0x58) + -0x1000;
  *(undefined4 *)(param_1 + 0xb4) = 0;
  *(undefined *)(param_1 + 0xc0) = 0;
  *(undefined *)(param_1 + 0xc1) = 0;
  *(undefined *)(param_1 + 0xc2) = 0;
  *(undefined *)(param_1 + 0xc3) = 0;
  *(undefined *)(param_1 + 0xcc) = 0;
  sub_080127E4(param_1,0x6b00);
  iVar1 = sub_08012C64(param_1);
  sub_08002D68(0x3a,(uint)(iVar1 << 0x18) >> 0x13 | 0x200);
  sub_0803F9E4(param_1,&DAT_0833d580,0x50);
  sub_08061E4C(param_1);
  return in_lr;
}

