// sub_081253B0 at 0x081253B0 (thumb)

undefined4 sub_081253B0(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 in_lr;
  int local_30;
  int local_2c;
  int local_28;
  int *local_24;
  
  local_24 = (int *)(param_1 + 0xdc4);
  *local_24 = 0x16800;
  *(undefined4 *)(param_1 + 0xdc8) = 0xf000;
  local_28 = param_1;
  sub_08006A94(0x18,local_24);
  sub_08001D30(&DAT_08c44000,(DAT_0202e040 - 0xc6) * 0x20 + 0x10000);
  sub_08002208(&DAT_08c4400c,(DAT_0202de40 - 0xe) * 0x20 + 0x200);
  sub_08001D30(&DAT_08c44014,(DAT_0202e042 - 0xbf) * 0x20 + 0x10000);
  sub_08002208(&DAT_08c44020,(DAT_0202de42 - 0xe) * 0x20 + 0x200);
  sub_08001D30(&DAT_08c44028,(DAT_0202e044 - 0x199) * 0x20 + 0x10000);
  sub_08002208(&DAT_08c44034,(DAT_0202de44 - 0xe) * 0x20 + 0x200);
  sub_08001D30(&DAT_08c44050,(DAT_0202e048 - 0x19e) * 0x20 + 0x10000);
  sub_08002208(&DAT_08c4405c,(DAT_0202de48 - 0xb) * 0x20 + 0x200);
  sub_08001D30(&DAT_08c44064,(DAT_0202e04a - 0x18d) * 0x20 + 0x10000);
  sub_08002208(&DAT_08c44070,(DAT_0202de4a - 0xe) * 0x20 + 0x200);
  DAT_0202e192 = 0x200;
  DAT_0202df92 = 4;
  sub_08001D30(&DAT_08c44d34,0x10000);
  sub_08002208(&DAT_08c44d40,(DAT_0202df92 - 4) * 0x20 + 0x200);
  DAT_0202e1b2 = 0x270;
  DAT_0202dfb2 = 5;
  sub_08001D30(&DAT_08c44e74,0x10e00);
  sub_08002208(&DAT_08c44e80,(DAT_0202dfb2 - 4) * 0x20 + 0x200);
  DAT_0202e048 = 0x2ec;
  DAT_0202de48 = 6;
  sub_08001D30(&DAT_08c44050,0x129c0);
  sub_08002208(&DAT_08c4405c,(DAT_0202de48 - 0xb) * 0x20 + 0x200);
  DAT_0202e22e = 0x3d5;
  DAT_0202e02e = 10;
  sub_08001D30(&DAT_08c4534c,0x13aa0);
  sub_08002208(&DAT_08c45358,(DAT_0202e02e - 4) * 0x20 + 0x200);
  DAT_0202e10e = 0x3a8;
  DAT_0202df0e = 10;
  sub_08001D30(&DAT_08c4480c,0xfac0);
  sub_08002208(&DAT_08c44818,(DAT_0202df0e - 9) * 0x20 + 0x200);
  local_30 = 0x16800;
  local_2c = 0xdc00;
  iVar2 = sub_0802F178(&local_30);
  iVar1 = local_28;
  piVar3 = (int *)(local_28 + 0xdcc);
  *piVar3 = iVar2;
  sub_0802CBD4(iVar2,0,0,0x1e000,0x7fffffff);
  DAT_0202dbf0 = *piVar3;
  sub_080382BC(DAT_0202dbf0,&DAT_02035958);
  *(undefined *)(*piVar3 + 0x4c) = 1;
  *(byte *)(*piVar3 + 0x4a) = *(byte *)(*piVar3 + 0x4a) | 0x10;
  *(byte *)(*piVar3 + 10) = *(byte *)(*piVar3 + 10) | 0x10;
  *(undefined4 *)(iVar1 + 0xdd4) = 0;
  *(undefined4 *)(iVar1 + 0xdd8) = 0;
  *(undefined4 *)(iVar1 + 0xddc) = DAT_02000aa0;
  *(undefined4 *)(iVar1 + 0xde0) = 0xe10;
  *(undefined *)(iVar1 + 0xde4) = 0;
  *(undefined *)(iVar1 + 0xde5) = 0;
  *(undefined *)(iVar1 + 0xde6) = 0;
  *(undefined *)(iVar1 + 0xde7) = 0;
  *(undefined *)(iVar1 + 0xde8) = 0;
  *(undefined *)(iVar1 + 0xde9) = 0;
  *(undefined *)(iVar1 + 0xdea) = 0;
  *(undefined *)(iVar1 + 0xdeb) = 0;
  *(undefined *)(local_28 + 0xdec) = 0;
  *(undefined *)(local_28 + 0xded) = 0;
  *(undefined *)(local_28 + 0xdee) = 0;
  *(undefined *)(local_28 + 0xdef) = 0;
  *(undefined4 *)(iVar1 + 0xdf0) = 0;
  *(undefined4 *)(iVar1 + 0xdf4) = 0;
  *(undefined4 *)(iVar1 + 0xdf8) = 0;
  *(undefined4 *)(iVar1 + 0xdfc) = 0;
  local_30 = *local_24 + -0x6000;
  local_2c = local_24[1];
  sub_08104DD0(&local_30,0,local_28);
  sub_08002A88(0x84);
  return in_lr;
}

