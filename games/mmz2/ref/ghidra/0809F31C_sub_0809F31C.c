// sub_0809F31C at 0x0809F31C (thumb)

undefined4 sub_0809F31C(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  byte *pbVar5;
  int iVar6;
  undefined4 in_lr;
  
  iVar6 = *(int *)(param_1 + 0x28);
  if ((1 < *(byte *)(iVar6 + 0xc)) || (*(char *)(iVar6 + 0xd) == '\v')) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 8);
    sub_0809F14C(param_1);
    return in_lr;
  }
  sub_080128D4(param_1);
  if ((*(byte *)(iVar6 + 10) & 0x10) == 0) {
    iVar3 = *(int *)(iVar6 + 0x54) - *(int *)(param_1 + 100);
  }
  else {
    iVar3 = *(int *)(iVar6 + 0x54) + *(int *)(param_1 + 100);
  }
  *(int *)(param_1 + 0xb4) = iVar3;
  *(int *)(param_1 + 0xb8) = *(int *)(iVar6 + 0x58) - *(int *)(param_1 + 0x68);
  pbVar5 = (byte *)(param_1 + 0xbc);
  piVar4 = (int *)(param_1 + 0xc0);
  iVar6 = *piVar4 * (int)(short)(&DAT_080ef450)[*pbVar5 + 0x40 & 0xff];
  if (iVar6 < 0) {
    iVar6 = iVar6 + 0xff;
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0xb4) + (iVar6 >> 8);
  iVar6 = *piVar4 * (int)(short)(&DAT_080ef450)[*pbVar5];
  if (iVar6 < 0) {
    iVar6 = iVar6 + 0xff;
  }
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0xb8) + (iVar6 >> 8);
  switch(*(undefined *)(param_1 + 0xd)) {
  case 0:
    sub_080128D4(param_1);
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    goto LAB_0809f47a;
  case 1:
    sub_080127E4(param_1,0x3206);
    sub_0809F09C(param_1,1,1);
    sub_0809F09C(param_1,1,3);
    sub_0809F09C(param_1,1,5);
    sub_0809F09C(param_1,1,7);
    sub_0809F09C(param_1,1,9);
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 2:
    sub_080128D4(param_1);
    iVar6 = *piVar4;
    *piVar4 = iVar6 + 0x200;
    if (0x4000 < iVar6 + 0x200) {
      *(undefined *)(param_1 + 0xbf) = 1;
LAB_0809f47a:
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    }
    break;
  case 3:
    sub_080128D4(param_1);
    if (*(char *)(param_1 + 0xbe) == '\0') {
      bVar1 = *pbVar5;
      *pbVar5 = bVar1 - 1;
      if (*(byte *)(param_1 + 0xbd) <= (byte)(bVar1 - 1)) {
        return in_lr;
      }
      cVar2 = '\x01';
    }
    else {
      *pbVar5 = *pbVar5 + 1;
      if ((uint)*pbVar5 <= *(byte *)(param_1 + 0xbd) + 0x70) {
        return in_lr;
      }
      cVar2 = '\0';
    }
    *(char *)(param_1 + 0xbe) = cVar2;
  }
  return in_lr;
}

