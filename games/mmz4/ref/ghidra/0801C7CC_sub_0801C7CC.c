// sub_0801C7CC at 0x0801C7CC (thumb)

undefined4 sub_0801C7CC(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  sub_080054B4();
  while( true ) {
    iVar1 = *(int *)(*(int *)(param_1 + 0xc) + 4);
    *(int *)(param_1 + 0xc) = iVar1;
    if (iVar1 == param_1 + 0x14) break;
    sub_08128884(iVar1,*(undefined4 *)(iVar1 + 0x14));
    if ((*(byte *)(iVar1 + 0xb) & 8) != 0) {
      sub_08008D04(*(undefined *)(iVar1 + 0x1c),*(undefined2 *)(iVar1 + 0x26),iVar1 + 0x54,
                   *(undefined4 *)(iVar1 + 0x30));
    }
  }
  return in_lr;
}

