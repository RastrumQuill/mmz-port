// sub_0807EAD0 at 0x0807EAD0 (thumb)

undefined4 sub_0807EAD0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 in_lr;
  
  sub_08001D30(&DAT_08c44fa0,(DAT_0202e1d0 - 0x200) * 0x20 + 0x10000);
  sub_08002208(&DAT_08c44fac,(DAT_0202dfd0 - 4) * 0x20 + 0x200);
  sub_08001D30(&DAT_08c44fb4,(DAT_0202e1d2 - 0x2a2) * 0x20 + 0x10000);
  sub_08002208(&DAT_08c44fc0,(DAT_0202dfd2 - 5) * 0x20 + 0x200);
  sub_08001D30(&DAT_08c44f00,(DAT_0202e1c0 - 0x30c) * 0x20 + 0x10000);
  sub_08002208(&DAT_08c44f0c,(DAT_0202dfc0 - 7) * 0x20 + 0x200);
  sub_0801CC9C(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_0801CF00(param_1,0xc800);
  sub_0801CFF0(param_1);
  *(undefined *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  sub_08050408(param_1,&DAT_0885a3b8,0x60);
  *(undefined4 *)(param_1 + 0x98) = 0x807f6b1;
  iVar1 = sub_08008988(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  iVar2 = sub_08008868(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  iVar3 = sub_08008988(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  iVar1 = iVar1 + (iVar2 - iVar3 >> 1);
  *(int *)(param_1 + 0x54) = iVar1;
  uVar4 = sub_08008748(iVar1,*(undefined4 *)(param_1 + 0x58));
  *(undefined4 *)(param_1 + 0x58) = uVar4;
  *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0x58);
  *(undefined *)(param_1 + 0xd3) = 0xff;
  *(undefined *)(param_1 + 0xd4) = 0;
  *(undefined *)(param_1 + 0xd5) = 0xff;
  *(undefined *)(param_1 + 0xd6) = 0;
  *(undefined *)(param_1 + 0xd7) = 0;
  uVar5 = 0;
  do {
    *(undefined *)(param_1 + 0xd8 + uVar5) = 0;
    sub_08100DDC(param_1,uVar5 & 0xff,0);
    uVar5 = uVar5 + 1;
  } while ((int)uVar5 < 5);
  *(undefined4 *)(param_1 + 0xbc) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 0xc4) = 0;
  *(undefined4 *)(param_1 + 200) = 0;
  *(undefined4 *)(param_1 + 0xcc) = 0;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_08854834 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(undefined *)(param_1 + 0xd) = 0;
  sub_0807ECB0(param_1);
  return in_lr;
}

