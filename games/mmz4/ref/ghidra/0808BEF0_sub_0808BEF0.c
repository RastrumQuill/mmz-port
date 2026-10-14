// sub_0808BEF0 at 0x0808BEF0 (thumb)

undefined4 sub_0808BEF0(int param_1)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 in_lr;
  undefined4 local_28 [4];
  
  local_28[0] = 0x2104;
  local_28[1] = 0x2105;
  local_28[2] = 0x2106;
  local_28[3] = 0x2107;
  iVar6 = *(int *)(param_1 + 0x28);
  bVar1 = *(byte *)(iVar6 + 10);
  if (*(byte *)(iVar6 + 0xc) < 2) {
    iVar5 = *(int *)(param_1 + 0xb4);
    if (0x4fe < (iVar5 - *(int *)(iVar6 + 0x54)) + 0x27fU) {
      if (*(int *)(iVar6 + 0x54) - iVar5 < 0) {
        bVar2 = *(char *)(param_1 + 0xb8) + 1;
      }
      else {
        bVar2 = *(char *)(param_1 + 0xb8) + 3;
      }
      pbVar3 = (byte *)(param_1 + 0xb8);
      *pbVar3 = bVar2;
      *pbVar3 = *pbVar3 & 3;
      sub_0801CF00(param_1,*(undefined2 *)(local_28 + *pbVar3));
      *(int *)(param_1 + 0xb4) = *(int *)(iVar6 + 0x54);
    }
    sub_0801CFF0(param_1);
    uVar4 = *(undefined4 *)(iVar6 + 0x58);
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar6 + 0x54);
    *(undefined4 *)(param_1 + 0x58) = uVar4;
    *(uint *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + (bVar1 >> 4 & 1) * 0x100;
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_0808BFB4(param_1);
  }
  return in_lr;
}

