// sub_08078ED4 at 0x08078ED4 (thumb)

undefined4 sub_08078ED4(int param_1,byte param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  undefined4 in_lr;
  
  uVar3 = *(uint *)(&DAT_08859d10 + (uint)param_2 * 4);
  if (param_2 == 1) {
    bVar1 = *(byte *)(param_1 + 10) & 0xfe;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 1;
  }
  *(byte *)(param_1 + 10) = bVar1;
  uVar2 = (uint)*(byte *)(param_1 + 0xc4);
  if ((uVar2 == 1) || (uVar2 == 0xff)) {
    sub_0801CF00(param_1,uVar3 & 0xffff);
  }
  else if ((uVar3 != 0x9c00) || (*(int *)(&DAT_08859d10 + uVar2 * 4) != 0x9c00)) {
    sub_0801CF00(param_1,uVar3 & 0xffff);
  }
  *(byte *)(param_1 + 0xc4) = param_2;
  return in_lr;
}

