// sub_080EC544 at 0x080EC544 (thumb)

undefined4 sub_080EC544(int param_1)

{
  short *psVar1;
  int iVar2;
  undefined4 in_lr;
  
  *(undefined2 *)(param_1 + 4) = 1;
  iVar2 = *(int *)(param_1 + 0x75b8);
  psVar1 = (short *)(iVar2 + 0x24a + (uint)*(byte *)(param_1 + 0xddf) * 2);
  *psVar1 = *(short *)(param_1 + 0xde0) + *psVar1;
  *(short *)(iVar2 + 0x1fe) = *(short *)(iVar2 + 0x1fe) - *(short *)(param_1 + 0xde0);
  *(undefined *)(param_1 + 0xddc) = 0;
  sub_080EC59C();
  return in_lr;
}

