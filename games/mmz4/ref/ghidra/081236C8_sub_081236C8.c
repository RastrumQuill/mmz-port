// sub_081236C8 at 0x081236C8 (thumb)

undefined4 sub_081236C8(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 in_lr;
  undefined4 local_28;
  undefined4 local_24;
  
  *(undefined4 *)(param_1 + 0xdc4) = 0x16800;
  *(undefined4 *)(param_1 + 0xdc8) = 0xf000;
  sub_08006A94(0x14);
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
  DAT_0202e21c = 0x200;
  DAT_0202e01c = 4;
  sub_08001D30(&DAT_08c45298,0x10000);
  sub_08002208(&DAT_08c452a4,(DAT_0202e01c - 4) * 0x20 + 0x200);
  DAT_0202e22e = 0x3d5;
  DAT_0202e02e = 10;
  sub_08001D30(&DAT_08c4534c,0x13aa0);
  sub_08002208(&DAT_08c45358,(DAT_0202e02e - 4) * 0x20 + 0x200);
  DAT_0202e10e = 0x3a8;
  DAT_0202df0e = 10;
  sub_08001D30(&DAT_08c4480c,0xfac0);
  sub_08002208(&DAT_08c44818,(DAT_0202df0e - 9) * 0x20 + 0x200);
  local_28 = 0x16800;
  local_24 = 0xdc00;
  iVar1 = sub_0802F178(&local_28);
  piVar2 = (int *)(param_1 + 0xdcc);
  *piVar2 = iVar1;
  sub_0802CBD4(iVar1,0,0,0x19000,0x7fffffff);
  DAT_0202dbf0 = *piVar2;
  sub_080382BC(DAT_0202dbf0,&DAT_02035958);
  *(undefined *)(*piVar2 + 0x4c) = 1;
  *(byte *)(*piVar2 + 0x4a) = *(byte *)(*piVar2 + 0x4a) | 0x10;
  *(byte *)(*piVar2 + 10) = *(byte *)(*piVar2 + 10) | 0x10;
  local_28 = 0x1c000;
  local_24 = 0xd000;
  sub_08104430(param_1,&local_28,0,0);
  sub_08104430(param_1,&local_28,1,0);
  *(undefined4 *)(param_1 + 0xdd4) = 0;
  *(undefined4 *)(param_1 + 0xdd8) = 0;
  *(undefined4 *)(param_1 + 0xddc) = DAT_02000a90;
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
  *(undefined *)(param_1 + 0xdef) = 0;
  *(undefined4 *)(param_1 + 0xdf0) = 0;
  *(undefined *)(param_1 + 0xdf4) = 0;
  *(undefined *)(param_1 + 0xdf5) = 0;
  *(undefined *)(param_1 + 0xdf6) = 0;
  *(undefined *)(param_1 + 0xdf7) = 0;
  *(undefined *)(param_1 + 0xdf8) = 0;
  *(undefined *)(param_1 + 0xdf9) = 0;
  *(undefined *)(param_1 + 0xdfa) = 0;
  *(undefined *)(param_1 + 0xdfb) = 0;
  sub_08002A88(0x8c);
  return in_lr;
}

