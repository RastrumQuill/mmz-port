// sub_080683CC at 0x080683CC (thumb)

undefined4 sub_080683CC(int param_1)

{
  byte bVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  undefined4 in_lr;
  int local_1c;
  undefined4 local_18;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0801260C(param_1);
    sub_080127E4(param_1,0x60a);
    bVar3 = *(byte *)(param_1 + 0x13);
    if (bVar3 == 0) {
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar1;
    *(byte *)(param_1 + 0x4c) = bVar3;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)((bVar3 & 1) << 4);
    *(undefined *)(param_1 + 0x24) = 0;
    if (*(char *)(param_1 + 0x13) == '\0') {
      local_1c = *(int *)(param_1 + 0x54) + -0x200;
    }
    else {
      local_1c = *(int *)(param_1 + 0x54) + 0x200;
    }
    local_18 = *(undefined4 *)(param_1 + 0x58);
    sub_080B0E7C(param_1,&local_1c,1);
    *(undefined *)(param_1 + 0x12) = 0;
    *(undefined *)(param_1 + 0xb4) = 0;
    *(undefined *)(param_1 + 0xb5) = 1;
    *(undefined *)(param_1 + 0xb6) = 0;
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(undefined4 *)(param_1 + 0x60) = 0x100;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  bVar3 = *(byte *)(param_1 + 10) >> 4;
  bVar1 = bVar3 & 1;
  cVar2 = *(char *)(param_1 + 0x12) + '\x01';
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 == -0x60) {
    sub_080032EC(0x2a);
    sub_0806871C(param_1,bVar1);
    if (DAT_0202ebfc < 9999) {
      DAT_0202ebfc = DAT_0202ebfc + 1;
    }
    goto LAB_0806860e;
  }
  sub_080128D4(param_1);
  cVar2 = sub_08068800(param_1,*(undefined *)(param_1 + 0xb7));
  if (cVar2 == '\0') {
    *(undefined *)(param_1 + 0xb6) = 1;
    return in_lr;
  }
  if (*(char *)(param_1 + 0xb6) == '\0') {
    if (*(byte *)(param_1 + 0x12) < 0x30) {
      return in_lr;
    }
    pbVar6 = (byte *)(param_1 + 0xb5);
    pbVar5 = (byte *)(param_1 + 0xb4);
    iVar4 = ((int)((uint)*pbVar5 << 0x18) >> 0x1d) + (uint)*pbVar6;
    *pbVar6 = (byte)iVar4;
    iVar4 = ((int)(short)(&DAT_080ef450)[((uint)*pbVar5 + iVar4 & 0xff) + 0x40 & 0xff] -
            (int)(short)(&DAT_080ef450)[(int)(char)*pbVar5 + 0x40U & 0xff]) * 0x100000 >> 0x10;
    if ((bVar3 & 1) == 0) {
      *(int *)(param_1 + 0x5c) = -iVar4;
      cVar2 = sub_080688B4(param_1,0xc);
      if (cVar2 != '\0') {
        sub_080032EC(0x2a);
        bVar3 = 0;
        goto LAB_080685a2;
      }
      *(byte *)(param_1 + 0x24) = *pbVar5;
      *pbVar5 = *pbVar6 + *pbVar5;
    }
    else {
      *(int *)(param_1 + 0x5c) = iVar4;
      cVar2 = sub_080688B4(param_1,0xc);
      if (cVar2 == '\0') {
        *(byte *)(param_1 + 0x24) = *pbVar5;
        *pbVar5 = *pbVar6 + *pbVar5;
      }
      else {
        sub_080032EC(0x2a);
        bVar3 = bVar1;
LAB_080685a2:
        sub_0806871C(param_1,bVar3);
        sub_0801DD2C(3,param_1 + 0x54);
        if (DAT_0202ebfc < 9999) {
          DAT_0202ebfc = DAT_0202ebfc + 1;
        }
        sub_0801DE2C(param_1,param_1 + 0x54);
        *(undefined4 *)(param_1 + 0xc) = 4;
        *(undefined4 *)(param_1 + 0x14) =
             *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
      }
    }
    if ((char)*pbVar5 < '!') {
      return in_lr;
    }
  }
  sub_080032EC(0x2a);
  sub_0806871C(param_1,bVar1);
  sub_0801DD2C(3,param_1 + 0x54);
  if (DAT_0202ebfc < 9999) {
    DAT_0202ebfc = DAT_0202ebfc + 1;
  }
LAB_0806860e:
  sub_0801DE2C(param_1,param_1 + 0x54);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  return in_lr;
}

