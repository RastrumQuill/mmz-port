// sub_0806F374 at 0x0806F374 (thumb)

undefined4 sub_0806F374(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  sub_08001D30(&DAT_08c44b04,(DAT_0202e15a - 0x200) * 0x20 + 0x10000);
  sub_08002208(&DAT_08c44b10,(DAT_0202df5a - 4) * 0x20 + 0x200);
  sub_08001D30(&DAT_08c44b18,(DAT_0202e15c - 0x300) * 0x20 + 0x10000);
  sub_08002208(&DAT_08c44b24,(DAT_0202df5c - 6) * 0x20 + 0x200);
  sub_08001D30(&DAT_08c44b2c,(DAT_0202e15e - 0x3a0) * 0x20 + 0x10000);
  sub_08002208(&DAT_08c44b38,(DAT_0202df5e - 7) * 0x20 + 0x200);
  sub_0801CC9C(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_0801CF00(param_1,0x8d00);
  sub_0801CFF0(param_1);
  *(byte *)(param_1 + 0x45) = *(byte *)(param_1 + 0x45) & 0xf3 | 4;
  *(undefined *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  sub_08050408(param_1,&DAT_08859250,0x60);
  *(undefined4 *)(param_1 + 0x98) = 0x806ffe1;
  iVar1 = sub_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  *(int *)(param_1 + 0xc4) = iVar1;
  *(int *)(param_1 + 0x58) = iVar1 + -0x5400;
  *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0x58);
  *(undefined *)(param_1 + 0xcd) = 0;
  *(undefined *)(param_1 + 200) = 0;
  *(undefined *)(param_1 + 0xc9) = 0;
  *(undefined *)(param_1 + 0xca) = 0;
  *(undefined *)(param_1 + 0xcb) = 0;
  uVar2 = sub_080A77B8(param_1,0,0);
  *(undefined4 *)(param_1 + 0xbc) = uVar2;
  uVar2 = sub_080A77B8(param_1,0,1);
  *(undefined4 *)(param_1 + 0xc0) = uVar2;
  sub_080A84B0(param_1,*(undefined4 *)(param_1 + 0xbc),0);
  sub_080A84B0(param_1,*(undefined4 *)(param_1 + 0xc0),1);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_08854834 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  if (*(char *)(param_1 + 0x10) == '\0') {
    *(undefined *)(param_1 + 0xd) = 0;
  }
  else {
    *(undefined *)(param_1 + 0xd) = 1;
  }
  sub_0806F54C(param_1);
  return in_lr;
}

