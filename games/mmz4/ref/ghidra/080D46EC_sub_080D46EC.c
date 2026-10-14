// sub_080D46EC at 0x080D46EC (thumb)

undefined8 sub_080D46EC(uint param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_08005500(DAT_0202ed9c);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 0x25) = 1;
    *(undefined *)(iVar1 + 9) = 0xf;
    *(undefined4 *)(iVar1 + 0x14) = 0x80d47f5;
    *(undefined2 *)(iVar1 + 0x20) = 0;
    *(undefined *)(iVar1 + 0x22) = 0;
    *(undefined4 *)(iVar1 + 0x54) = *param_2;
    *(undefined4 *)(iVar1 + 0x58) = param_2[1];
    *(undefined *)(iVar1 + 0x10) = 0;
    sub_0801CC9C(iVar1);
    sub_0801CF00(iVar1,*(undefined2 *)(&DAT_0886492c + (param_1 & 0xff) * 2));
  }
  return CONCAT44(in_lr,iVar1);
}

