// sub_080B6E74 at 0x080B6E74 (thumb)

undefined8 sub_080B6E74(undefined4 param_1,undefined param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_lr;
  
  uVar1 = sub_080B4F88();
  iVar2 = sub_08005458(DAT_0202320c);
  if (iVar2 != 0) {
    *(undefined *)(iVar2 + 9) = 6;
    *(undefined4 *)(iVar2 + 0x14) = 0x80b6b35;
    *(undefined2 *)(iVar2 + 0x1c) = 0xc0;
    *(undefined *)(iVar2 + 0x1e) = 3;
    *(undefined *)(iVar2 + 0x10) = param_2;
    *(undefined4 *)(iVar2 + 0x20) = param_1;
    *(undefined4 *)(iVar2 + 0x24) = uVar1;
    sub_080B4400(param_1,iVar2);
    DAT_02022878 = 1;
  }
  return CONCAT44(in_lr,iVar2);
}

