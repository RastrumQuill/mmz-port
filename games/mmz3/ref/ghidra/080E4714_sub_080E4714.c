// sub_080E4714 at 0x080E4714 (thumb)

undefined8 sub_080E4714(int param_1,undefined param_2,undefined param_3,uint param_4)

{
  undefined uVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = sub_0800710C(DAT_02030638);
  if (iVar2 != 0) {
    *(undefined *)(iVar2 + 0x25) = 0x10;
    *(undefined *)(iVar2 + 9) = 10;
    *(undefined4 *)(iVar2 + 0x14) = 0x80e4785;
    *(undefined2 *)(iVar2 + 0x20) = 0;
    *(undefined *)(iVar2 + 0x22) = 0;
    *(int *)(iVar2 + 0xb4) = param_1;
    *(undefined *)(iVar2 + 0x10) = param_2;
    *(undefined *)(iVar2 + 0x11) = param_3;
    *(uint *)(iVar2 + 100) = param_4 & 0xff;
    if ((param_4 & 0xff) == 0) {
      uVar1 = *(undefined *)(param_1 + 0xb4);
    }
    else {
      uVar1 = *(undefined *)(param_1 + 0xb5);
    }
    *(undefined *)(iVar2 + 0x13) = uVar1;
  }
  return CONCAT44(in_lr,iVar2);
}

