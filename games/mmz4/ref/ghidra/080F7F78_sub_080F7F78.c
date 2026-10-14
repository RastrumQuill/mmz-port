// sub_080F7F78 at 0x080F7F78 (thumb)

undefined4 sub_080F7F78(uint *param_1,undefined4 param_2,uint param_3)

{
  undefined uVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_lr;
  
  param_3 = param_3 & 0xff;
  uVar1 = sub_080F811C();
  switch(uVar1) {
  case 0:
  case 2:
    param_1[1] = param_1[1] + param_3 * -0x100;
    return in_lr;
  case 1:
    uVar2 = *param_1;
    if ((uVar2 & 0xfff) < 0x101) {
      *param_1 = uVar2 & 0xfffff000;
      uVar2 = param_1[1];
      iVar3 = -0x100;
      goto LAB_080f8038;
    }
    uVar2 = uVar2 - 0x100;
    break;
  case 3:
  case 4:
    iVar3 = param_3 << 8;
    uVar2 = param_1[1];
LAB_080f8038:
    param_1[1] = uVar2 + iVar3;
    return in_lr;
  case 5:
    uVar2 = *param_1;
    if ((uVar2 & 0xfff) < 0x101) {
      *param_1 = uVar2 & 0xfffff000;
      uVar2 = param_1[1];
      iVar3 = 0x100;
      goto LAB_080f8038;
    }
    uVar2 = uVar2 - 0x100;
    break;
  case 6:
  case 7:
    uVar2 = *param_1 + param_3 * -0x100;
    break;
  case 8:
    uVar2 = param_1[1];
    if (0x100 < (uVar2 & 0xfff)) {
LAB_080f8088:
      param_1[1] = uVar2 - 0x100;
      return in_lr;
    }
    param_1[1] = uVar2 & 0xfffff000;
    uVar2 = *param_1;
    iVar3 = -0x100;
    goto LAB_080f80a4;
  case 9:
  case 0xb:
    iVar3 = param_3 << 8;
    uVar2 = *param_1;
    goto LAB_080f80a4;
  case 10:
    uVar2 = param_1[1];
    if (0x100 < (uVar2 & 0xfff)) goto LAB_080f8088;
    param_1[1] = uVar2 & 0xfffff000;
    uVar2 = *param_1;
    iVar3 = 0x100;
LAB_080f80a4:
    uVar2 = uVar2 + iVar3;
    break;
  default:
    goto switchD_080f7f96_caseD_c;
  }
  *param_1 = uVar2;
switchD_080f7f96_caseD_c:
  return in_lr;
}

