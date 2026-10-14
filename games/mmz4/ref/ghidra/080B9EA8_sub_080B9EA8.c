// sub_080B9EA8 at 0x080B9EA8 (thumb)

undefined4 sub_080B9EA8(int param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 in_lr;
  int local_30 [3];
  byte abStack_24 [8];
  int local_1c;
  int local_18;
  
  local_30[0] = -0x800;
  local_30[1] = 0xffffe000;
  local_30[2] = 0xffffd000;
  sub_08128B5C(abStack_24,&DAT_0812990c,7);
  uVar5 = *(undefined4 *)(param_1 + 0x28);
  uVar4 = *(byte *)(param_1 + 10) >> 4 & 1;
  switch(*(undefined *)(param_1 + 0xf)) {
  case 0:
    sub_08005784(param_1 + 0x74,&DAT_08860f94);
    DAT_02000a40 = 0;
    *(byte *)(param_1 + 0x45) = *(byte *)(param_1 + 0x45) & 0xf3;
    *(undefined *)(param_1 + 0x13) = 4;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  case 1:
    break;
  case 2:
    goto switchD_080b9edc_caseD_2;
  case 3:
    *(undefined *)(param_1 + 0x12) = 0x10;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  case 4:
    sub_0801CFF0(param_1);
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != '\0') {
      return in_lr;
    }
    if (*(char *)(param_1 + 0x13) == '\0') {
      *(undefined *)(param_1 + 0xd) = 4;
      *(undefined *)(param_1 + 0xe) = 0;
      *(undefined *)(param_1 + 0xf) = 0;
      return in_lr;
    }
    cVar1 = '\x01';
    goto LAB_080b9ffe;
  default:
    goto switchD_080b9edc_caseD_5;
  }
  sub_0801CF00(param_1,0xbf01);
  *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
switchD_080b9edc_caseD_2:
  sub_0801CFF0(param_1);
  sub_08005784(param_1 + 0x74,&DAT_08860f64 + (uint)abStack_24[*(char *)(param_1 + 0x71)] * 0x18);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    local_1c = *(int *)(param_1 + 0x54) + (uVar4 * 2 + -1) * 0x2800;
    uVar2 = DAT_0202dc38 * 0x343fd + 0x269ec3;
    DAT_0202dc38 = uVar2 & 0x7fffffff;
    iVar3 = sub_08128A9C(uVar2 * 2 >> 0x11,3);
    local_18 = *(int *)(param_1 + 0x58) + local_30[iVar3];
    sub_080CFB60(uVar5,&local_1c,0,uVar4);
    *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + -1;
    cVar1 = *(char *)(param_1 + 0xf) + '\x01';
LAB_080b9ffe:
    *(char *)(param_1 + 0xf) = cVar1;
  }
switchD_080b9edc_caseD_5:
  return in_lr;
}

