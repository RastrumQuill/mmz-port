// sub_0806FFDC at 0x0806FFDC (thumb)

undefined4 sub_0806FFDC(int param_1)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  byte *pbVar4;
  undefined uVar5;
  undefined4 in_lr;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    sub_080127E4(param_1,0x1800);
    uVar5 = 0xff;
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      uVar5 = 1;
    }
    *(undefined *)(param_1 + 0xb7) = uVar5;
    *(undefined *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 1:
    sub_080128D4(param_1);
    bVar1 = *(char *)(param_1 + 0x12) + 1;
    *(byte *)(param_1 + 0x12) = bVar1;
    if ((bVar1 & 3) != 0) {
      return in_lr;
    }
    pbVar4 = (byte *)(param_1 + 0xb6);
    bVar1 = *pbVar4;
    *pbVar4 = bVar1 + 1;
    if ((byte)(bVar1 + 1) < 3) {
LAB_0807014c:
      sub_080127E4(param_1,*(undefined2 *)(&DAT_080ef798 + (uint)*(byte *)(param_1 + 0xb6) * 2));
      return in_lr;
    }
    *pbVar4 = 2;
    uVar3 = DAT_0202e188 * 0x343fd + 0x269ec3;
    DAT_0202e188 = uVar3 & 0x7fffffff;
    if ((uVar3 * 2 >> 0x11 & 3) == 0) {
      local_24 = *(int *)(param_1 + 0x54) + *(char *)(param_1 + 0xb7) * -0x1200;
      local_20 = *(int *)(param_1 + 0x58) + -0x1600;
      sub_080AC60C(3,&local_24);
      uVar3 = DAT_0202e188 * 0x343fd + 0x269ec3;
      DAT_0202e188 = uVar3 & 0x7fffffff;
      *(byte *)(param_1 + 0x12) = ((byte)(uVar3 * 2 >> 0x11) & 0x3f) + 0x20;
      *(undefined *)(param_1 + 0xe) = 3;
      return in_lr;
    }
    cVar2 = *(char *)(param_1 + 0xe) + '\x01';
    break;
  case 2:
    sub_080128D4(param_1);
    bVar1 = *(char *)(param_1 + 0x12) - 1;
    *(byte *)(param_1 + 0x12) = bVar1;
    if ((bVar1 & 3) != 0) {
      return in_lr;
    }
    pbVar4 = (byte *)(param_1 + 0xb6);
    bVar1 = *pbVar4;
    *pbVar4 = bVar1 + 1;
    if ((byte)(bVar1 + 1) < 4) goto LAB_0807014c;
    *pbVar4 = 0;
    uVar3 = DAT_0202e188 * 0x343fd + 0x269ec3;
    DAT_0202e188 = uVar3 & 0x7fffffff;
    if ((uVar3 * 2 >> 0x11 & 3) == 0) {
      *(undefined *)(param_1 + 0x12) = 0;
      goto LAB_080701c2;
    }
    uVar3 = DAT_0202e188 * 0x343fd + 0x269ec3;
    DAT_0202e188 = uVar3 & 0x7fffffff;
    *(byte *)(param_1 + 0x12) = ((byte)(uVar3 * 2 >> 0x11) & 0x1f) + 0x20;
    cVar2 = '\x04';
    break;
  case 3:
    sub_080128D4(param_1);
    bVar1 = *(char *)(param_1 + 0x12) - 1;
    *(byte *)(param_1 + 0x12) = bVar1;
    if ((bVar1 & 7) == 0) {
      local_1c = *(int *)(param_1 + 0x54) + *(char *)(param_1 + 0xb7) * -0x1200;
      local_18 = *(int *)(param_1 + 0x58) + -0x1600;
      sub_080AC60C(3);
    }
    if (*(char *)(param_1 + 0x12) != '\0') {
      return in_lr;
    }
    cVar2 = *(char *)(param_1 + 0xe) + -1;
    break;
  case 4:
    sub_080128D4(param_1);
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 != '\0') {
      return in_lr;
    }
LAB_080701c2:
    cVar2 = '\x01';
    break;
  default:
    goto switchD_0806fff2_caseD_5;
  }
  *(char *)(param_1 + 0xe) = cVar2;
switchD_0806fff2_caseD_5:
  return in_lr;
}

