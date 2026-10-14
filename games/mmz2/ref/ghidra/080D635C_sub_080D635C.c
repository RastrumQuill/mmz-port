// sub_080D635C at 0x080D635C (thumb)

int sub_080D635C(int param_1,int param_2,undefined4 param_3,int *param_4,int param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  int iVar4;
  
  if ((param_2 == 0) || (1 < *(byte *)(param_2 + 0xc))) {
    iVar1 = 0;
LAB_080d63a6:
    if (iVar1 != 0) goto LAB_080d63f4;
  }
  else if ((byte)(*(char *)(param_2 + 8) - 2U) < 2) {
    puVar3 = &DAT_0834b034;
    if (*(char *)(param_2 + 8) == '\x02') {
      puVar3 = &DAT_0834b1b4;
    }
    iVar1 = sub_080D643C(param_2,param_4,puVar3,param_5);
    if (param_5 == 1) {
      return iVar1;
    }
    goto LAB_080d63a6;
  }
  if (*(char *)(param_1 + 9) != '\0') {
    iVar4 = *(int *)(param_1 + 0x2c);
    iVar1 = *(int *)(iVar4 + 0xbc);
    *param_4 = *(int *)(iVar4 + 0xb8);
    param_4[1] = iVar1;
    return *(int *)(iVar4 + 0xb4);
  }
  uVar2 = sub_080D51E4(param_3);
  iVar1 = sub_080D643C(uVar2,param_4,&DAT_0834b1b4,param_5);
  if (iVar1 == 0) {
    uVar2 = sub_080D51C8(param_3);
    iVar1 = sub_080D643C(uVar2,param_4,&DAT_0834b034,param_5);
    if (iVar1 == 0) {
      return 0;
    }
  }
LAB_080d63f4:
  if ((0x14000 < (param_4[1] - DAT_0202ed54) + 0xa000U) ||
     (0x19000 < (*param_4 - DAT_0202ed50) + 0xc800U)) {
    iVar1 = 0;
  }
  return iVar1;
}

