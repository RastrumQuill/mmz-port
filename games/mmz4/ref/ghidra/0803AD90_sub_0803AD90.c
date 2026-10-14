// sub_0803AD90 at 0x0803AD90 (thumb)

undefined8 sub_0803AD90(int param_1,char param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_lr;
  int local_20;
  undefined4 local_1c;
  int local_18;
  int local_14;
  
  if (param_2 != '\0') {
    *(undefined4 *)(param_1 + 100) = 0;
    *(undefined4 *)(param_1 + 0x68) = 0;
  }
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    local_20 = *(int *)(param_1 + 0x54);
    iVar3 = -0x3000;
  }
  else {
    local_20 = *(int *)(param_1 + 0x54);
    iVar3 = 0x3000;
  }
  local_20 = local_20 + iVar3;
  local_1c = *(undefined4 *)(param_1 + 0x58);
  iVar3 = sub_0803A938(&local_20);
  if ((iVar3 == 0) ||
     (cVar1 = sub_08128888(iVar3,&local_18,
                           *(undefined4 *)(&DAT_0885026c + (uint)*(byte *)(iVar3 + 9) * 4)),
     cVar1 == '\0')) {
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      uVar2 = 0x80;
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = sub_0810CCF0(local_18 - *(int *)(param_1 + 0x54),local_14 - *(int *)(param_1 + 0x58));
    uVar2 = uVar2 & 0xff;
    if (param_2 != '\0') {
      *(int *)(param_1 + 100) = local_18;
      *(int *)(param_1 + 0x68) = local_14;
    }
  }
  return CONCAT44(in_lr,uVar2);
}

