// sub_08036A64 at 0x08036A64 (thumb)

undefined4 sub_08036A64(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_082acbf8 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(undefined *)(param_1 + 0xd) = 5;
  *(undefined2 *)(param_1 + 0xe) = 0;
  *(undefined *)(param_1 + 0x10) = 0;
  sub_08029654(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  uVar5 = *(undefined4 *)(param_1 + 0x4c);
  uVar1 = sub_08008360(uVar5,*(undefined4 *)(param_1 + 0x50));
  if (DAT_02022b60 == 0x10) {
    *(undefined4 *)(param_1 + 0x50) = uVar1;
  }
  iVar2 = sub_080C8AD0(uVar5,0xf000);
  iVar2 = iVar2 * 0xf000;
  iVar3 = sub_08008120(iVar2,uVar1);
  if (iVar3 < 1) {
    iVar3 = 0x800;
  }
  iVar4 = sub_08007EE0(iVar2 + 0xefff,uVar1);
  if (iVar4 < 0) {
    iVar4 = iVar2 + 0xefff + iVar4;
  }
  else {
    iVar4 = iVar2 + 0xe7ff;
  }
  iVar2 = iVar2 + iVar3 + 0x800;
  *(int *)(param_1 + 0xd8) = iVar2;
  *(int *)(param_1 + 0xdc) = iVar4 + -0x800;
  iVar3 = (iVar4 + -0x800) - iVar2;
  *(int *)(param_1 + 0xe0) = iVar3;
  *(int *)(param_1 + 0xe4) = iVar2 + iVar3 / 2;
  *(undefined4 *)(param_1 + 200) = 0;
  sub_080014E8(&DAT_084e01b8,(DAT_02022fac - 0x208) * 0x20 + 0x10000);
  sub_0800179C(&DAT_084e01c4,(DAT_02022ff6 - 6) * 0x20 + 0x200);
  sub_080014E8(&DAT_08500424,(DAT_0202307a - 0x310) * 0x20 + 0x10000);
  sub_0800179C(&DAT_08500430,(DAT_020230f5 - 7) * 0x20 + 0x200);
  if (DAT_02022b60 == 0x10) {
    sub_08029874(param_1,&DAT_082ad7fc,0x60);
  }
  else {
    sub_08029874(param_1,&DAT_082ad7fc,0x60);
  }
  *(undefined4 *)(param_1 + 0xb0) = 0x8036c01;
  *(undefined4 *)(param_1 + 0xd4) = 0;
  *(undefined *)(param_1 + 0x10) = 0;
  sub_08036C38(param_1);
  return in_lr;
}

