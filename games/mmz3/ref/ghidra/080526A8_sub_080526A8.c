// sub_080526A8 at 0x080526A8 (thumb)

undefined4 sub_080526A8(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  sub_0801749C();
  sub_080176EC(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe | 2;
  *(undefined *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  sub_0803D3D4(param_1,&DAT_083601a0,0x40);
  *(undefined4 *)(param_1 + 0x98) = 0x805456d;
  *(undefined *)(param_1 + 0xb4) = 0;
  *(undefined *)(param_1 + 0xb5) = 0xff;
  *(undefined *)(param_1 + 0xb6) = 0xff;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined *)(param_1 + 0xb7) = 0;
  *(undefined *)(param_1 + 200) = 0;
  *(undefined4 *)(param_1 + 0xcc) = 0;
  iVar1 = sub_0800A104(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + -0x4000);
  *(int *)(param_1 + 0x58) = iVar1;
  *(int *)(param_1 + 0xb8) = iVar1 + -0x7c00;
  iVar2 = sub_0800A3C4(*(undefined4 *)(param_1 + 0x54),iVar1 + -0x7400);
  iVar1 = sub_0800A4B4(*(undefined4 *)(param_1 + 0x54),iVar1 + -0x7400);
  *(int *)(param_1 + 0xbc) = iVar1;
  iVar2 = FUN_080fe2f8(iVar2 - iVar1,3);
  iVar1 = iVar1 + (iVar2 >> 1);
  *(int *)(param_1 + 0xd4) = iVar1;
  *(int *)(param_1 + 0xd8) = iVar1 + iVar2;
  *(int *)(param_1 + 0xdc) = iVar1 + iVar2 * 2;
  *(int *)(param_1 + 0xe0) = iVar2;
  *(undefined *)(param_1 + 0xca) = 0;
  if (*(char *)(param_1 + 0x10) == '\0') {
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0835e0e8 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
    *(undefined *)(param_1 + 0xd) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0835e0e8 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
    *(undefined *)(param_1 + 0xd) = 3;
  }
  *(undefined *)(param_1 + 0xe) = 0;
  *(undefined *)(param_1 + 0xf) = 0;
  *(undefined *)(param_1 + 0x11) = 0;
  sub_080527E0(param_1);
  return in_lr;
}

