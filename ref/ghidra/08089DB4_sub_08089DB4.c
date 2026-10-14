// sub_08089DB4 at 0x08089DB4 (thumb)

undefined8 sub_08089DB4(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 in_lr;
  
  if (param_2 == 0) {
    iVar1 = sub_08005458(DAT_0202300c);
  }
  else {
    iVar1 = sub_080054C0(param_2);
  }
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 9) = 6;
    *(undefined4 *)(iVar1 + 0x14) = 0x8089b99;
    *(undefined2 *)(iVar1 + 0x1c) = DAT_0202301c;
    *(undefined *)(iVar1 + 0x1e) = DAT_020230c6;
    *(undefined4 *)(iVar1 + 0x20) = param_1;
    *(int *)(iVar1 + 0x24) = param_2;
    *(bool *)(iVar1 + 0x10) = param_2 != 0;
  }
  return CONCAT44(in_lr,iVar1);
}

