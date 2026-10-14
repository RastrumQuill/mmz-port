// sub_080DBDEC at 0x080DBDEC (thumb)

undefined4 sub_080DBDEC(int param_1)

{
  undefined uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 in_lr;
  undefined auStack_1c [12];
  
  sub_080EF3F0(auStack_1c,&DAT_080ef800,10);
  uVar4 = (uint)*(byte *)(param_1 + 0x11);
  if (uVar4 == 10) {
    uVar4 = 9;
  }
  *(undefined *)(param_1 + 0x22) = auStack_1c[uVar4];
  sub_08012580(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  *(undefined *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  uVar2 = sub_080EF330(uVar4,5);
  iVar3 = ((uVar2 & 0xff) * 3 + 2) * 0x800;
  *(int *)(param_1 + 0x54) = iVar3;
  uVar1 = sub_080EF330(uVar4,10);
  uVar4 = sub_080EF2B8(uVar1,5);
  *(uint *)(param_1 + 0x58) = ((uVar4 & 0xff) * 3 + 3) * 0x800;
  if (*(int *)(param_1 + 0x28) != 0) {
    *(int *)(param_1 + 0x54) = iVar3 + 0x10000;
  }
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0834b8b4)[*(byte *)(param_1 + 9)] + 4);
  sub_080DBD90(param_1);
  return in_lr;
}

