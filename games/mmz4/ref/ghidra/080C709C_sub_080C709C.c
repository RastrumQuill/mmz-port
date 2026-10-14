// sub_080C709C at 0x080C709C (thumb)

undefined4 sub_080C709C(int param_1)

{
  char cVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined uVar6;
  undefined4 in_lr;
  int local_48;
  int local_44;
  undefined4 local_40;
  undefined4 local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  
  uVar4 = *(undefined4 *)(param_1 + 0x28);
  uVar6 = 0;
  iVar5 = 0;
  local_30 = *(int *)(param_1 + 0x54);
  local_2c = *(int *)(param_1 + 0x58);
  sub_0801CFF0(param_1);
  local_48 = 0;
  local_44 = 0;
  local_40 = 0x800;
  local_3c = 0x800;
  local_28 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  local_24 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  local_38 = *(int *)(param_1 + 0x54);
  local_34 = *(undefined4 *)(param_1 + 0x58);
  iVar3 = sub_08066400(uVar4,&local_38,&local_48,&local_40);
  if ((iVar3 != 0) && (uVar6 = 1, *(char *)(param_1 + 0xb5) == '\0')) {
    iVar5 = 1;
  }
  local_38 = local_28;
  local_34 = local_24;
  iVar3 = sub_08066400(uVar4,&local_38,&local_48,&local_40);
  if ((iVar3 != 0) && (uVar6 = 1, *(char *)(param_1 + 0xb5) == '\0')) {
    iVar5 = 1;
  }
  local_38 = local_28;
  local_34 = local_2c;
  sVar2 = sub_08007C7C(local_28 + local_48,local_2c + local_44);
  if (sVar2 != 0) {
    iVar5 = 1;
  }
  local_38 = local_30;
  local_34 = local_24;
  sVar2 = sub_08007C7C(local_30 + local_48,local_24 + local_44);
  if ((iVar5 == 0) && ((sVar2 != 0) == 0)) {
    *(int *)(param_1 + 0x54) = local_28;
    *(int *)(param_1 + 0x58) = local_24;
  }
  else {
    cVar1 = *(char *)(param_1 + 0xb4) + -1;
    *(char *)(param_1 + 0xb4) = cVar1;
    if (cVar1 == '\0') {
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088614b8)[*(byte *)(param_1 + 9)] + 8)
      ;
      sub_080C7264(param_1);
      return in_lr;
    }
    sub_08002B10(0x10d);
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) * (iVar5 * -2 + 1);
    *(uint *)(param_1 + 0x60) = ((uint)(sVar2 != 0) * -2 + 1) * *(int *)(param_1 + 0x60);
  }
  *(undefined *)(param_1 + 0xb5) = uVar6;
  return in_lr;
}

