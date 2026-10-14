// sub_080C1324 at 0x080C1324 (thumb)

undefined4 sub_080C1324(int param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 in_lr;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  local_38 = 0x900a;
  uStack_34 = 0x9006;
  uStack_30 = 0x9009;
  local_2c = 0x9007;
  uStack_28 = 0x9008;
  uStack_24 = 0x9008;
  local_20 = 0x9007;
  uStack_1c = 0x9009;
  bVar2 = *(byte *)(param_1 + 10) >> 4;
  if (*(char *)(param_1 + 0xf) == '\0') {
    *(undefined4 *)(param_1 + 0x60) = 0x100;
    *(undefined *)(param_1 + 0x12) = 0;
    *(byte *)(param_1 + 0x13) = bVar2 & 1;
    *(undefined *)(param_1 + 0xf) = 1;
  }
  uVar6 = (uint)*(byte *)(param_1 + 0x13);
  if (*(char *)(param_1 + 0x12) == '\0') {
    uVar6 = uVar6 + 1 & 1;
    *(char *)(param_1 + 0x13) = (char)uVar6;
    *(uint *)(param_1 + 100) = *(int *)(param_1 + 0x54) + (uVar6 * 2 + -1) * 0x2000;
    *(undefined *)(param_1 + 0x12) = 0x18;
  }
  *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
  bVar1 = *(byte *)(param_1 + 0x12);
  iVar3 = FUN_081288bc((uint)bVar1 << 6,0x18);
  iVar3 = (uint)bVar1 * (int)*(short *)((int)&DAT_08128c10 + ((uint)(iVar3 << 0x18) >> 0x17));
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0xff;
  }
  uVar5 = iVar3 >> 8 & 0xff;
  uVar4 = FUN_081288bc(uVar5,6);
  sub_0801CF00(param_1,*(undefined2 *)
                        ((int)&local_38 +
                        (uVar6 + (bVar2 & 1) & 1) * 4 + ((3 - (uVar4 & 0xff)) * 0x1000000 >> 0x15)))
  ;
  sub_0801CFF0(param_1);
  sub_08005784(param_1 + 0x74,&DAT_08861d48);
  iVar3 = FUN_081288bc(uVar5 << 6,0x18);
  *(uint *)(param_1 + 0x54) =
       *(int *)(param_1 + 100) +
       (uVar6 * 2 + -1) *
       *(short *)((int)&DAT_08128c10 + ((uint)((0x80 - iVar3) * 0x1000000) >> 0x17)) * -0x20;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  return in_lr;
}

