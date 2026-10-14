// sub_08092974 at 0x08092974 (thumb)

undefined8 sub_08092974(undefined param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_08005458(DAT_0202300c);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    *(undefined *)(iVar1 + 9) = 0x2a;
    *(undefined4 *)(iVar1 + 0x14) = 0x80929c9;
    *(undefined2 *)(iVar1 + 0x1c) = DAT_02023064;
    *(undefined *)(iVar1 + 0x1e) = DAT_020230ea;
    *(undefined *)(iVar1 + 0x10) = param_1;
    *(undefined *)(iVar1 + 0x11) = 0;
  }
  return CONCAT44(in_lr,iVar1);
}

