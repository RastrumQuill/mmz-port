// sub_0801CAC0 at 0x0801CAC0 (thumb)

undefined4 sub_0801CAC0(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = -((int)-(*(byte *)(param_1 + 2) & 0x80) >> 0x1f);
  sub_0801CAF0(param_1,iVar1);
  sub_0801CB00(param_1,iVar1);
  sub_0801CB10(param_1,iVar1);
  return in_lr;
}

