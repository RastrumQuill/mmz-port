// sub_080251C0 at 0x080251C0 (thumb)

undefined4 sub_080251C0(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 in_lr;
  
  iVar1 = sub_0801E7B4(param_1,*(undefined4 *)(param_1 + 0x5c),0,0x10,
                       *(undefined2 *)(param_1 + 0xe4));
  *(int *)(param_1 + 0x5c) = iVar1;
  if (iVar1 != 0) {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar1;
    uVar2 = sub_0801F5F4(param_1 + 0x54,param_1 + 0xb4,(undefined4 *)(param_1 + 0xd8),
                         *(undefined4 *)(param_1 + 0xd8),*(undefined4 *)(param_1 + 0xdc),
                         *(byte *)(param_1 + 10) >> 4 & 1,iVar1,1,0,0,1);
    if ((uVar2 & 0x4f) != 0) {
      *(undefined4 *)(param_1 + 0x5c) = 0;
    }
  }
  sub_0801F57C(param_1 + 0x54,param_1 + 0xb4,(undefined4 *)(param_1 + 0xd8),
               *(undefined4 *)(param_1 + 0xd8),*(undefined4 *)(param_1 + 0xdc),
               *(byte *)(param_1 + 10) >> 4 & 1,0x800,0,0,1);
  return in_lr;
}

