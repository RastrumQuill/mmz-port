// sub_0809E8A4 at 0x0809E8A4 (thumb)

undefined4 sub_0809E8A4(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x40);
  iVar1 = *(int *)(*(int *)(param_1 + 0x10) + 0x40);
  if ((*(ushort *)(undefined4 *)(iVar2 + 0x90) & 4) != 0) {
    *(undefined *)(iVar2 + 0xd) = 1;
    *(undefined *)(iVar2 + 0x12) = 0x3c;
    *(undefined *)(iVar2 + 0x13) = 0;
    *(uint *)(iVar2 + 0xc4) = (uint)(*(int *)(iVar2 + 0x4c) < *(int *)(iVar1 + 0x4c));
    *(undefined4 *)(iVar2 + 0x90) = 0;
    *(undefined *)(iVar2 + 0x94) = 0;
    *(byte *)(iVar2 + 10) = *(byte *)(iVar2 + 10) & 0xfb;
  }
  return in_lr;
}

