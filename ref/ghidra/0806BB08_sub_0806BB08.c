// sub_0806BB08 at 0x0806BB08 (thumb)

undefined8 sub_0806BB08(undefined4 param_1,undefined param_2,undefined param_3,undefined param_4)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_08005458(DAT_02022e98);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    *(undefined *)(iVar1 + 9) = 0x31;
    *(undefined4 *)(iVar1 + 0x14) = 0x806bb71;
    *(undefined2 *)(iVar1 + 0x1c) = DAT_02022f02;
    *(undefined *)(iVar1 + 0x1e) = DAT_02022f61;
    *(undefined *)(iVar1 + 0x10) = param_2;
    *(undefined *)(iVar1 + 0x11) = param_3;
    *(undefined *)(iVar1 + 0xc0) = param_4;
    *(undefined4 *)(iVar1 + 0x20) = param_1;
  }
  return CONCAT44(in_lr,iVar1);
}

