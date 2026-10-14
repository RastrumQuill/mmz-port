// sub_080B52CC at 0x080B52CC (thumb)

undefined8 sub_080B52CC(int param_1,int param_2,undefined4 param_3,int *param_4,undefined param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  int iVar4;
  undefined4 in_lr;
  
  if ((param_2 == 0) || (1 < *(byte *)(param_2 + 0xc))) {
    iVar1 = 0;
LAB_080b5316:
    if (iVar1 == 0) goto LAB_080b531a;
  }
  else {
    if ((byte)(*(char *)(param_2 + 8) - 2U) < 2) {
      puVar3 = &DAT_082b7f04;
      if (*(char *)(param_2 + 8) == '\x02') {
        puVar3 = &DAT_082b80d4;
      }
      iVar1 = sub_080B53AC(param_2,param_4,puVar3,param_5);
      goto LAB_080b5316;
    }
LAB_080b531a:
    if (*(char *)(param_1 + 9) != '\0') {
      iVar4 = *(int *)(param_1 + 0x24);
      iVar1 = *(int *)(iVar4 + 0xc4);
      *param_4 = *(int *)(iVar4 + 0xc0);
      param_4[1] = iVar1;
      iVar1 = *(int *)(iVar4 + 0xbc);
      goto LAB_080b53a2;
    }
    uVar2 = sub_080B3F78(param_3);
    iVar1 = sub_080B53AC(uVar2,param_4,&DAT_082b80d4,param_5);
    if (iVar1 == 0) {
      uVar2 = sub_080B3F5C(param_3);
      iVar1 = sub_080B53AC(uVar2,param_4,&DAT_082b7f04,param_5);
      if (iVar1 == 0) goto LAB_080b53a2;
    }
  }
  if ((0x14000 < (param_4[1] - DAT_02022c80) + 0xa000U) ||
     (0x19000 < (*param_4 - DAT_02022c7c) + 0xc800U)) {
    iVar1 = 0;
  }
LAB_080b53a2:
  return CONCAT44(in_lr,iVar1);
}

