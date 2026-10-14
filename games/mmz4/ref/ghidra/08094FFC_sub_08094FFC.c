// sub_08094FFC at 0x08094FFC (thumb)

undefined4 sub_08094FFC(int param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  undefined4 in_lr;
  undefined4 local_48 [4];
  byte abStack_38 [4];
  byte abStack_34 [4];
  undefined4 local_30 [4];
  
  local_48[0] = 0x4701;
  local_48[1] = 0x4701;
  local_48[2] = 0x4601;
  local_48[3] = 0x4601;
  sub_08128B5C(abStack_38,&DAT_081294e0,4);
  sub_08128B5C(abStack_34,&DAT_081294e4,4);
  local_30[0] = 0x1e;
  local_30[1] = 0x1e;
  local_30[2] = 0x18;
  local_30[3] = 0x18;
  iVar3 = *(int *)(param_1 + 0x28);
  bVar1 = *(byte *)(param_1 + 0x11);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  *(undefined *)(param_1 + 0xb4) = 0x40;
  *(undefined2 *)(param_1 + 0xb8) = 0x1000;
  *(undefined *)(param_1 + 0xb5) = 0;
  sub_0801CD28(param_1);
  uVar4 = (uint)abStack_38[bVar1];
  if ((*(byte *)(iVar3 + 10) & 0x10) != 0) {
    uVar4 = uVar4 + 1;
  }
  uVar4 = uVar4 & 1;
  if (uVar4 == 0) {
    bVar2 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar2;
  *(char *)(param_1 + 0x4c) = (char)uVar4;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar4 << 4);
  sub_0801CF00(param_1,*(undefined2 *)(local_48 + bVar1));
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_08005760(param_1 + 0x74,&UNK_0885d190 + (uint)abStack_34[bVar1] * 0x18,param_1 + 0x54,
               (int)*(short *)(local_30 + bVar1));
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  sub_08095144(param_1);
  return in_lr;
}

