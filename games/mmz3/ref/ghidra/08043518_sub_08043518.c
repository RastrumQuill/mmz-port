// sub_08043518 at 0x08043518 (thumb)

undefined4 sub_08043518(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  sub_0801749C();
  *(undefined *)(param_1 + 0x24) = 0;
  *(undefined2 *)(param_1 + 0x50) = 0x100;
  *(undefined2 *)(param_1 + 0x52) = 0x100;
  sub_080176EC(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe | 2;
  *(undefined *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  sub_0803D3D4(param_1,&DAT_0835eaf8,0x40);
  *(undefined *)(param_1 + 0xc9) = 0x40;
  *(undefined4 *)(param_1 + 0x98) = 0x80459fd;
  *(undefined *)(param_1 + 0xb4) = 0;
  *(undefined *)(param_1 + 0xb5) = 0xff;
  *(undefined *)(param_1 + 0xb6) = 0xff;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined *)(param_1 + 0xb7) = 0;
  uVar1 = sub_0800A1F4(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + -0x4000);
  *(undefined4 *)(param_1 + 0x58) = uVar1;
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_1 + 0x58);
  uVar1 = sub_0800A2CC(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  iVar2 = sub_0800A3C4(*(undefined4 *)(param_1 + 0x54),uVar1);
  iVar3 = sub_0800A4B4(*(undefined4 *)(param_1 + 0x54),uVar1);
  iVar4 = iVar3 + (iVar2 - iVar3 >> 1);
  uVar1 = sub_0800A2CC(iVar4,*(undefined4 *)(param_1 + 0x58));
  *(undefined4 *)(param_1 + 0xd4) = uVar1;
  uVar1 = sub_0800A1F4(iVar4,*(undefined4 *)(param_1 + 0x58));
  *(undefined4 *)(param_1 + 0xd8) = uVar1;
  *(int *)(param_1 + 0xdc) = iVar3;
  *(int *)(param_1 + 0xe0) = iVar2;
  *(undefined *)(param_1 + 0xca) = 0;
  if (*(char *)(param_1 + 0x10) == '\0') {
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0835e0e8 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0835e0e8 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
    *(undefined *)(param_1 + 0xd) = 3;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  *(undefined *)(param_1 + 0x11) = 0;
  sub_08043678(param_1);
  return in_lr;
}

