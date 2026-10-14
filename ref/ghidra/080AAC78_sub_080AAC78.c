// sub_080AAC78 at 0x080AAC78 (thumb)

undefined4 sub_080AAC78(int param_1,undefined param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  iVar1 = sub_08005458(DAT_02023118);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 9) = 0x2a;
    *(undefined4 *)(iVar1 + 0x14) = 0x80aacd5;
    *(undefined2 *)(iVar1 + 0x1c) = DAT_020231c4;
    *(undefined *)(iVar1 + 0x1e) = DAT_0202314a;
    *(undefined *)(iVar1 + 0x10) = param_2;
    *(undefined *)(iVar1 + 0x11) = 0;
    *(int *)(iVar1 + 0x20) = param_1;
    uVar2 = *(undefined4 *)(param_1 + 0x50);
    *(undefined4 *)(iVar1 + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
    *(undefined4 *)(iVar1 + 0x50) = uVar2;
  }
  return in_lr;
}

