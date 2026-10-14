// sub_080B1BA0 at 0x080B1BA0 (thumb)

undefined4 sub_080B1BA0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  sub_0809C6C4();
  *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) | 0xc;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  iVar1 = *(int *)(param_1 + 0x4c) + 0x800;
  *(int *)(param_1 + 0x4c) = iVar1;
  uVar2 = sub_08008360(iVar1,*(undefined4 *)(param_1 + 0x50));
  *(undefined4 *)(param_1 + 0x50) = uVar2;
  sub_080014E8(&DAT_08510500,(DAT_020231f0 - 0x3c0) * 0x20 + 0x10000);
  sub_0800179C(&DAT_0851050c,(DAT_02023160 - 9) * 0x20 + 0x200);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_082b5184 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  if (*(char *)(param_1 + 0x11) == '\0') {
    *(undefined *)(param_1 + 0xd) = 0;
  }
  else {
    *(undefined *)(param_1 + 0xd) = 3;
  }
  *(undefined *)(param_1 + 0xe) = 0;
  sub_080B1C44(param_1);
  return in_lr;
}

