// sub_081244F0 at 0x081244F0 (thumb)

undefined4 sub_081244F0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 in_lr;
  undefined4 local_2c;
  undefined4 local_28;
  int local_24;
  
  *(undefined4 *)(param_1 + 0xdc4) = 0x16800;
  *(undefined4 *)(param_1 + 0xdc8) = 0xf000;
  local_24 = param_1;
  sub_08006A94(0x16);
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
  DAT_0202e1ba = 0x200;
  DAT_0202dfba = 4;
  sub_08001D30(&DAT_08c44ec4,0x10000);
  sub_08002208(&DAT_08c44ed0,(DAT_0202dfba - 4) * 0x20 + 0x200);
  DAT_0202e0d0 = 0x264;
  DAT_0202ded0 = 5;
  sub_08001D30(&DAT_08c445a0,0xf560);
  sub_08002208(&DAT_08c445ac,(DAT_0202ded0 - 7) * 0x20 + 0x200);
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
  uVar2 = sub_0802F178(&local_2c);
  iVar1 = local_24;
  puVar3 = (undefined4 *)(local_24 + 0xdcc);
  *puVar3 = uVar2;
  sub_0802CBD4(uVar2,0,0,0x7fffffff,0x7fffffff);
  DAT_0202dbf0 = *puVar3;
  sub_080382BC(DAT_0202dbf0,&DAT_02035958);
  *(undefined4 *)(iVar1 + 0xdd4) = 0;
  *(undefined4 *)(iVar1 + 0xdd8) = 0;
  *(undefined4 *)(iVar1 + 0xddc) = DAT_02000a98;
  *(undefined4 *)(iVar1 + 0xde0) = 0xe10;
  *(undefined *)(iVar1 + 0xde4) = 0;
  *(undefined *)(iVar1 + 0xde5) = 0;
  *(undefined *)(iVar1 + 0xde6) = 0;
  *(undefined *)(iVar1 + 0xde7) = 0;
  *(undefined *)(iVar1 + 0xde8) = 0;
  *(undefined *)(iVar1 + 0xde9) = 0;
  *(undefined *)(iVar1 + 0xdea) = 0;
  *(undefined *)(iVar1 + 0xdeb) = 0;
  *(undefined *)(local_24 + 0xdec) = 0;
  *(undefined *)(local_24 + 0xded) = 0;
  *(undefined *)(local_24 + 0xdee) = 0;
  *(undefined *)(local_24 + 0xdef) = 0;
  *(undefined4 *)(iVar1 + 0xdf0) = 0;
  *(undefined4 *)(iVar1 + 0xdf4) = 1;
  *(undefined4 *)(iVar1 + 0xdfc) = 0;
  *(undefined4 *)(iVar1 + 0xdf8) = 0;
  sub_08002A88(0x85);
  return in_lr;
}

