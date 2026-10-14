// sub_08110940 at 0x08110940 (thumb)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 sub_08110940(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  undefined4 local_38;
  undefined4 local_34;
  int local_30;
  int local_2c;
  undefined4 *local_28;
  undefined2 local_24;
  
  local_30 = param_1 + 0x14;
  local_2c = param_1 + 0x220;
  local_28 = (undefined4 *)(param_1 + 0x22c);
  iVar1 = sub_08002BB4(0x193);
  if (iVar1 != 0) {
    sub_08002B5C(0x193);
  }
  iVar1 = sub_08002BB4(0x82);
  if (iVar1 != 0) {
    sub_08002B5C(0x82);
  }
  iVar1 = sub_08002BB4(0x199);
  if (iVar1 != 0) {
    sub_08002B5C(0x199);
  }
  iVar1 = sub_08002BB4(0xb3);
  if (iVar1 != 0) {
    sub_08002B5C(0xb3);
  }
  iVar1 = sub_08002BB4(0x1a6);
  if (iVar1 != 0) {
    sub_08002B5C(0x1a6);
  }
  iVar1 = sub_08002BB4(0x1a7);
  if (iVar1 != 0) {
    sub_08002B5C(0x1a7);
  }
  sub_08001FD4(&DAT_0202f620,(DAT_02000a04 & 0x1f00) << 3,0x580,0x3c0);
  DAT_02000a50 = 0;
  DAT_02000a5e = 0xff;
  DAT_02000a40 = 0;
  local_24 = 0;
  DAT_02000a00 = DAT_02000a00 & 0xf0f8 | 0x4f00;
  DAT_02000a04 = 6;
  DAT_02000a06 = 0x206;
  sub_08001D30(&DAT_08b6c03c,0x4000);
  sub_08002208(&DAT_08b6c048,0);
  local_38 = 0;
  sub_081284E4(&local_38,(DAT_02000a06 & 0x1f00) * 8 + 0x6000000,0x1000200);
  sub_08002734(0x12,&DAT_08b2c000,3,0,0xe);
  _DAT_02000a10 = 0x80000;
  DAT_02000a08 = 0x486;
  sub_08001D30(&DAT_08b6c028,0x4000);
  sub_08002208(&DAT_08b6c034,0);
  local_34 = 0;
  sub_081284E4(&local_34,(DAT_02000a08 & 0x1f00) * 8 + 0x6000000,0x1000200);
  sub_08002734(0x24,&DAT_08b2c000,2,0,0);
  DAT_02000a14 = 0;
  DAT_02000a0a = 0x606;
  local_34 = 0;
  sub_081284E4(&local_34,&DAT_06003000,0x1000200);
  sub_08002734(0x38,&DAT_08b2c000,4,0,0);
  DAT_02000a18 = 0;
  sub_08003384(local_30);
  sub_08002C0C(local_2c,local_28,0,0);
  sub_080033BC(local_30,local_2c);
  *local_28 = 0x7800;
  local_28[1] = 0x5000;
  sub_0801C734();
  DAT_0202dc38 = 0;
  sub_0800249C(0x89,0x1a0);
  *(undefined *)(param_1 + 6) = 1;
  *(undefined *)(param_1 + 7) = (undefined)local_24;
  sub_08128884(param_1,*(undefined4 *)(&DAT_08885be8 + (uint)*(byte *)(param_1 + 5) * 4));
  return in_lr;
}

