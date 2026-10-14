// sub_0803A688 at 0x0803A688 (thumb)

undefined4 sub_0803A688(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0x28);
  if (((*(char *)(iVar1 + 0xd) != '\x01') || (*(short *)(iVar1 + 0x176) != 0x103)) ||
     (*(short *)(iVar1 + 0x178) != 0x301)) {
    *(undefined *)(param_1 + 0xd) = 3;
    sub_0803A9C0(param_1,10,0,0);
  }
  return in_lr;
}

