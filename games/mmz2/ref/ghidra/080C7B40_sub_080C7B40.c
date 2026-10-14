// sub_080C7B40 at 0x080C7B40 (thumb)

undefined4 sub_080C7B40(int param_1)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xd)) {
  case 0:
    sub_080127E4(param_1,0xc400);
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 1:
    sub_080128D4(param_1);
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 1) == 0) {
      return in_lr;
    }
    sub_080127E4(param_1,0xc401);
    *(undefined *)(param_1 + 0x12) = 0xf;
    break;
  case 2:
    sub_080128D4(param_1);
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != '\0') {
      return in_lr;
    }
    uVar3 = 0xc407;
    goto LAB_080c7ce2;
  case 3:
    sub_080128D4(param_1);
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 2) == 0) {
      return in_lr;
    }
    sub_080127E4(param_1,0xc400);
    *(undefined *)(param_1 + 0x12) = 0xf;
    break;
  case 4:
    sub_080128D4(param_1);
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != '\0') {
      return in_lr;
    }
    uVar3 = 0xc406;
    goto LAB_080c7ce2;
  case 5:
    sub_080128D4(param_1);
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 4) == 0) {
      return in_lr;
    }
    sub_080127E4(param_1,0xc401);
    *(undefined *)(param_1 + 0x12) = 0;
    break;
  case 6:
    sub_080128D4(param_1);
    uVar2 = (uint)((0x100 - (short)(&DAT_080ef450)[*(byte *)(param_1 + 0x12) + 0x40 & 0xff]) *
                   ((short)(&DAT_080ef450)[(*(byte *)(param_1 + 0x12) & 0x1f) * 8] + 0x100) * 2) >>
            0x10 & 0xf;
    uVar2 = uVar2 << 4 | uVar2;
    DAT_02000ff0 = (ushort)uVar2 | (ushort)(uVar2 << 8);
    if (*(char *)(param_1 + 0x12) == -0x80) {
      sub_080127E4(param_1,0xc40c);
    }
    cVar1 = *(char *)(param_1 + 0x12) + '\x01';
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != -1) {
      return in_lr;
    }
    DAT_02000ff0 = 0;
    break;
  case 7:
    sub_080128D4(param_1);
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 8) == 0) {
      return in_lr;
    }
    uVar3 = 0xc40d;
    goto LAB_080c7ce2;
  case 8:
    sub_080128D4(param_1);
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 0x10) == 0) {
      return in_lr;
    }
    uVar3 = 0xc400;
LAB_080c7ce2:
    sub_080127E4(param_1,uVar3);
    break;
  case 9:
    sub_080128D4(param_1);
  default:
    goto switchD_080c7b54_caseD_a;
  }
  *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
switchD_080c7b54_caseD_a:
  return in_lr;
}

