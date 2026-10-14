// sub_0803E124 at 0x0803E124 (thumb)

undefined4 sub_0803E124(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  undefined auStack_28 [8];
  
  sub_0800BEBC();
  DAT_0202f4a5 = 0;
  sub_0800393C(&DAT_085d79ac,(DAT_0202fa22 - 0x200) * 0x20 + 0x10000);
  sub_08003E14(&DAT_085d79b8,(DAT_0202f822 - 4) * 0x20 + 0x200);
  sub_0800393C(&DAT_085d79c0,(DAT_0202fa24 - 0x284) * 0x20 + 0x10000);
  sub_08003E14(&DAT_085d79cc,(DAT_0202f824 - 5) * 0x20 + 0x200);
  sub_0800393C(&DAT_085d79d4,(DAT_0202fa26 - 0x300) * 0x20 + 0x10000);
  sub_08003E14(&DAT_085d79e0,(DAT_0202f826 - 6) * 0x20 + 0x200);
  sub_0800393C(&DAT_085d79e8,(DAT_0202fa28 - 0x326) * 0x20 + 0x10000);
  sub_08003E14(&DAT_085d79f4,(DAT_0202f828 - 7) * 0x20 + 0x200);
  sub_0803D3D4(param_1,&DAT_0835e2f4,0x40);
  *(undefined4 *)(param_1 + 0x98) = 0x803ea61;
  *(undefined *)(param_1 + 0xb4) = 0;
  *(undefined *)(param_1 + 0xb5) = 0xff;
  *(undefined *)(param_1 + 0xb6) = 0xff;
  *(undefined4 *)(param_1 + 0xbc) = 0;
  *(undefined *)(param_1 + 0xb7) = 0;
  *(undefined2 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 0xd4) = 0;
  uVar1 = sub_0800A104(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + -0x5000);
  *(undefined4 *)(param_1 + 0x58) = uVar1;
  *(undefined4 *)(param_1 + 0xb8) = uVar1;
  *(undefined4 *)(param_1 + 0x68) = uVar1;
  if (*(char *)(param_1 + 0x10) == '\0') {
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0835e0e8 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
    *(undefined *)(param_1 + 0xd) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0835e0e8 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
    *(undefined *)(param_1 + 0xd) = 3;
  }
  *(undefined *)(param_1 + 0xe) = 0;
  *(undefined *)(param_1 + 0xf) = 0;
  sub_0806A580(auStack_28,0,param_1);
  uVar1 = sub_080B8CA0(auStack_28,2,param_1);
  *(undefined4 *)(param_1 + 0x2c) = uVar1;
  sub_0806A580(auStack_28,1,param_1);
  sub_080040A8(0xb,0x2a0);
  sub_0803E2EC(param_1);
  return in_lr;
}

