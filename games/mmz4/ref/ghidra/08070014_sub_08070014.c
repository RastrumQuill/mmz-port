// sub_08070014 at 0x08070014 (thumb)

undefined4 sub_08070014(int param_1)

{
  bool bVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 in_lr;
  
  bVar1 = *(int *)(param_1 + 0x54) < *(int *)(DAT_0202dbf0 + 0x54);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_08854834 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(undefined *)(param_1 + 0xd) = 1;
  *(undefined *)(param_1 + 0xe) = 0;
  *(undefined *)(param_1 + 0xf) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  uVar5 = *(undefined4 *)(param_1 + 0x54);
  uVar6 = *(undefined4 *)(param_1 + 0x58);
  uVar3 = sub_08008988(uVar5,uVar6,0);
  *(undefined4 *)(param_1 + 0xcc) = uVar3;
  iVar4 = sub_08008748(uVar5,uVar6);
  *(int *)(param_1 + 0xd0) = iVar4;
  *(int *)(param_1 + 0x58) = iVar4 + 0x7fff;
  *(undefined *)(param_1 + 0xb8) = 0xff;
  *(undefined *)(param_1 + 0xba) = 0;
  *(undefined *)(param_1 + 0xc0) = 0xff;
  *(undefined *)(param_1 + 0xc1) = 0;
  *(undefined *)(param_1 + 0xc3) = 2;
  *(undefined *)(param_1 + 0xbb) = 0;
  *(undefined2 *)(param_1 + 0xca) = 0;
  *(undefined *)(param_1 + 0xc9) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  sub_0801CC9C(param_1);
  sub_0801CEEC(param_1);
  *(bool *)(param_1 + 0x4c) = bVar1;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar1 << 4;
  if (bVar1) {
    bVar2 = *(byte *)(param_1 + 10) | 0x10;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) & 0xef;
  }
  *(byte *)(param_1 + 10) = bVar2;
  sub_08050408(param_1,&DAT_088594d0,0x40);
  *(undefined4 *)(param_1 + 0x98) = 0x807359d;
  sub_08001D30(&DAT_08c44b68,(DAT_0202e164 - 0x36f) * 0x20 + 0x10000);
  sub_08002208(&DAT_08c44b74,(DAT_0202df64 - 6) * 0x20 + 0x200);
  sub_08001D30(&DAT_08c44b40,(DAT_0202e160 - 0x27e) * 0x20 + 0x10000);
  sub_08002208(&DAT_08c44b4c,(DAT_0202df60 - 4) * 0x20 + 0x200);
  sub_08001D30(&DAT_08c44b54,(DAT_0202e162 - 0x2f8) * 0x20 + 0x10000);
  sub_08002208(&DAT_08c44b60,(DAT_0202df62 - 5) * 0x20 + 0x200);
  if ((((DAT_0202cac0 & 0x10) == 0) || ((DAT_0202e8b4 & 4) != 0)) && (DAT_0202e910 != 0x10)) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  uVar3 = sub_080FA658(param_1 + 0x54,uVar3);
  *(undefined4 *)(param_1 + 0xb4) = uVar3;
  DAT_02000a50 = DAT_02000a50 | 0x8000;
  DAT_02000a5f = 0xfd;
  DAT_02000a5e = 0xff;
  sub_0800249C(0x7a,0x2a0);
  *(undefined *)(param_1 + 200) = 0;
  sub_08070284(param_1);
  return in_lr;
}

