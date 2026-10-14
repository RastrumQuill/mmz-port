// sub_08040E18 at 0x08040E18 (thumb)

undefined4 sub_08040E18(int param_1)

{
  undefined uVar1;
  undefined2 uVar2;
  undefined2 *puVar3;
  byte bVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar5 = *(int *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088504bc)[*(byte *)(param_1 + 9)] + 4);
  bVar4 = *(byte *)(iVar5 + 0xc0);
  if (bVar4 < 3) {
    bVar4 = *(byte *)(iVar5 + 0xc1);
  }
  *(byte *)(iVar5 + 0x2c9) = bVar4;
  puVar3 = (undefined2 *)
           ((uint)*(byte *)(iVar5 + 0xc3) * 0xc +
           *(int *)(&DAT_08852460 + (uint)*(byte *)(iVar5 + 0x2c9) * 4));
  uVar2 = *puVar3;
  uVar1 = *(undefined *)((int)puVar3 + 3);
  *(undefined *)(param_1 + 0xbc) = *(undefined *)(puVar3 + 1);
  sub_0801CD28(param_1);
  sub_0801CEEC(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_0801CF00(param_1,uVar2);
  sub_0801CFF0(param_1);
  *(undefined *)(param_1 + 0x25) = uVar1;
  sub_08040D90(param_1);
  return in_lr;
}

