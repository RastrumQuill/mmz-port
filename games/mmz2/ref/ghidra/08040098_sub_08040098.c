// sub_08040098 at 0x08040098 (thumb)

undefined4 sub_08040098(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_lr;
  
  sub_08002638(&DAT_08432f30,(DAT_0202e5c8 - 0x300) * 0x20 + 0x10000);
  sub_08002AEC(&DAT_08432f3c,(DAT_0202e3c8 - 5) * 0x20 + 0x200);
  sub_08002638(&DAT_08432f44,(DAT_0202e5ca - 0x210) * 0x20 + 0x10000);
  sub_08002AEC(&DAT_08432f50,(DAT_0202e3ca - 6) * 0x20 + 0x200);
  sub_08012580(param_1);
  uVar2 = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe | 2;
  sub_080127D0(param_1);
  *(undefined *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  sub_0803F9E4(param_1,&DAT_0833a2b0,0x40);
  *(undefined4 *)(param_1 + 0x98) = 0x80418b5;
  *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0x58);
  *(undefined *)(param_1 + 0xbd) = 0;
  *(undefined *)(param_1 + 0xc3) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined *)(param_1 + 0xc0) = 0;
  *(undefined *)(param_1 + 0xc1) = 1;
  *(undefined *)(param_1 + 0xc2) = 0;
  iVar3 = 0x10;
  do {
    uVar1 = sub_080BFA98(param_1,uVar2 & 0xff,0);
    *(undefined4 *)(param_1 + 0xb4 + iVar3) = uVar1;
    iVar3 = iVar3 + 4;
    uVar2 = uVar2 + 1;
  } while (uVar2 < 8);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0833a138 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(undefined *)(param_1 + 0xd) = 0;
  sub_080401E8(param_1);
  return in_lr;
}

