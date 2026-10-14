// sub_08050440 at 0x08050440 (thumb)

undefined4 sub_08050440(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 in_lr;
  
  sub_08001D30(&DAT_08c44000,(DAT_0202e040 - 0xc6) * 0x20 + 0x10000);
  sub_08002208(&DAT_08c4400c,(DAT_0202de40 - 0xe) * 0x20 + 0x200);
  sub_0801CC9C(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_0801CEEC(param_1);
  *(undefined *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  sub_08050408(param_1,&DAT_08854918,0x40);
  *(undefined4 *)(param_1 + 0x98) = 0x8052f85;
  iVar1 = sub_08008868(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  *(int *)(param_1 + 0x54) = iVar1 + -0x2800;
  uVar2 = sub_08008534(iVar1 + -0x2800,*(undefined4 *)(param_1 + 0x58));
  *(undefined4 *)(param_1 + 0x58) = uVar2;
  *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0x58);
  iVar1 = sub_08008988(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  iVar3 = sub_08008868(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  iVar4 = sub_08008988(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  *(int *)(param_1 + 0xc4) = iVar1 + (iVar3 - iVar4 >> 1);
  iVar1 = sub_08008748(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  iVar3 = sub_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  iVar4 = sub_08008748(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  *(int *)(param_1 + 200) = iVar1 + (iVar3 - iVar4 >> 1);
  *(undefined4 *)(param_1 + 0xbc) = 0;
  *(undefined *)(param_1 + 0xd5) = 0;
  *(undefined *)(param_1 + 0xd6) = 0;
  *(undefined *)(param_1 + 0xd8) = 0;
  *(undefined *)(param_1 + 0xd9) = 0;
  *(undefined2 *)(param_1 + 0xd0) = 0;
  *(undefined2 *)(param_1 + 0xd2) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  uVar5 = 0;
  do {
    *(undefined *)(param_1 + 0xda + uVar5) = 0;
    uVar5 = uVar5 + 1 & 0xff;
  } while (uVar5 < 8);
  sub_08001D30(&DAT_08c444b0,(DAT_0202e0b8 - 0x264) * 0x20 + 0x10000);
  sub_08002208(&DAT_08c444bc,(DAT_0202deb8 - 5) * 0x20 + 0x200);
  sub_08001D30(&DAT_08c444c4,(DAT_0202e0ba - 0x2f1) * 0x20 + 0x10000);
  sub_08002208(&DAT_08c444d0,(DAT_0202deba - 6) * 0x20 + 0x200);
  sub_08001D30(&DAT_08c444d8,(DAT_0202e0bc - 0x36a) * 0x20 + 0x10000);
  sub_08002208(&DAT_08c444e4,(DAT_0202debc - 7) * 0x20 + 0x200);
  sub_08001D30(&DAT_08c444ec,(DAT_0202e0be - 0x3a0) * 0x20 + 0x10000);
  sub_08002208(&DAT_08c444f8,(DAT_0202debe - 8) * 0x20 + 0x200);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_08854834 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  if (*(char *)(param_1 + 0x10) == '\0') {
    *(undefined *)(param_1 + 0xd) = 0;
  }
  else {
    *(undefined *)(param_1 + 0xd) = 1;
  }
  sub_0805069C(param_1);
  return in_lr;
}

