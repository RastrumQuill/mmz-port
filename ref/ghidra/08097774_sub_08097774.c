// sub_08097774 at 0x08097774 (thumb)

undefined4 sub_08097774(int param_1,undefined param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  iVar1 = sub_08005458(DAT_0202300c);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 9) = 0x40;
    *(undefined4 *)(iVar1 + 0x14) = 0x80977d1;
    *(undefined2 *)(iVar1 + 0x1c) = DAT_02023090;
    *(undefined *)(iVar1 + 0x1e) = DAT_02023100;
    *(undefined *)(iVar1 + 0x10) = 3;
    *(undefined *)(iVar1 + 0x11) = param_2;
    *(int *)(iVar1 + 0x20) = param_1;
    uVar2 = *(undefined4 *)(param_1 + 0x50);
    *(undefined4 *)(iVar1 + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
    *(undefined4 *)(iVar1 + 0x50) = uVar2;
  }
  return in_lr;
}

