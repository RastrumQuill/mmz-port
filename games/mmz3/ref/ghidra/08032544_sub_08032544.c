// sub_08032544 at 0x08032544 (thumb)

undefined4 sub_08032544(int param_1,short param_2,uint param_3)

{
  undefined uVar1;
  char cVar2;
  undefined2 uVar3;
  undefined *puVar4;
  uint *puVar5;
  char *pcVar6;
  undefined4 in_lr;
  char local_18 [4];
  
  param_3 = param_3 & 0xff;
  pcVar6 = (char *)(param_1 + 0xee);
  if (*pcVar6 == '\0') {
    sub_08017700(param_1);
    sub_0803964C(param_1);
    *pcVar6 = *pcVar6 + '\x01';
    return in_lr;
  }
  sub_08034558(param_1,param_2);
  if (CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70)) != param_2) {
    sub_080177CC(param_1,param_2,*(undefined *)(param_1 + 0x140),*(undefined *)(param_1 + 0x141));
  }
  if ('\x05' < *(char *)(param_1 + 0x71)) {
    cVar2 = sub_0803462C(param_1);
    if (cVar2 != '\0') {
      if (param_3 == 0) {
        uVar1 = 0x10;
      }
      else {
        uVar1 = 0;
      }
      *(undefined *)(param_1 + 0x13b) = uVar1;
      uVar1 = 0;
      *(undefined *)(param_1 + 0xed) = 0xb;
      puVar4 = (undefined *)(param_1 + 0xee);
      goto LAB_0803275c;
    }
    if (*(char *)(param_1 + 0x133) != '\0') {
      if (param_3 == 0) {
        *(undefined *)(param_1 + 0x13b) = 0x10;
      }
      else {
        *(undefined *)(param_1 + 0x13b) = 0;
      }
      puVar5 = (uint *)(param_1 + 0x218);
      if ((*puVar5 & 0x10) != 0) {
        *(undefined *)(param_1 + 0x4c) = 1;
        *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) | 0x10;
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
      }
      if ((*puVar5 & 0x20) != 0) {
        *(undefined *)(param_1 + 0x4c) = 0;
        *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
      }
      if ((*puVar5 & 0x40) == 0) {
        if ((*puVar5 & 0x80) == 0) {
          puVar4 = &DAT_0835b014;
        }
        else {
          puVar4 = &DAT_0835b018;
        }
      }
      else {
        puVar4 = &DAT_0835b016;
      }
      *(undefined *)(param_1 + 0xed) = puVar4[param_3];
      *(undefined *)(param_1 + 0xee) = 0;
      *(char *)(param_1 + 0x133) = '\0';
      return in_lr;
    }
    cVar2 = sub_080341A4(param_1,param_1 + 0x128);
    if (cVar2 != '\0') {
      if (param_3 == 0) {
        *(undefined *)(param_1 + 0x13b) = 0x10;
      }
      else {
        *(undefined *)(param_1 + 0x13b) = 0;
      }
      *(undefined *)(param_1 + 0xec) = 3;
      *(undefined *)(param_1 + 0xed) = 0;
      sub_0802D300(param_1);
      return in_lr;
    }
  }
  if (*(char *)(param_1 + 0x73) == '\x03') {
    if (param_3 == 0) {
      uVar1 = 0x10;
    }
    else {
      uVar1 = 0;
    }
    *(undefined *)(param_1 + 0x13b) = uVar1;
    *(undefined *)(param_1 + 0xec) = 0;
    uVar3 = sub_08025BEC(param_1);
    sub_08017700(param_1,uVar3);
    puVar4 = (undefined *)(param_1 + 0x126);
    uVar1 = 0xff;
  }
  else {
    cVar2 = sub_080341A4(param_1,local_18);
    if (cVar2 == '\0') {
      return in_lr;
    }
    if (local_18[0] != '\x02') {
      return in_lr;
    }
    puVar4 = (undefined *)(param_1 + 0x133);
    uVar1 = 1;
  }
LAB_0803275c:
  *puVar4 = uVar1;
  return in_lr;
}

