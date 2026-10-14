// sub_08079CC8 at 0x08079CC8 (thumb)

undefined4 sub_08079CC8(undefined4 *param_1,undefined param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  iVar1 = sub_08005458(DAT_02022f74);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 9) = 0xd;
    *(undefined4 *)(iVar1 + 0x14) = 0x8079d1d;
    *(undefined2 *)(iVar1 + 0x1c) = DAT_02022f9a;
    *(undefined *)(iVar1 + 0x1e) = DAT_02022fed;
    *(undefined *)(iVar1 + 0x10) = param_2;
    *(undefined *)(iVar1 + 0x11) = 0;
    uVar2 = param_1[1];
    *(undefined4 *)(iVar1 + 0x4c) = *param_1;
    *(undefined4 *)(iVar1 + 0x50) = uVar2;
  }
  return in_lr;
}

