// sub_0803A614 at 0x0803A614 (thumb)

undefined8 sub_0803A614(int param_1,undefined param_2,uint param_3)

{
  undefined *puVar1;
  uint uVar2;
  undefined4 in_lr;
  
  uVar2 = 0xff;
  switch(param_2) {
  case 3:
    puVar1 = &DAT_088500ba;
    break;
  case 4:
    puVar1 = &DAT_088500ee;
    break;
  case 5:
    puVar1 = &DAT_088500de;
    break;
  case 6:
    puVar1 = &DAT_088500cd;
    break;
  case 7:
    puVar1 = &DAT_088500f3;
    break;
  default:
    goto switchD_0803a630_caseD_5;
  }
  uVar2 = (uint)(byte)puVar1[param_3 & 0xff];
switchD_0803a630_caseD_5:
  if ((uVar2 < 9) && (*(char *)(param_1 + 0xc4) == '\b')) {
    uVar2 = uVar2 + 1 & 0xff;
  }
  return CONCAT44(in_lr,uVar2);
}

