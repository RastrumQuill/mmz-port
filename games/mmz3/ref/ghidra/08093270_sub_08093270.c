// sub_08093270 at 0x08093270 (thumb)

undefined4 sub_08093270(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  byte *pbVar5;
  char *pcVar6;
  int iVar7;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(undefined4 *)(param_1 + 100) = 0;
    *(undefined4 *)(param_1 + 0x68) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  if (*(int *)(param_1 + 0x68) == 0) {
    *(int *)(param_1 + 0xb4) = *(int *)(param_1 + 0xb4) + 0x1b0;
    iVar3 = *(int *)(param_1 + 100) + 0x1b0;
    *(int *)(param_1 + 100) = iVar3;
    if (0x21bf < iVar3) {
      *(undefined4 *)(param_1 + 100) = 0;
      *(undefined4 *)(param_1 + 0x68) = 0x3c;
    }
  }
  else {
    *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + -1;
  }
  iVar3 = sub_080FE4D8(*(int *)(param_1 + 0xb4),0xca80);
  *(int *)(param_1 + 0xb4) = iVar3;
  uVar4 = sub_080FE4D8(iVar3 + 0x870,0xca80);
  iVar3 = sub_080FE460(uVar4,0x870);
  iVar3 = -iVar3;
  iVar2 = iVar2 + 0xb4;
  pcVar6 = (char *)(iVar2 + (uint)*(byte *)(param_1 + 0x12));
  cVar1 = *pcVar6;
  if (cVar1 != '\0') {
    if ((*(uint *)(param_1 + 0x8c) & 1) != 0) {
      if ((*(uint *)(param_1 + 0x8c) & 0x20000) == 0) {
        cVar1 = cVar1 + -1;
      }
      else {
        cVar1 = '\0';
      }
      *pcVar6 = cVar1;
    }
    pbVar5 = (byte *)(iVar2 + (uint)*(byte *)(param_1 + 0x12));
    if (*pbVar5 != 0) {
      iVar7 = 1 - (uint)(*pbVar5 >> 2);
      goto LAB_0809333e;
    }
  }
  iVar7 = 2;
LAB_0809333e:
  if (iVar3 + 0x13U < 4) {
    if (*(char *)(iVar2 + (uint)*(byte *)(param_1 + 0x12)) == '\0') {
      sub_08007390(param_1 + 0x74,&DAT_08366580);
    }
    else {
      sub_08007390(param_1 + 0x74,&DAT_08366520);
    }
  }
  else if (iVar3 + 6U < 4) {
    if (*(char *)(iVar2 + (uint)*(byte *)(param_1 + 0x12)) == '\0') {
      sub_08007390(param_1 + 0x74,&DAT_08366598);
    }
    else {
      sub_08007390(param_1 + 0x74,&DAT_08366550);
    }
  }
  else {
    sub_08007390(param_1 + 0x74,&DAT_08366508);
  }
  if (((iVar3 + 0xcU < 3) && (iVar7 != 2)) || ((iVar3 + 0xdU < 5 && (iVar7 == 2)))) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    *(bool *)(param_1 + 0x22) = iVar7 == 2;
    sub_08017700(param_1,iVar7 * 0x18 + iVar3 + 0x8b17 & 0xffff);
    *(char *)(param_1 + 0x25) = (&UNK_083665c7)[iVar3] + '\x18';
    sub_080177F4(param_1);
  }
  if (*(int *)(param_1 + 0x5c) != iVar7) {
    *(int *)(param_1 + 0x5c) = iVar7;
    if (iVar7 == 1) {
      sub_0800471C(0x91);
    }
    else if (iVar7 == 2) {
      sub_0800471C(0x93);
    }
  }
  return in_lr;
}

