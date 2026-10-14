// sub_08096AB8 at 0x08096AB8 (thumb)

undefined4 sub_08096AB8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined param_4)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_08005458(DAT_0202300c);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 9) = 0x3c;
    *(undefined4 *)(iVar1 + 0x14) = 0x8096b15;
    *(undefined2 *)(iVar1 + 0x1c) = DAT_02023088;
    *(undefined *)(iVar1 + 0x1e) = DAT_020230fc;
    *(undefined *)(iVar1 + 0x10) = param_4;
    *(undefined *)(iVar1 + 0x11) = 0;
    *(undefined4 *)(iVar1 + 0x20) = param_1;
    *(undefined4 *)(iVar1 + 0x4c) = param_2;
    *(undefined4 *)(iVar1 + 0x50) = param_3;
  }
  return in_lr;
}

