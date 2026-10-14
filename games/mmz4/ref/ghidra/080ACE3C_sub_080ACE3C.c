// sub_080ACE3C at 0x080ACE3C (thumb)

undefined4 sub_080ACE3C(int param_1)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  int iVar4;
  undefined4 in_lr;
  undefined4 local_28 [4];
  
  local_28[0] = 0x9c04;
  local_28[1] = 0x9c08;
  local_28[2] = 0x9c0c;
  local_28[3] = 0x9c10;
  iVar4 = *(int *)(param_1 + 0x28);
  uVar3 = (uint)*(byte *)(param_1 + 0x11);
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_0801CF00(param_1,*(undefined2 *)(local_28 + uVar3));
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  pbVar2 = (byte *)(iVar4 + 0xbb);
  if (((int)(uint)*pbVar2 >> uVar3 & 1U) == 0) {
    *(byte *)(iVar4 + 0xb5) = *(byte *)(iVar4 + 0xb5) & ~(byte)(1 << uVar3);
  }
  else {
    bVar1 = (byte)(1 << uVar3);
    *(byte *)(iVar4 + 0xb5) = bVar1 | *(byte *)(iVar4 + 0xb5);
    *pbVar2 = *pbVar2 & ~bVar1;
    *(undefined *)(param_1 + 0xe) = 1;
    *(undefined *)(param_1 + 0xf) = 0;
    sub_08128884(param_1,*(undefined4 *)(&DAT_0885f834 + (uint)*(byte *)(param_1 + 0xd) * 4));
  }
  return in_lr;
}

