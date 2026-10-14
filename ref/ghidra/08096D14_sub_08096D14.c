// sub_08096D14 at 0x08096D14 (thumb)

undefined4 sub_08096D14(int param_1,undefined param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  iVar1 = sub_08005458(DAT_0202300c);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 9) = 0x3d;
    *(undefined4 *)(iVar1 + 0x14) = 0x8096e85;
    *(undefined2 *)(iVar1 + 0x1c) = DAT_0202308a;
    *(undefined *)(iVar1 + 0x1e) = DAT_020230fd;
    *(undefined *)(iVar1 + 0x10) = param_2;
    *(undefined *)(iVar1 + 0x11) = 0;
    *(int *)(iVar1 + 0x20) = param_1;
    uVar2 = *(undefined4 *)(param_1 + 0x50);
    *(undefined4 *)(iVar1 + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
    *(undefined4 *)(iVar1 + 0x50) = uVar2;
  }
  return in_lr;
}

