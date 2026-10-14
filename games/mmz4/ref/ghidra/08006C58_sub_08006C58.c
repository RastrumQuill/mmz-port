// sub_08006C58 at 0x08006C58 (thumb)

undefined4 sub_08006C58(int *param_1)

{
  uint *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  int local_1c;
  int local_18;
  
  if (DAT_02000c80 == 4) {
    local_1c = sub_08128954(*param_1 + -0xf000,0x3c000);
    DAT_02000c78 = local_1c + 0xf000;
    DAT_02000c7c = param_1[1];
    local_1c = local_1c + 0x7800;
  }
  else {
    DAT_02000c78 = *param_1;
    DAT_02000c7c = param_1[1];
    local_1c = ((DAT_02000c78 >> 8) + -0x78) * 0x100;
  }
  local_18 = ((DAT_02000c7c >> 8) + -0x50) * 0x100;
  puVar1 = (uint *)sub_08007830(&local_1c);
  if ((uint)DAT_02000c80 != *puVar1) {
    DAT_02000c80 = (ushort)*puVar1;
    sub_08128884(&local_1c,*(undefined4 *)puVar1[1]);
  }
  sub_08128884(&local_1c,*(undefined4 *)(puVar1[1] + 4));
  iVar4 = 0;
  iVar3 = 2;
  do {
    piVar2 = (int *)((int)&DAT_02000ad0 + iVar4);
    sub_08007A34(piVar2,puVar1,&local_1c);
    if (*piVar2 != 0) {
      sub_08128888(piVar2,puVar1);
    }
    iVar4 = iVar4 + 0x88;
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  return in_lr;
}

