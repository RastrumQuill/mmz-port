// sub_08123DE0 at 0x08123DE0 (thumb)

undefined4 sub_08123DE0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 in_lr;
  int local_2c;
  undefined4 local_28;
  uint local_24;
  
  local_24 = 0;
  *(undefined4 *)(param_1 + 0xdc4) = 0x16800;
  *(undefined4 *)(param_1 + 0xdc8) = 0xf000;
  sub_08006A94(0x15);
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
  DAT_0202e212 = 0x200;
  DAT_0202e012 = 4;
  sub_08001D30(&DAT_08c45234,0x10000);
  sub_08002208(&DAT_08c45240,(DAT_0202e012 - 4) * 0x20 + 0x200);
  DAT_0202e214 = 0x250;
  DAT_0202e014 = 5;
  sub_08001D30(&DAT_08c45248,0x10000);
  sub_08002208(&DAT_08c45254,(DAT_0202e014 - 4) * 0x20 + 0x200);
  DAT_0202e22e = 0x3d5;
  DAT_0202e02e = 10;
  sub_08001D30(&DAT_08c4534c,0x13aa0);
  sub_08002208(&DAT_08c45358,(DAT_0202e02e - 4) * 0x20 + 0x200);
  DAT_0202e10e = 0x3a8;
  DAT_0202df0e = 10;
  sub_08001D30(&DAT_08c4480c,0xfac0);
  sub_08002208(&DAT_08c44818,(DAT_0202df0e - 9) * 0x20 + 0x200);
  local_2c = 0x16800;
  local_28 = 0xdc00;
  uVar1 = sub_0802F178(&local_2c);
  *(undefined4 *)(param_1 + 0xdcc) = uVar1;
  sub_0802CBD4(uVar1,0,0,0x7fffffff,0x7fffffff);
  DAT_0202dbf0 = *(undefined4 *)(param_1 + 0xdcc);
  sub_080382BC(DAT_0202dbf0,&DAT_02035958);
  *(uint *)(param_1 + 0xdd4) = local_24;
  *(uint *)(param_1 + 0xdd8) = local_24;
  *(undefined4 *)(param_1 + 0xddc) = DAT_02000a94;
  *(undefined4 *)(param_1 + 0xde0) = 0xe10;
  *(undefined *)(param_1 + 0xde4) = 0;
  *(undefined *)(param_1 + 0xde5) = 0;
  *(undefined *)(param_1 + 0xde6) = 0;
  *(undefined *)(param_1 + 0xde7) = 0;
  *(undefined *)(param_1 + 0xde8) = 0;
  *(undefined *)(param_1 + 0xde9) = 0;
  *(undefined *)(param_1 + 0xdea) = 0;
  *(undefined *)(param_1 + 0xdeb) = 0;
  *(undefined *)(param_1 + 0xdec) = 0;
  *(undefined *)(param_1 + 0xded) = 0;
  *(undefined *)(param_1 + 0xdee) = 0;
  piVar3 = &DAT_088865b8;
  do {
    iVar2 = *piVar3;
    piVar3 = piVar3 + 1;
    local_2c = *(int *)(param_1 + 0xdc4) + iVar2 * 0x100;
    local_28 = *(undefined4 *)(param_1 + 0xdc8);
    sub_08104174(&local_2c,local_24 & 0xff,param_1);
    local_24 = local_24 + 1;
  } while ((int)local_24 < 3);
  *(undefined4 *)(param_1 + 0xdf0) = 0;
  *(undefined4 *)(param_1 + 0xdf4) = 0;
  *(undefined4 *)(param_1 + 0xe00) = 0;
  *(undefined4 *)(param_1 + 0xdf8) = 0;
  *(undefined4 *)(param_1 + 0xdfc) = 0;
  sub_08002A88(0x8b);
  return in_lr;
}

