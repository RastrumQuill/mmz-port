// sub_08094064 at 0x08094064 (thumb)

undefined4 sub_08094064(undefined4 *param_1,char param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  iVar1 = sub_08005458(DAT_0202300c);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 9) = 0x2e;
    *(undefined4 *)(iVar1 + 0x14) = 0x80940cd;
    *(undefined2 *)(iVar1 + 0x1c) = DAT_0202306c;
    *(undefined *)(iVar1 + 0x1e) = DAT_020230ee;
    *(undefined *)(iVar1 + 0x10) = 0;
    *(undefined *)(iVar1 + 0x11) = 0;
    uVar2 = param_1[1];
    *(undefined4 *)(iVar1 + 0x4c) = *param_1;
    *(undefined4 *)(iVar1 + 0x50) = uVar2;
    if (param_2 != '\0') {
      *(int *)(iVar1 + 0x50) = *(int *)(iVar1 + 0x50) + 0x900;
    }
  }
  return in_lr;
}

