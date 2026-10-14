// sub_08089334 at 0x08089334 (thumb)

undefined4 sub_08089334(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = 0;
  do {
    iVar1 = sub_08005458(DAT_0202300c);
    if (iVar1 != 0) {
      *(undefined *)(iVar1 + 9) = 3;
      *(undefined4 *)(iVar1 + 0x14) = 0x8089391;
      *(undefined2 *)(iVar1 + 0x1c) = DAT_02023016;
      *(undefined *)(iVar1 + 0x1e) = DAT_020230c3;
      *(undefined *)(iVar1 + 0x10) = 0;
      *(char *)(iVar1 + 0x11) = (char)iVar2;
      *(undefined4 *)(iVar1 + 0x20) = param_1;
      *(undefined4 *)(iVar1 + 0x4c) = *param_2;
      *(undefined4 *)(iVar1 + 0x50) = param_2[1];
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 3);
  return in_lr;
}

