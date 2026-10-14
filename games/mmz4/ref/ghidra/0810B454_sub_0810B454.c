// sub_0810B454 at 0x0810B454 (thumb)

undefined4 sub_0810B454(int param_1)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *(int *)(*(int *)(param_1 + 0x28) + 0x63a8);
  uVar3 = *(byte *)(param_1 + 0x11) & 0xf;
  bVar1 = *(byte *)(param_1 + 0x11) >> 4;
  if (bVar1 == 0) {
    pbVar2 = (byte *)(iVar4 + 0xf1);
  }
  else if (bVar1 == 1) {
    pbVar2 = (byte *)(iVar4 + 0xf2);
  }
  else {
    pbVar2 = (byte *)(iVar4 + 0xf3);
  }
  if (uVar3 < *pbVar2) {
    sub_0801CF00(param_1,uVar3 | 0x4200);
  }
  else {
    sub_0801CF00(param_1,0x4209);
  }
  sub_0801CFF0(param_1);
  return in_lr;
}

