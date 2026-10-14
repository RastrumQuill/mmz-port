// sub_0802306C at 0x0802306C (thumb)

ulonglong sub_0802306C(int param_1,int param_2)

{
  ushort uVar1;
  ushort *puVar2;
  uint uVar3;
  undefined4 in_lr;
  
  puVar2 = (ushort *)sub_08022A54();
  uVar1 = *puVar2;
  uVar3 = (uint)uVar1 + param_2;
  if (*(ushort *)(&DAT_08333b34 + (uint)*(byte *)(param_1 + 9) * 2) < uVar3) {
    uVar3 = (uint)*(ushort *)(&DAT_08333b34 + (uint)*(byte *)(param_1 + 9) * 2);
  }
  *puVar2 = (ushort)uVar3;
  return CONCAT44(in_lr,uVar3 - uVar1) & 0xffffffff0000ffff;
}

