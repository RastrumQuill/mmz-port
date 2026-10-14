// sub_080ACC40 at 0x080ACC40 (thumb)

undefined4 sub_080ACC40(int param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  undefined4 in_lr;
  undefined4 local_20 [4];
  
  local_20[0] = 0x9c04;
  local_20[1] = 0x9c08;
  local_20[2] = 0x9c0c;
  local_20[3] = 0x9c10;
  iVar3 = *(int *)(param_1 + 0x28);
  bVar1 = *(byte *)(param_1 + 0x11);
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_0801CF00(param_1,*(undefined2 *)(local_20 + bVar1));
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  pbVar2 = (byte *)(iVar3 + 0xb5);
  *pbVar2 = *pbVar2 & ~(byte)(1 << (uint)bVar1);
  return in_lr;
}

