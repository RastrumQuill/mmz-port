// sub_08073DCC at 0x08073DCC (thumb)

undefined4 sub_08073DCC(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 in_lr;
  
  sub_08001D30(&DAT_08c44b7c,(DAT_0202e166 - 0x200) * 0x20 + 0x10000);
  sub_08002208(&DAT_08c44b88,(DAT_0202df66 - 4) * 0x20 + 0x200);
  sub_0801CC9C(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_0801CF00(param_1,0x9300);
  sub_0801CFF0(param_1);
  *(undefined *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  sub_08050408(param_1,&DAT_088597a0,0x60);
  *(undefined4 *)(param_1 + 0x98) = 0x8074c91;
  iVar1 = sub_08008988(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  iVar2 = sub_08008868(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  iVar3 = sub_08008988(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  iVar1 = iVar1 + (iVar2 - iVar3 >> 1);
  *(int *)(param_1 + 0x54) = iVar1;
  iVar1 = sub_08008748(iVar1,*(undefined4 *)(param_1 + 0x58));
  iVar2 = sub_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  iVar3 = sub_08008748(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  *(int *)(param_1 + 0x58) = iVar1 + (iVar2 - iVar3 >> 1);
  iVar1 = *(int *)(param_1 + 0x54) + 0x3000;
  *(int *)(param_1 + 0x54) = iVar1;
  *(int *)(param_1 + 0xb4) = iVar1;
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0x58);
  *(undefined2 *)(param_1 + 0xc0) = 0x2000;
  *(undefined2 *)(param_1 + 0xc2) = 0x2000;
  *(undefined2 *)(param_1 + 0xc4) = 0;
  *(undefined2 *)(param_1 + 0xc6) = 0;
  *(undefined2 *)(param_1 + 200) = 0;
  *(undefined2 *)(param_1 + 0xca) = 0;
  *(undefined *)(param_1 + 0xe0) = 0;
  *(undefined *)(param_1 + 0xe1) = 0;
  *(undefined *)(param_1 + 0xe2) = 0;
  uVar4 = 0;
  do {
    sub_080A8B8C(param_1,uVar4,0);
    *(undefined *)(param_1 + 0xcc + uVar4) = 0;
    *(undefined *)(param_1 + 0xd4 + uVar4) = 0;
    uVar4 = uVar4 + 1 & 0xff;
  } while (uVar4 < 8);
  *(undefined *)(param_1 + 0xe3) = 8;
  *(undefined *)(param_1 + 0xde) = 0;
  *(undefined *)(param_1 + 0xdf) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_08854834 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(undefined *)(param_1 + 0xd) = 0;
  sub_08073F50(param_1);
  return in_lr;
}

