// sub_0811E6CC at 0x0811E6CC (thumb)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 sub_0811E6CC(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x63a8);
  *(undefined2 *)(param_1 + 4) = 0;
  *(undefined *)(param_1 + 0xdce) = 0;
  *(undefined *)(param_1 + 0xdcf) = 0;
  *(undefined *)(param_1 + 0xdd0) = 0;
  *(char *)(param_1 + 0xdd1) =
       *(char *)(iVar2 + 0xf3) + *(char *)(iVar2 + 0xf2) + *(char *)(iVar2 + 0xf1);
  sub_0811EB10(param_1);
  DAT_02000a00 = DAT_02000a00 & 0xf0f8 | 0x1300;
  DAT_02000a06 = 0x4206;
  _DAT_02000a10 = 0x100;
  DAT_02000a12 = 0;
  sub_08001D30(&DAT_08b6c190,0x4000);
  sub_08002208(&DAT_08b6c19c,0);
  sub_08001D30(&DAT_08b6c1cc,(DAT_02000a06 & 0xc) * 0x1000);
  sub_08002208(&DAT_08b6c1d8,0);
  sub_080027B8(param_1 + 0x16d8,&DAT_08b2c000,*(char *)(iVar2 + 0xf0) + 'h',0,0);
  sub_08001D30(&DAT_08c44528,(DAT_0202e0c4 - 0x300) * 0x20 + 0x10000);
  sub_08002208(&DAT_08c44534,(DAT_0202dec4 - 8) * 0x20 + 0x200);
  sub_08001D30(&DAT_08c4453c,(DAT_0202e0c6 - 0x380) * 0x20 + 0x10000);
  sub_08002208(&DAT_08c44548,(DAT_0202dec6 - 0xb) * 0x20 + 0x200);
  iVar3 = param_1 + 0xdd0;
  sub_0810B0C0(param_1,iVar3,0,0);
  sub_0810B0C0(param_1,iVar3,0,1);
  sub_0810B0C0(param_1,iVar3,0,2);
  bVar1 = 0;
  if (*(char *)(iVar2 + 0xf0) != '\0') {
    iVar3 = param_1 + 0xdd0;
    do {
      sub_0810B0C0(param_1,iVar3,1,bVar1);
      sub_0810B0C0(param_1,iVar3,1,bVar1 | 0x10);
      sub_0810B0C0(param_1,iVar3,1,bVar1 | 0x20);
      bVar1 = bVar1 + 1;
    } while (bVar1 < *(byte *)(iVar2 + 0xf0));
  }
  iVar2 = param_1 + 0xdd0;
  sub_0810B0C0(param_1,iVar2,2,1);
  sub_0810B0C0(param_1,iVar2,4,0);
  sub_0810B0C0(param_1,iVar2,3,0);
  sub_0800249C(0x41,0);
  sub_08001F1C(param_1 + 0xed8,(DAT_02000a06 & 0x1f00) << 3,0x1000);
  *(undefined *)(param_1 + 1) = 1;
  sub_0811E914(param_1);
  return in_lr;
}

