// sub_0800BF90 at 0x0800BF90 (thumb)

undefined4 sub_0800BF90(int param_1)

{
  int iVar1;
  ushort uVar2;
  uint uVar4;
  ushort *puVar5;
  undefined4 in_lr;
  ushort uVar3;
  
  uVar4 = *(int *)(param_1 + 0x5c) << 0x10;
  if (*(char *)(param_1 + 0xe) == '\0') {
    DAT_0202dadc._2_1_ = *(char *)(param_1 + 0xe);
    *(undefined *)(param_1 + 0xe) = 1;
  }
  iVar1 = *(int *)(param_1 + 0x34);
  if (iVar1 - 0x871U < 0xef) {
    puVar5 = &DAT_02000a04 + (uVar4 >> 0x14);
    uVar3 = *puVar5;
    uVar2 = 1;
  }
  else {
    puVar5 = &DAT_02000a04 + (uVar4 >> 0x14);
    uVar3 = *puVar5;
    uVar2 = 2;
  }
  *puVar5 = uVar3 & 0xfffc | uVar2;
  if ((iVar1 - 0x861U < 0x3f) && (*(int *)(param_1 + 0x38) < 400)) {
    DAT_0202dadc._2_1_ = '\x01';
  }
  return in_lr;
}

