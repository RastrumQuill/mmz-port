// sub_0801A788 at 0x0801A788 (thumb)

undefined4 sub_0801A788(int param_1,int param_2)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  uint local_1c;
  undefined4 local_18;
  
  uVar1 = (&DAT_02001290)[(param_2 >> 0xc) * (uint)DAT_02001290 + (param_1 >> 0xc) + 2];
  uVar2 = sub_08128A9C((uint)uVar1);
  iVar4 = (param_1 >> 0xc) - (uVar2 & 0xffff);
  iVar3 = FUN_081288bc(uVar1 - 0x618,3);
  iVar3 = (param_2 >> 0xc) - iVar3;
  local_1c = iVar4 - 0x2dU & 0xffff | iVar3 * 0x10000;
  local_18 = 0x30003;
  sub_0800736C(iVar4,iVar3,&local_1c);
  sub_08103240(0,iVar4 * 0x1000,iVar3 * 0x1000);
  return in_lr;
}

