// sub_080BB05C at 0x080BB05C (thumb)

undefined4 sub_080BB05C(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  byte abStack_34 [4];
  undefined4 *local_30 [3];
  int local_24;
  
  local_30[0] = &local_64;
  local_64 = 0xfffffe00;
  uStack_60 = 0xfffffb12;
  uStack_5c = 0xffffff5d;
  local_58 = 0xfffffb12;
  uStack_54 = 0xa3;
  uStack_50 = 0xfffffb12;
  local_4c = 0x200;
  uStack_48 = 0xfffffb12;
  local_30[1] = &local_44;
  local_44 = 0xfffffeb9;
  uStack_40 = 0xfffffb12;
  uStack_3c = 0x147;
  local_38 = 0xfffffb12;
  sub_08128B5C(abStack_34,&DAT_08129944,2);
  uVar2 = *(undefined4 *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_08005784(param_1 + 0x74,&DAT_088610a8);
    *(undefined4 *)(param_1 + 0x68) = 0;
    *(undefined *)(param_1 + 0x13) = 1;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  if (*(char *)(param_1 + 0x13) != '\0') {
    sub_08002B10(0x198);
    sub_0801CF00(param_1,0xb902);
    local_30[2] = (undefined4 *)*(undefined4 *)(param_1 + 0x54);
    local_24 = *(int *)(param_1 + 0x58) + -0x4200;
    iVar3 = *(int *)(param_1 + 0x68);
    for (iVar4 = 0; iVar4 < (int)(uint)abStack_34[iVar3]; iVar4 = iVar4 + 1) {
      sub_080CFD78(uVar2,local_30 + 2,local_30[iVar3] + iVar4 * 2);
      iVar3 = *(int *)(param_1 + 0x68);
    }
    *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 1;
    *(undefined *)(param_1 + 0x13) = 0;
    *(undefined *)(param_1 + 0x12) = 0x14;
  }
  sub_0801CFF0(param_1);
  if ((*(char *)(param_1 + 0x73) == '\x03') &&
     ((*(char *)(param_1 + 0x12) == '\0' ||
      (cVar1 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar1, cVar1 == '\0'))))
  {
    if (*(int *)(param_1 + 0x68) < 2) {
      *(undefined *)(param_1 + 0x13) = 1;
    }
    else {
      *(undefined *)(param_1 + 0xd) = 5;
      *(undefined *)(param_1 + 0xe) = 0;
      *(undefined *)(param_1 + 0xf) = 0;
    }
  }
  return in_lr;
}

