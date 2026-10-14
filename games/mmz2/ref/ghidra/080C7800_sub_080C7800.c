// sub_080C7800 at 0x080C7800 (thumb)

undefined4 sub_080C7800(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xd)) {
  case 0:
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    sub_08006DE4(param_1 + 0x74,&DAT_08348d28,param_1 + 0x54,0x40);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0;
    sub_080127E4(param_1,0xc319);
    *(undefined2 *)(param_1 + 0x50) = 0x20;
    *(undefined2 *)(param_1 + 0x52) = 0x200;
    *(int *)(param_1 + 0x58) = DAT_0202ed54 + -0x6000;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 1:
    sub_080128D4(param_1);
    sub_08012CD0(param_1);
    iVar3 = *(int *)(param_1 + 0x58) + 0x1c00;
    *(int *)(param_1 + 0x58) = iVar3;
    if (iVar3 <= *(int *)(param_1 + 0x68)) {
      return in_lr;
    }
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x68);
    sub_080032EC(0x9b);
    *(undefined *)(param_1 + 0x12) = 1;
    break;
  case 2:
    sub_080128D4(param_1);
    sub_08012CD0(param_1);
    *(ushort *)(param_1 + 0x50) = (ushort)*(byte *)(param_1 + 0x12) * 0x40 + 0x20;
    *(ushort *)(param_1 + 0x52) = (ushort)*(byte *)(param_1 + 0x12) * -0x20 + 0x160;
    bVar1 = *(char *)(param_1 + 0x12) + 1;
    *(byte *)(param_1 + 0x12) = bVar1;
    if (bVar1 < 5) {
      return in_lr;
    }
    *(undefined *)(param_1 + 0x12) = 1;
    break;
  case 3:
    sub_080128D4(param_1);
    sub_08012CD0(param_1);
    *(ushort *)(param_1 + 0x50) = (ushort)*(byte *)(param_1 + 0x12) * -4 + 0x120;
    *(ushort *)(param_1 + 0x52) = (ushort)*(byte *)(param_1 + 0x12) * 4 + 0xe0;
    bVar1 = *(char *)(param_1 + 0x12) + 1;
    *(byte *)(param_1 + 0x12) = bVar1;
    if (bVar1 < 9) {
      return in_lr;
    }
    break;
  case 4:
    sub_08012580(param_1);
    sub_080127D0(param_1);
    sub_080127E4(param_1,0xc319);
    *(undefined *)(param_1 + 0x12) = 0x1e;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 5:
    sub_080128D4(param_1);
    if ((*(byte *)(param_1 + 0x12) & 1) == 0) {
      sub_08012CD0(param_1);
    }
    else {
      sub_08012C04(param_1);
    }
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 != '\0') {
      return in_lr;
    }
    break;
  case 6:
    sub_080128D4(param_1);
  default:
    goto switchD_080c7814_caseD_7;
  }
  *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
switchD_080c7814_caseD_7:
  return in_lr;
}

