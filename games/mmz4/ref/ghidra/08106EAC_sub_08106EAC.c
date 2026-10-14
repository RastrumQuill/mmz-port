// sub_08106EAC at 0x08106EAC (thumb)

undefined4 sub_08106EAC(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xd)) {
  case 0:
    DAT_0202e3d8 = 0x300;
    DAT_0202ddd8 = 6;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 1:
    iVar1 = sub_0810530C(param_1,0xcc01,1);
    break;
  case 2:
    sub_0801CFF0(param_1);
    uVar2 = *(byte *)(*(int *)(param_1 + 0x18) + 9) & 1;
    goto LAB_08106f28;
  case 3:
    iVar1 = sub_081051A0(param_1,0xcc01,1);
    break;
  default:
    goto switchD_08106ebe_caseD_4;
  }
  uVar2 = iVar1 << 0x10;
LAB_08106f28:
  if (uVar2 != 0) {
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
switchD_08106ebe_caseD_4:
  return in_lr;
}

