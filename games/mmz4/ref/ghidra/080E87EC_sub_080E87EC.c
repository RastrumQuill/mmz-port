// sub_080E87EC at 0x080E87EC (thumb)

undefined8 sub_080E87EC(undefined4 *param_1,uint param_2,undefined2 param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 in_lr;
  
  uVar3 = param_2 & 0xffff;
  iVar1 = sub_08005500(DAT_0202ed9c);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 0x25) = 1;
    *(undefined *)(iVar1 + 9) = 0x5c;
    *(undefined4 *)(iVar1 + 0x14) = 0x80e8881;
    *(undefined2 *)(iVar1 + 0x20) = 0;
    *(undefined *)(iVar1 + 0x22) = 0;
    uVar2 = param_1[1];
    *(undefined4 *)(iVar1 + 0x54) = *param_1;
    *(undefined4 *)(iVar1 + 0x58) = uVar2;
    *(char *)(iVar1 + 0x10) = (char)(param_2 >> 8);
    *(char *)(iVar1 + 0x11) = (char)uVar3;
    *(undefined2 *)(iVar1 + 0x74) = param_3;
    *(undefined4 **)(iVar1 + 0x28) = param_1;
    if ((uVar3 == 0x103) || (uVar3 == 0x200)) {
      *(undefined *)(iVar1 + 0x12) = 0x1e;
    }
    else {
      *(undefined *)(iVar1 + 0x12) = 0;
    }
    *(undefined *)(iVar1 + 0x7c) = 0;
  }
  return CONCAT44(in_lr,iVar1);
}

