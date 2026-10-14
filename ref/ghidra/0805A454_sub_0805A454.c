// sub_0805A454 at 0x0805A454 (thumb)

/* WARNING: Type propagation algorithm not settling */

undefined4 sub_0805A454(int param_1)

{
  undefined uVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) & 0xf3 | 8;
    iVar4 = *(int *)(DAT_0202286c + 0x4c);
    iVar6 = iVar4 - *(int *)(param_1 + 0x4c);
    *(bool *)(param_1 + 0x44) = 0 < iVar6;
    if (iVar4 == *(int *)(param_1 + 0x4c) || iVar6 < 0) {
      bVar3 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar3 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar3;
  case 1:
    bVar3 = (*(byte *)(param_1 + 10) >> 4 ^ 1) & 1;
    *(byte *)(param_1 + 0x44) = bVar3;
    if (bVar3 == 0) {
      bVar3 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar3 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar3;
  case 2:
    break;
  case 3:
    goto switchD_0805a468_caseD_3;
  case 4:
    sub_0800561C(param_1 + 0x74,&DAT_082afd68);
    sub_080033F0(param_1 + 0x6c,2);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 5:
    sub_08003458(param_1 + 0x6c);
    *(undefined *)(param_1 + 0x46) =
         *(undefined *)
          (*(char *)(param_1 + 0x71) * 4 +
          *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    if (*(char *)(param_1 + 0xc1) == '\x02') {
      *(undefined *)(param_1 + 0xd) = 2;
      *(undefined *)(param_1 + 0xe) = 0;
      bVar3 = (*(byte *)(param_1 + 10) >> 4 ^ 1) & 1;
      *(byte *)(param_1 + 0x44) = bVar3;
      if (bVar3 == 0) {
        bVar3 = *(byte *)(param_1 + 10) & 0xef;
      }
      else {
        bVar3 = *(byte *)(param_1 + 10) | 0x10;
      }
      *(byte *)(param_1 + 10) = bVar3;
      sub_0805A758(param_1);
      return in_lr;
    }
    *(undefined *)(param_1 + 0xe) = 1;
    return in_lr;
  default:
    return in_lr;
  }
  sub_0800561C(param_1 + 0x74,&DAT_082afd68);
  sub_080033F0(param_1 + 0x6c,1);
  *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) & 0xf3 | 8;
  *(undefined *)(param_1 + 0x12) = 0x50;
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_0805a468_caseD_3:
  *(undefined4 *)(param_1 + 0x58) = 0;
  iVar6 = *(int *)(DAT_0202286c + 0x4c) - *(int *)(param_1 + 0x4c);
  iVar4 = iVar6;
  if (iVar6 < 0) {
    iVar4 = -iVar6;
  }
  if (iVar4 < 0x8000) {
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      if (iVar6 < 0) goto LAB_0805a560;
    }
    else if (-1 < iVar6) {
LAB_0805a560:
      uVar5 = DAT_02022890 * 0x343fd + 0x269ec3;
      DAT_02022890 = uVar5 & 0x7fffffff;
      if ((uVar5 * 2 >> 0x11 & 0xf) < 0xc) {
        uVar1 = 2;
      }
      else {
        uVar1 = 3;
      }
      *(undefined *)(param_1 + 0xd) = uVar1;
      *(undefined *)(param_1 + 0xe) = 0;
      return in_lr;
    }
  }
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 == '\0') {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  return in_lr;
}

