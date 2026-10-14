// sub_08053AA4 at 0x08053AA4 (thumb)

undefined4 sub_08053AA4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_08854834 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(undefined *)(param_1 + 0xd) = 1;
  *(undefined *)(param_1 + 0xe) = 0;
  *(undefined *)(param_1 + 0xf) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  iVar1 = sub_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  *(int *)(param_1 + 0xbc) = iVar1 + -0x11fff;
  *(int *)(param_1 + 0x58) = iVar1 + -0xcfff;
  *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_1 + 0x54);
  *(undefined *)(param_1 + 0xb5) = 0;
  *(undefined *)(param_1 + 0xb7) = 0;
  *(int *)(param_1 + 0xb8) = *(int *)(param_1 + 0x58) + -0xc00;
  *(byte *)(param_1 + 0xb6) = *(byte *)(param_1 + 0xb6) | 3;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  sub_08001D30(&DAT_08c44370,(DAT_0202e098 - 0x200) * 0x20 + 0x10000);
  sub_08002208(&DAT_08c4437c,(DAT_0202de98 - 4) * 0x20 + 0x200);
  sub_08001D30(&DAT_08c44384,(DAT_0202e09a - 0x2d2) * 0x20 + 0x10000);
  sub_08002208(&DAT_08c44390,(DAT_0202de9a - 5) * 0x20 + 0x200);
  DAT_0202e0e2 = 0x363;
  DAT_0202dee2 = 6;
  sub_08001D30(&DAT_08c44654,0x106e0);
  sub_08002208(&DAT_08c44660,(DAT_0202dee2 - 5) * 0x20 + 0x200);
  sub_0801CC9C(param_1);
  *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) | 0xc;
  *(undefined *)(param_1 + 0x25) = 0x1b;
  *(undefined *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  sub_08050408(param_1,&DAT_08854e18,0x60);
  sub_0800D7F4(0);
  iVar1 = param_1 + 0x54;
  uVar2 = sub_0808D9AC(param_1,iVar1,0,0);
  *(undefined4 *)(param_1 + 0xc4) = uVar2;
  uVar2 = sub_0808D9AC(param_1,iVar1,0,1);
  *(undefined4 *)(param_1 + 200) = uVar2;
  sub_080DA25C(param_1,iVar1,0,0);
  sub_080DA25C(param_1,iVar1,0,1);
  sub_08053C90(param_1);
  return in_lr;
}

