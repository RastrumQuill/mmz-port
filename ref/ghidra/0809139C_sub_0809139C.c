// sub_0809139C at 0x0809139C (thumb)

undefined4 sub_0809139C(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  iVar1 = sub_08005458(DAT_0202300c);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 9) = 0x25;
    *(undefined4 *)(iVar1 + 0x14) = 0x80913ed;
    *(undefined2 *)(iVar1 + 0x1c) = DAT_0202305a;
    *(undefined *)(iVar1 + 0x1e) = DAT_020230e5;
    uVar2 = param_1[1];
    *(undefined4 *)(iVar1 + 0x4c) = *param_1;
    *(undefined4 *)(iVar1 + 0x50) = uVar2;
  }
  return in_lr;
}

